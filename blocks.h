//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "~/.config/dwmbar/mpc",		2,		1},
	{"", "~/.config/dwmbar/criptomoneda",	-1,		2},
	//{"", "~/.config/dwmbar/transmission",	10,		16},
	{"", "~/.config/dwmbar/ram_cpu",	30,		3},
	{"", "~/.config/dwmbar/storage",	-1,		4},
	{"", "~/.config/dwmbar/battery",	30,		5},
	{"", "~/.config/dwmbar/volumen",	0,		6},
	{"", "~/.config/dwmbar/weather",	-1,		7},
	{"", "~/.config/dwmbar/keyboard",	2,		8},
	{"", "~/.config/dwmbar/date",		-1,		9},
	{"", "~/.config/dwmbar/time",		40,		10},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '\0';
