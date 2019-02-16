const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0F140A", /* black   */
  [1] = "#484F37", /* red     */
  [2] = "#536733", /* green   */
  [3] = "#5A664E", /* yellow  */
  [4] = "#516C4C", /* blue    */
  [5] = "#4A9A32", /* magenta */
  [6] = "#67925D", /* cyan    */
  [7] = "#bfcaac", /* white   */

  /* 8 bright colors */
  [8]  = "#858d78",  /* black   */
  [9]  = "#484F37",  /* red     */
  [10] = "#536733", /* green   */
  [11] = "#5A664E", /* yellow  */
  [12] = "#516C4C", /* blue    */
  [13] = "#4A9A32", /* magenta */
  [14] = "#67925D", /* cyan    */
  [15] = "#bfcaac", /* white   */

  /* special colors */
  [256] = "#0F140A", /* background */
  [257] = "#bfcaac", /* foreground */
  [258] = "#bfcaac",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
