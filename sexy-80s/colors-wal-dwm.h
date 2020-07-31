static const char norm_fg[] = "#e8d4c7";
static const char norm_bg[] = "#0f061b";
static const char norm_border[] = "#a2948b";

static const char sel_fg[] = "#e8d4c7";
static const char sel_bg[] = "#418B76";
static const char sel_border[] = "#e8d4c7";

static const char urg_fg[] = "#e8d4c7";
static const char urg_bg[] = "#A35B67";
static const char urg_border[] = "#A35B67";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
