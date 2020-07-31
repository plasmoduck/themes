static const char norm_fg[] = "#dda4a9";
static const char norm_bg[] = "#0b0a18";
static const char norm_border[] = "#9a7276";

static const char sel_fg[] = "#dda4a9";
static const char sel_bg[] = "#5A475F";
static const char sel_border[] = "#dda4a9";

static const char urg_fg[] = "#dda4a9";
static const char urg_bg[] = "#5D284F";
static const char urg_border[] = "#5D284F";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
