/* See LICENSE file for copyright and license details. */
/* Default settings; can be overriden by command line. */

static int topbar = 1;                      /* -b  option; if 0, dmenu appears at bottom     */

static const unsigned int alpha = 0xee;     /* Amount of opacity. 0xff is opaque             */

/* -fn option overrides fonts[0]; default X11 font or font set */

static const char *fonts[] = {
	"IoskeleyMono:size=11:antialias=true:autohint=true"
};

static const char *prompt      = NULL;      /* -p  option; prompt to the left of input field */

static const char *colors[SchemeLast][2] = {
    /* fg         bg       */
    [SchemeNorm] = { "#D6D6D6", "#0E1415" },
    [SchemeSel]  = { "#0E1415", "#4a88e4" },
    [SchemeOut]  = { "#ffffff", "#e9bf57" },
};


static const unsigned int alphas[SchemeLast][2] = {
	[SchemeNorm] = { OPAQUE, alpha },
	[SchemeSel] = { OPAQUE, alpha },
	[SchemeOut] = { OPAQUE, alpha },
};
/* -l and -g options; controls number of lines and columns in grid if > 0 */
static unsigned int lines      = 0;
static unsigned int columns    = 0;

/* center patch settings */
static int centered = 1;
static unsigned int min_width = 500;
static float menu_height_ratio = 1.0;

/*
 * Characters not considered part of a word while deleting words
 * for example: " /?\"&[]"
 */
static const char worddelimiters[] = " ";

/* Size of the window border */
static unsigned int border_width = 0;
