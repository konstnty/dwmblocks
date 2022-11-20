//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/
	{"",		"date +%T",		1,			1},
	{"",		"echo $(cat /sys/class/power_supply/BAT0/capacity)%", 1, 1},
	{"",		"date -I",		60,			1},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim[] = " ";
static unsigned int delimLen = 5;
