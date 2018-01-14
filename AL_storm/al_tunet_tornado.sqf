if (!hasInterface) exitWith {};

	_tunet_tornado = _this select 0;
	
	_fulger_prez = random 53;

	if (_fulger_prez > 47) then {

		// ************** fulger ***********************

		_direction 	= [_tunet_tornado, 2, random 360, [0]] call BIS_fnc_param;
		
		//tunet sunet
		private "_thunder";
		_thunder = ["thunder_1", "thunder_2"] call BIS_fnc_selectRandom;

		//Relative positionn
		private "_relativePosition";
		_relativePosition = [_tunet_tornado, 0, _direction] call bis_fnc_relPos;

		// fulger
		private "_bolt";
		_bolt = createvehicle ["LightningBolt", _relativePosition, [], 0, "can_collide"];
		_bolt setVelocity [0, 0, -10];

		// scanteia
		_lighting = "lightning_F" createvehiclelocal _relativePosition;
		_lighting setdir random 360;
		_lighting setpos _relativePosition;

		//The light _tunet_tornado
		_light = "#lightpoint" createvehiclelocal _relativePosition;
		_light setLightDayLight true;
		_light setpos _relativePosition;
		_light setLightBrightness random 30;
		_light setLightAmbient [0.5, 0.5, 1];
		_light setlightcolor [1, 1, 2];

		
		//Some delay
		sleep (0.3 + random 0.1);
		
		_tunet_tornado say3D _thunder;
		
		//Clean up
		deletevehicle _bolt;
		deletevehicle _light;
		deletevehicle _lighting;
	};