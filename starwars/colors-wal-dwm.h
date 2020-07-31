static const char norm_fg[] = "#a9c0c2";
static const char norm_bg[] = "#1d2021";
static const char norm_border[] = "#713F3F";
static const char bar_border[]   = "#713F3F";


static const char sel_fg[] = "#713F3F";
static const char sel_bg[] = "#252a30";
static const char sel_border[] = "#713F3F";

static const char urg_fg[] = "#713F3F";
static const char urg_bg[] = "#252a30";
static const char urg_border[] = "#713F3F";

static const char status_fg[] = "#6D4C4C";
static const char status_bg[] = "#1D2021";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm]     = { norm_fg, norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]      = { sel_fg,  sel_bg,    sel_border },  // the focused win
    [SchemeUrg]      = { urg_fg,  urg_bg,    urg_border },
    [SchemeStatus]   = { status_fg,  status_bg, sel_fg }, // Statusbar
};
