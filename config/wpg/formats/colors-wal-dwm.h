static const char norm_fg[] = "#dacfd4";
static const char norm_bg[] = "#221c2e";
static const char norm_border[] = "#989094";

static const char sel_fg[] = "#dacfd4";
static const char sel_bg[] = "#6F86B3";
static const char sel_border[] = "#dacfd4";

static const char urg_fg[] = "#dacfd4";
static const char urg_bg[] = "#6379CF";
static const char urg_border[] = "#6379CF";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
