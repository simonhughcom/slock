/* user and group to drop privileges to */
static const char *user  = "nobody";
static const char *group = "nobody";

static const char *colorname[NUMCOLS] = {
	[INIT]      =   "#222222",     /* after initialization */
	[INPUT]     =   "#c25704",   /* during input */
	[FAILED]    =   "#CC3333",   /* wrong password */
	[CAPS]      =   "#CC3333",         /* CapsLock on */

};

/* treat a cleared input like a wrong password (color) */
static const int failonclear = 1;

/* allow control key to trigger fail on clear */
static const int controlkeyclear = 0;

/* default message */
static const char * message = "Suckless: Software that sucks less.";

/* text color */
static const char * text_color = "#ffffff";

/* text size (must be a valid size) */
static const char * text_size = "12x24";
