static const char norm_fg[] = "#ededb7";
static const char norm_bg[] = "#2c2c2c";
static const char norm_border[] = "#4e4e4e";

static const char sel_fg[] = "#ededb7";
static const char sel_bg[] = "#93988a";
static const char sel_border[] = "#ededb7";

static const char urg_fg[] = "#ededb7";
static const char urg_bg[] = "#c77369";
static const char urg_border[] = "#c77369";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
