static const char norm_fg[] = "#b7b2bd";
static const char norm_bg[] = "#0b0c0d";
static const char norm_border[] = "#807c84";

static const char sel_fg[] = "#b7b2bd";
static const char sel_bg[] = "#6D5253";
static const char sel_border[] = "#b7b2bd";

static const char urg_fg[] = "#b7b2bd";
static const char urg_bg[] = "#51484F";
static const char urg_border[] = "#51484F";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
