static const char norm_fg[] = "#c5cbdf";
static const char norm_bg[] = "#222224";
static const char norm_border[] = "#898e9c";

static const char sel_fg[] = "#c5cbdf";
static const char sel_bg[] = "#5D54A4";
static const char sel_border[] = "#c5cbdf";


static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
