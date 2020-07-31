static const char norm_fg[] = "#88afd7";
static const char norm_bg[] = "#09020c";
static const char norm_border[] = "#5f7a96";

static const char sel_fg[] = "#88afd7";
static const char sel_bg[] = "#4F136B";
static const char sel_border[] = "#88afd7";

static const char urg_fg[] = "#88afd7";
static const char urg_bg[] = "#4B1261";
static const char urg_border[] = "#4B1261";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
