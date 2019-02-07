static const char norm_fg[] = "#aae6f5";
static const char norm_bg[] = "#04090F";
static const char norm_border[] = "#76a1ab";

static const char sel_fg[] = "#aae6f5";
static const char sel_bg[] = "#2C6799";
static const char sel_border[] = "#aae6f5";

static const char urg_fg[] = "#aae6f5";
static const char urg_bg[] = "#576974";
static const char urg_border[] = "#576974";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
