static const char norm_fg[] = "#bcbabc";
static const char norm_bg[] = "#241910";
static const char norm_border[] = "#838283";

static const char sel_fg[] = "#bcbabc";
static const char sel_bg[] = "#E99A06";
static const char sel_border[] = "#bcbabc";

static const char urg_fg[] = "#bcbabc";
static const char urg_bg[] = "#B55E25";
static const char urg_border[] = "#B55E25";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
