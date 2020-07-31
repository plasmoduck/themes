static const char norm_fg[] = "#ffffff";
static const char norm_bg[] = "#1d1f21";
static const char norm_border[] = "#969896";

static const char sel_fg[] = "#ffffff";
static const char sel_bg[] = "#CC6666";
static const char sel_border[] = "#ffffff";;

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
