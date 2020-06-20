//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "~/.config/dwmbar/mpc",			1,		16},
	{"", "~/.config/dwmbar/criptomoneda",		0,		13},
	//{"", "~/.config/dwmbar/transmission",		10,		16},

	{"", "~/.config/dwmbar/ram",		15,		22},
	{"", "~/.config/dwmbar/storage",		15,		24},

	{"", "~/.config/dwmbar/battery",		30,		3},
	{"", "~/.config/dwmbar/volumen",		0,		19},
	{"", "~/.config/dwmbar/weather",		0,		21},
	{"", "~/.config/dwmbar/keyboard",		2,		11},
	{"", "~/.config/dwmbar/date",			60,		20},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '\0';
