static const char norm_fg[] = "#dad9cb";
static const char norm_bg[] = "#0D0703";
static const char norm_border[] = "#98978e";

static const char sel_fg[] = "#dad9cb";
static const char sel_bg[] = "#9E754D";
static const char sel_border[] = "#dad9cb";

static const char urg_fg[] = "#dad9cb";
static const char urg_bg[] = "#975F24";
static const char urg_border[] = "#975F24";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
