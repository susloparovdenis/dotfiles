static const char norm_fg[] = "#feffff";
static const char norm_bg[] = "#252525";
static const char norm_border[] = "#3e3e3e";

static const char sel_fg[] = "#feffff";
static const char sel_bg[] = "#deb887";
static const char sel_border[] = "#feffff";

static const char urg_fg[] = "#feffff";
static const char urg_bg[] = "#ef6769";
static const char urg_border[] = "#ef6769";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
