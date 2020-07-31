static const char norm_fg[] = "#f92672";
static const char norm_bg[] = "#272822";
static const char norm_border[] = "#75715e";

static const char sel_fg[] = "#a6e22e";
static const char sel_bg[] = "#272822";
static const char sel_border[] = "#f9f8f5";

static const char urg_fg[] = "#f9f8f5";
static const char urg_bg[] = "#f92672";
static const char urg_border[] = "#f92672";

static const char title_fg[] = "#66D9EF";
static const char title_bg[] = "#272822";

static const char col_borderbar[]   = "#75715e";
static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
    [SchemeTitle] = { title_fg,	  title_bg,  norm_border },
    [SchemeStatus]  = { col_gray3, col_gray1,  "#000000"  }, // Statusbar right {text,background,not used but cannot be empty}
    [SchemeTagsSel]  = { col_gray4, col_cyan,  "#000000"  }, // Tagbar left selected {text,background,not used but cannot be empty}
    [SchemeTagsNorm]  = { col_gray3, col_gray1,  "#000000"  }, // Tagbar left unselected {text,background,not used but cannot be empty}
    [SchemeInfoSel]  = { col_gray4, col_cyan,  "#000000"  }, // infobar middle  selected {text,background,not used but cannot be empty}
    [SchemeInfoNorm]  = { col_gray3, col_gray1,  "#000000"  }, // infobar middle  unselected {text,background,not used but cannot be empty}
};

