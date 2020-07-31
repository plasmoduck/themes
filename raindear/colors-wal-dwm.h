static const char norm_fg[] = "#8FBCBB";
static const char norm_bg[] = "#2D3139";
static const char norm_border[] = "#4C566A";

static const char sel_fg[] = "#2D3139";
static const char sel_bg[] = "#EBCB8B";
static const char sel_border[] = "#8FBCBB";

static const char urg_fg[] = "#8FBCBB";
static const char urg_bg[] = "#88C0D0";
static const char urg_border[] = "#88C0D0";

static const char title_fg[] = "#D08770";
static const char title_bg[] = "#2D3139";


static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
    [SchemeTitle]  = { title_fg, title_bg,  norm_border },
};
