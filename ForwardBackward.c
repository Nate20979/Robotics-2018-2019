#pragma config(Motor,  port2,           rightMotor,    tmotorServoContinuousRotation, openLoop, reversed)
#pragma config(Motor,  port3,           leftMotor,     tmotorServoContinuousRotation, openLoop)
//*!!Code automatically generated by 'ROBOTC' configuration wizard               !!*//

task main()
{

while(true) {

	if (vexRT[Ch2] == 0) {
		if (vexRT[Ch1] != 0) {
			if (vexRT[Ch1] > 0) {
				motor[leftMotor] = (vexRT[Ch1] / 2);
				motor[rightMotor] = -(vexRT[Ch1] / 2);
			}
			else if (vexRT[Ch1] < 0) {
				motor[leftMotor] = (vexRT[Ch1] / 2);
				motor[rightMotor] = -(vexRT[Ch1] / 2);
			}
		}
	}

	else if (vexRT[Ch1] == 0) {
		if (vexRT[Ch2] != 0) {
			motor[rightMotor] = vexRT[Ch2];
			motor[leftMotor] = vexRT[Ch2];
		}
	}




}

}
