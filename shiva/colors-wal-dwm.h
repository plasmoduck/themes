static const char norm_fg[] = "#b5cfd3";
static const char norm_bg[] = "#03070A";
static const char norm_border[] = "#7e9093";

static const char sel_fg[] = "#b5cfd3";
static const char sel_bg[] = "#CC6943";
static const char sel_border[] = "#b5cfd3";

static const char urg_fg[] = "#b5cfd3";
static const char urg_bg[] = "#956C7D";
static const char urg_border[] = "#956C7D";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
