static const char norm_fg[] = "#f2e4df";
static const char norm_bg[] = "#0f1011";
static const char norm_border[] = "#a99f9c";

static const char sel_fg[] = "#f2e4df";
static const char sel_bg[] = "#E02406";
static const char sel_border[] = "#f2e4df";

static const char urg_fg[] = "#f2e4df";
static const char urg_bg[] = "#CF0D03";
static const char urg_border[] = "#CF0D03";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
