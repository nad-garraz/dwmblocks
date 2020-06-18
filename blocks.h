//Modify this file to change what commands output to your statusbar, and recompile using the make command.
//

static const Block blocks[] = {
	/*Icon*/	/*Command*/		/*Update Interval*/	/*Update Signal*/

	{"", "~/.config/dwmbar/dwm_mpc",			1,		12},
	{"", "~/.config/dwmbar/dwm_btc",			200,		13},
	//{"", "~/.config/dwmbar/dwm_transmission",		10,		16},
	{"", "~/.config/dwmbar/dwm_resources",			15,		2},
	{"", "~/.config/dwmbar/dwm_battery",			30,		3},
	{"", "~/.config/dwmbar/dwm_alsa",			0,		10},
	{"", "~/.config/dwmbar/dwm_weather",			600,		1},
	{"", "~/.config/dwmbar/dwm_keyboard",			2,		11},
	{"", "~/.config/dwmbar/dwm_date",			60,		4},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '\0';
