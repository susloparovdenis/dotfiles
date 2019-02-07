static const char norm_fg[] = "#c6faff";
static const char norm_bg[] = "#030A0D";
static const char norm_border[] = "#08232f";

static const char sel_fg[] = "#c6faff";
static const char sel_bg[] = "#265765";
static const char sel_border[] = "#c6faff";

static const char urg_fg[] = "#c6faff";
static const char urg_bg[] = "#5A6962";
static const char urg_border[] = "#5A6962";

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
