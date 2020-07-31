static const char norm_fg[] = "#ff6e67";
static const char norm_bg[] = "#282a36";
static const char norm_border[] = "#dfdfdd";

static const char sel_fg[] = "#bfbfbf";
static const char sel_bg[] = "#282a36";
static const char sel_border[] = "#bfbfbf";

static const char urg_fg[] = "#f7f7fb";
static const char urg_bg[] = "#5af78e";
static const char urg_border[] = "#5af78e";

static const char title_fg[] = "#8AFF80";
static const char title_bg[] = "#282a36";
static const char col_borderbar[]   = "#bfbfbf";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
    [SchemeTitle] = { title_fg,   title_bg,  norm_border },
};
