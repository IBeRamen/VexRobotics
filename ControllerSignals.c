int chan1, chan2, chan3, chan4, bttn5u, bttn5d, bttn6u, bttn6d, bttn7u, bttn7d, bttn7l, bttn7r, bttn8u, bttn8d, bttn8l, bttn8r, tiltX, tiltY, tiltZ;

task main()
{
	chan1 = vexRT[Ch1];
	chan2 = vexRT[Ch2];
	chan3 = vexRT[Ch3];
	chan4 = vexRT[Ch4];
	bttn5u = vexRT[Btn5U];
	bttn5d = vexRT[Btn5D];
	bttn6u = vexRT[Btn6U];
	bttn6d = vexRT[Btn6D];
	bttn7u = vexRT[Btn7U];
	bttn7d = vexRT[Btn7D];
	bttn7l = vexRT[Btn7L];
	bttn7r = vexRT[Btn7R];
	bttn8u = vexRT[Btn8U];
	bttn8d = vexRT[Btn8D];
	bttn8l = vexRT[Btn8L];
	bttn8r =  vexRT[Btn8R];
	tiltX = vexRT[AccelX];
	tiltY = vexRT[AccelY];
	tiltZ = vexRT[AccelZ];
}
