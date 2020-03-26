//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	
	{" RAM:  ", "free -h | awk '/^Mem/ { print $3 }' | sed s/i//g",	30,		0},

	{" ", "status-vol.sh",						0,		10},

	{" X:  ", "xbacklight | cut -b -2",					0,		11},

	{" CPU:  ",   "sensors | awk '/^temp1:/{print $2}'",				5,		0},

	{" BAT2:  ", "status-bat0.sh",						5,		0},

	{" BAT1:  ", "status-bat1.sh",						5,		0},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = ' ';
