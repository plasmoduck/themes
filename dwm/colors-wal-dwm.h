static const char norm_fg[] = "#ffffff";
static const char norm_bg[] = "#151515";
static const char norm_border[] = "#505450";

static const char sel_fg[] = "#151515";
static const char sel_bg[] = "#bf7979";
static const char sel_border[] = "#ffffff";

static const char urg_fg[] = "#ffffff";
static const char urg_bg[] = "#88AADD";
static const char urg_border[] = "#bf7979";

static const char title_fg[] = "#88AADD";
static const char title_bg[] = "#151515";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
    [SchemeTitle]  = { title_fg, title_bg,  norm_border },
};
