static const char norm_fg[] = "#4C566A";
static const char norm_bg[] = "#252A30";
static const char norm_border[] = "#4C566A";

static const char bar_border[] = "#4C566A";

static const char sel_fg[] = "#8A4D4C";
static const char sel_bg[] = "#4C566A";
static const char sel_border[] = "#BF616A";

static const char urg_fg[] = "#8FBCBB";
static const char urg_bg[] = "#88C0D0";
static const char urg_border[] = "#88C0D0";

static const char status_fg[] = "#5E81AC";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm]    = { norm_fg,  norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]     = { sel_fg,   sel_bg,    sel_border },  // the focused win
    [SchemeUrg]     = { urg_fg,   urg_bg,    urg_border },
    [SchemeStatus]  = { status_fg,   norm_bg,   sel_fg }, // Statusbar right {text,background,not used but cannot be empty}
};
