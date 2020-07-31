static const char norm_fg[] = "#88C0D0";
static const char norm_bg[] = "#2E3440";
static const char norm_border[] = "#4C566A";

static const char bar_border[] = "#4C566A";

static const char sel_fg[] = "#D08770";
static const char sel_bg[] = "#4C566A";
static const char sel_border[] = "#8FBCBB";

static const char urg_fg[] = "#8FBCBB";
static const char urg_bg[] = "#88C0D0";
static const char urg_border[] = "#88C0D0";

/* static const char status_fg[] = "#B48EAD"; */

static const char *colors[][3]      = {

    /*               fg           bg         border                         */
    [SchemeNorm]    = { norm_fg,  norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]     = { sel_fg,   sel_bg,    sel_border },  // the focused win
    [SchemeUrg]     = { urg_fg,   urg_bg,    urg_border },
 /*   [SchemeStatus]  = { status_fg,   norm_bg,   sel_fg }, // Statusbar right {text,background,not used but cannot be empty} */
};
