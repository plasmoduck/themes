static const char norm_fg[] = "#d5c2e3";
static const char norm_bg[] = "#0d0913";
static const char norm_border[] = "#95879e";

static const char sel_fg[] = "#d5c2e3";
static const char sel_bg[] = "#983CCE";
static const char sel_border[] = "#d5c2e3";

static const char urg_fg[] = "#d5c2e3";
static const char urg_bg[] = "#8778B4";
static const char urg_border[] = "#8778B4";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
