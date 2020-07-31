static const char norm_fg[] = "#C3C3B4";
static const char norm_bg[] = "#242424";
static const char norm_border[] = "#63554c";

static const char sel_fg[] = "#C3C3B4";
static const char sel_bg[] = "#A56858";
static const char sel_border[] = "#c8b49d";

static const char urg_fg[] = "#c8b49d";
static const char urg_bg[] = "#bd6151";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
};
