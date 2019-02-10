static const char norm_fg[] = "#ffff90";
static const char norm_bg[] = "#141309";
static const char norm_border[] = "#302d14";

static const char sel_fg[] = "#ffff90";
static const char sel_bg[] = "#50A12F";
static const char sel_border[] = "#ffff90";

static const char urg_fg[] = "#ffff90";
static const char urg_bg[] = "#E9A853";
static const char urg_border[] = "#E9A853";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
