static const char norm_fg[] = "#fcffe3";
static const char norm_bg[] = "#0F140A";
static const char norm_border[] = "#232f16";

static const char sel_fg[] = "#fcffe3";
static const char sel_bg[] = "#4A9A32";
static const char sel_border[] = "#fcffe3";

static const char urg_fg[] = "#fcffe3";
static const char urg_bg[] = "#484F37";
static const char urg_border[] = "#484F37";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
