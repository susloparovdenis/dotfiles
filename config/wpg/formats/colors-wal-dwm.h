static const char norm_fg[] = "#bfcaac";
static const char norm_bg[] = "#0F140A";
static const char norm_border[] = "#858d78";

static const char sel_fg[] = "#bfcaac";
static const char sel_bg[] = "#536733";
static const char sel_border[] = "#bfcaac";

static const char urg_fg[] = "#bfcaac";
static const char urg_bg[] = "#484F37";
static const char urg_border[] = "#484F37";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
