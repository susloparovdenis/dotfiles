<<<<<<< HEAD
<<<<<<< HEAD
static const char norm_fg[] = "#d0ffff";
static const char norm_bg[] = "#04090F";
static const char norm_border[] = "#0b1b2f";

static const char sel_fg[] = "#d0ffff";
static const char sel_bg[] = "#576974";
static const char sel_border[] = "#d0ffff";

static const char urg_fg[] = "#d0ffff";
static const char urg_bg[] = "#4AA6E8";
static const char urg_border[] = "#4AA6E8";
=======
static const char norm_fg[] = "#e9f7ff";
static const char norm_bg[] = "#0d0b05";
static const char norm_border[] = "#322a11";
=======
static const char norm_fg[] = "#d0fdff";
static const char norm_bg[] = "#14110e";
static const char norm_border[] = "#312a22";
>>>>>>> polybar

static const char sel_fg[] = "#d0fdff";
static const char sel_bg[] = "#5B649F";
static const char sel_border[] = "#d0fdff";

<<<<<<< HEAD
static const char urg_fg[] = "#e9f7ff";
static const char urg_bg[] = "#906A2B";
static const char urg_border[] = "#906A2B";
>>>>>>> misc
=======
static const char urg_fg[] = "#d0fdff";
static const char urg_bg[] = "#2E4FA2";
static const char urg_border[] = "#2E4FA2";
>>>>>>> polybar

static const char *colors[][3]      = {
    /*               fg           bg         border                         */
    [SchemeNorm] = { norm_fg,     norm_bg,   norm_border }, // unfocused wins
    [SchemeSel]  = { sel_fg,      sel_bg,    sel_border },  // the focused win
    [SchemeUrg] =  { urg_fg,      urg_bg,    urg_border },
};
