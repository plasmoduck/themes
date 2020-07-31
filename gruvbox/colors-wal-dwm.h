static const char norm_fg[] = "#a89984";
static const char norm_bg[] = "#282828";
static const char norm_border[] = "#928374";

static const char sel_fg[] = "#a89984";
static const char sel_bg[] = "#d79921";
static const char sel_border[] = "#a89984";

static const char urg_fg[] = "#a89984";
static const char urg_bg[] = "#cc241d";
static const char urg_border[] = "#cc241d";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
