static const char norm_fg[] = "#baae9e";
static const char norm_bg[] = "#28211c";
static const char norm_border[] = "#666666";

static const char sel_fg[] = "#baae9e";
static const char sel_bg[] = "#54be0d";
static const char sel_border[] = "#baae9e";

static const char urg_fg[] = "#baae9e";
static const char urg_bg[] = "#cf6a4c";
static const char urg_border[] = "#cf6a4c";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
