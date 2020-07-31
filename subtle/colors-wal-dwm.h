static const char norm_fg[] = "#b4ada4";
static const char norm_bg[] = "#2c2c35";
static const char norm_border[] = "#45454d";

static const char sel_fg[] = "#b4ada4";
static const char sel_bg[] = "#b79b58";
static const char sel_border[] = "#b4ada4";

static const char urg_fg[] = "#b4ada4";
static const char urg_bg[] = "#b56550";
static const char urg_border[] = "#b56550";

static const char title_fg[] = "#B56550";
static const char title_bg[] = "#45454D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
    [SchemeTitle] = { title_fg,   title_bg,  norm_border },
};

