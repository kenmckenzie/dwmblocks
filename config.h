//Modify this file to change what commands output to your statusbar, and recompile using the make command.
static const Block blocks[] = {
	/*Command*/				/*Update Interval*/	/*Update Signal*/

/*	{ "~/.local/bin/statusbar/torrent",    	20,	    		7},*/
	{ "~/.local/bin/statusbar/weather",   	18000,			5},
	{ "~/.local/bin/statusbar/clock",      	60,			1},
	{ "~/.local/bin/statusbar/volume ",	0,			10},
	{ "~/.local/bin/statusbar/internet",	20,	 		2},
};

//sets delimeter between status commands. NULL character ('\0') means no delimeter.
static char delim = '|';
