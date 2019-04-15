static const char norm_fg[] = "#9fb1b9";
static const char norm_bg[] = "#04060D";
static const char norm_border[] = "#6f7b81";

static const char sel_fg[] = "#9fb1b9";
static const char sel_bg[] = "#315269";
static const char sel_border[] = "#9fb1b9";

static const char urg_fg[] = "#9fb1b9";
static const char urg_bg[] = "#2A455B";
static const char urg_border[] = "#2A455B";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
