static const char norm_fg[] = "#d0fdff";
static const char norm_bg[] = "#14110e";
static const char norm_border[] = "#312a22";

static const char sel_fg[] = "#d0fdff";
static const char sel_bg[] = "#5B649F";
static const char sel_border[] = "#d0fdff";

static const char urg_fg[] = "#d0fdff";
static const char urg_bg[] = "#2E4FA2";
static const char urg_border[] = "#2E4FA2";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
