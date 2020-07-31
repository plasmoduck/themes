static const char norm_fg[] = "#D1D6DC";
static const char norm_bg[] = "#30343F";
static const char norm_border[] = "#4B5262";
static const char col_borderbar[]   = "#D1D6DC";

static const char sel_fg[] = "#A37E9D";
static const char sel_bg[] = "#4B5262";
static const char sel_border[] = "#D1D6DC";

static const char urg_fg[] = "#B35660";
static const char urg_bg[] = "#30343F";
static const char urg_border[] = "#B35660";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
