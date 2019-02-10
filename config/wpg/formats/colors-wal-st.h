const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0F140A", /* black   */
  [1] = "#484F37", /* red     */
  [2] = "#4A9A32", /* green   */
  [3] = "#67925D", /* yellow  */
  [4] = "#5A664E", /* blue    */
  [5] = "#536733", /* magenta */
  [6] = "#516C4C", /* cyan    */
  [7] = "#bfcaac", /* white   */

  /* 8 bright colors */
  [8]  = "#232f16",  /* black   */
  [9]  = "#616f3e",  /* red     */
  [10] = "#59d533", /* green   */
  [11] = "#7ccd69", /* yellow  */
  [12] = "#759059", /* blue    */
  [13] = "#6e8f38", /* magenta */
  [14] = "#619856", /* cyan    */
  [15] = "#fcffe3", /* white   */

  /* special colors */
  [256] = "#0F140A", /* background */
  [257] = "#fcffe3", /* foreground */
  [258] = "#fcffe3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
