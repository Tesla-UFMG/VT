clear;

EV.NumberOfWheelsPerAxle = 2;
EV.Mass = 357;
EV.FrontAxlePositionfromCG = 0.775;
EV.RearAxlePositionfromCG = 0.775;
EV.WheelBase = EV.FrontAxlePositionfromCG + EV.RearAxlePositionfromCG;
EV.HeightCG = 0.5;
EV.InitialLongPosition = 0;
EV.InitialLongVel = 9.1;                %[m/s]
EV.TrackWidth = [1.17 1.15];
EV.InitialLatPosition = 0;
EV.InitialLatVel = 0;
EV.YawMomentInertia = 250;              %750
EV.InitialYawAngle = 0;
EV.InitialYawRate = 0;
EV.FrontalArea = 0.78;                  %[m²]
EV.LongDragCoeff = 0.86;                 

WHL.DampingCoefficient = 0.001;
WHL.WheelInertia = 1.0;                 %0.8
WHL.RelaxationLength = 0.15;
WHL.LoadedRadius = 0.25;
WHL.UnloadedRadius = 0.25;
WHL.WheelInitAngVel = EV.InitialLongVel/0.25;
    
MTR.Speed  = [0 461 565 670 775 880 942 943];
MTR.Torque = [13.1	13.1	10.6	9.0     7.7     6.8     6.4     0.1];
MTR.Overpower = 3.5;
MTR.MaxTorque = 13.1*MTR.Overpower;

EMP.Gain = 3.0;
EMP.TimeConstant = 0.02;

GND.Friction = ones(4,1).*2.5;

TME.Simulation = 16;

%%
% SKIDPAD SEM CONTROLE
CTRL.Kp = 0;%130
CTRL.Ki = 0;%120
CTRL.Kd = 0;%0;

MNVR.Value = 0.22*pi;
MNVR.Input = zeros(1, 64);
MNVR.Input(1:5) = 0;
MNVR.Input(6) = MNVR.Value*.5;
MNVR.Input(7:52) =MNVR.Value;
MNVR.Input(53) = MNVR.Value*.5;
MNVR.Input(55:64) = 0;

MNVR.InitStepTime  = 1.75;
MNVR.InitStepValue = 0.23*pi;

MNVR.FinalStepTime  = 14.05;
MNVR.FinalStepValue = -0.23*pi;

MNVR.Value2 = 0.11*pi;
MNVR.Input2 = zeros(1, 64);
MNVR.Input2(1:5) = 0;
MNVR.Input2(6) = MNVR.Value2*.5;
MNVR.Input2(7:10) =MNVR.Value2;
MNVR.Input2(11) = MNVR.Value2*.5;
MNVR.Input2(12) = 0;
MNVR.Input2(13) = -MNVR.Value2*.5;
MNVR.Input2(14:22) =-MNVR.Value2;
MNVR.Input2(23) = -MNVR.Value2*.5;
MNVR.Input2(24) = 0;
MNVR.Input2(25) = MNVR.Value2*.5;
MNVR.Input2(26:34) =MNVR.Value2;
MNVR.Input2(35) = MNVR.Value2*.5;
MNVR.Input2(36) = 0;
MNVR.Input2(37) = -MNVR.Value2*.5;
MNVR.Input2(38:46) =-MNVR.Value2;
MNVR.Input2(47) = -MNVR.Value2*.5;
MNVR.Input2(48) = 0;
MNVR.Input2(49) = MNVR.Value2*.5;
MNVR.Input2(50:53) =MNVR.Value2;
MNVR.Input2(54) = MNVR.Value2*.5;
MNVR.Input2(55:64) = 0;
%%
%SKIDPAD COM CONTROLE REDUZINDO ANGULO
% CTRL.Kp = 130;
% CTRL.Ki = 120;
% CTRL.Kd = 0;
% MNVR.InitStepTime  = 2.5;
% MNVR.InitStepValue = 0.23*pi;
% 
% MNVR.FinalStepTime  = 14.05;
% MNVR.FinalStepValue = -0.23*pi;

%%
%SKIDPAD COM CONTROLE AUMENTANDO VELOCIDADE
% CTRL.Kp = 130;
% CTRL.Ki = 120;
% 
% MNVR.InitStepTime  = 2.5;
% MNVR.InitStepValue = 0.23*pi;%0.23*pi;
% 
% MNVR.FinalStepTime  = 14.05;
% MNVR.FinalStepValue = -0.23*pi;
%  
% EV.InitialLongVel = 9.52;             %[m/s]
% WHL.WheelInitAngVel = EV.InitialLongVel/0.25;

%%

%Adições:

EV.CornerStiffFront =   50420.286;        %[N/rad]
EV.CornerStiffRear =    50420.286;  

STEER.Volante =         [-1.941983885	-1.623822692	-1.300158711	-0.97349321     -0.646327455	-0.321162714	0	0.321162714	0.646327455	0.97349321	1.300158711	1.623822692	1.941983885];
STEER.Right =           [-0.523598776	-0.436332313	-0.34906585     -0.262          -0.174532925	-0.087266463	0	0.089011792	0.181863308	0.278729082	0.380132711	0.486772328	0.599520598];
STEER.Left =            [-0.599520598	-0.486772328	-0.380132711	-0.279          -0.181863308     -0.089011792	0	0.087266463	0.174532925	0.261799388	0.34906585	0.436332313	0.523598776];

SENSOR.SteerAvg =       (STEER.Right + STEER.Left)/2;
SENSOR.APPSAcionado =   [0 20 40 60 80 100];
SENSOR.APPS1 =          [0.36 0.57 1.3 2.75 3.92 4.29];

CTRL.P =                [20 15 5 2 0 2 5 15 20];
CTRL.I =                [120 90 10 5 0 5 10 90 120];
CTRL.Angles =           [-pi/3 -pi/4 -pi/5 -pi/8 0 pi/8 pi/5 pi/4 pi/3];


