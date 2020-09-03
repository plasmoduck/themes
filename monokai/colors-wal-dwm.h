static const char norm_fg[] = "#FF6188";
static const char norm_bg[] = "#272822";
static const char norm_border[] = "#75715e";

static const char sel_fg[] = "#A9DC76";
static const char sel_bg[] = "#272822";
static const char sel_border[] = "#f9f8f5";

static const char urg_fg[] = "#f9f8f5";
static const char urg_bg[] = "#FF6188";
static const char urg_border[] = "#FF6188";

static const char title_fg[] = "#78DCE8";
static const char title_bg[] = "#272822";

static const char col_borderbar[]   = "#75715e";
static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeHid]  = { sel_border,  norm_bg,   sel_border },
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
    [SchemeTitle] = { title_fg,	  title_bg,  norm_border },
};
