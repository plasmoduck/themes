static const char norm_fg[] = "#F5F5F5";
static const char norm_bg[] = "#151515";
static const char norm_border[] = "#505050";

static const char sel_fg[] = "#F5F5F5";
static const char sel_bg[] = "#6A9FB5";
static const char sel_border[] = "#F5F5F5";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
