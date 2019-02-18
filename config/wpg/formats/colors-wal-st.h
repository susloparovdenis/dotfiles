const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0d0b05", /* black   */
  [1] = "#906A2B", /* red     */
  [2] = "#A49328", /* green   */
  [3] = "#D1B746", /* yellow  */
  [4] = "#62699B", /* blue    */
  [5] = "#A7915D", /* magenta */
  [6] = "#8E7451", /* cyan    */
  [7] = "#b2bdd1", /* white   */

  /* 8 bright colors */
  [8]  = "#322a11",  /* black   */
  [9]  = "#c78c2b",  /* red     */
  [10] = "#e2c826", /* green   */
  [11] = "#fff948", /* yellow  */
  [12] = "#6e7cd9", /* blue    */
  [13] = "#e9c368", /* magenta */
  [14] = "#c7985a", /* cyan    */
  [15] = "#e9f7ff", /* white   */

  /* special colors */
  [256] = "#0d0b05", /* background */
  [257] = "#e9f7ff", /* foreground */
  [258] = "#e9f7ff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
