const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#252525", /* black   */
  [1] = "#ef6769", /* red     */
  [2] = "#deb887", /* green   */
  [3] = "#a6e22e", /* yellow  */
  [4] = "#fd971f", /* blue    */
  [5] = "#b0c4de", /* magenta */
  [6] = "#6495ed", /* cyan    */
  [7] = "#dbdcdc", /* white   */

  /* 8 bright colors */
  [8]  = "#3e3e3e",  /* black   */
  [9]  = "#ff6f72",  /* red     */
  [10] = "#fff298", /* green   */
  [11] = "#ddff2a", /* yellow  */
  [12] = "#ffc515", /* blue    */
  [13] = "#c8f7ff", /* magenta */
  [14] = "#6cbbff", /* cyan    */
  [15] = "#feffff", /* white   */

  /* special colors */
  [256] = "#252525", /* background */
  [257] = "#feffff", /* foreground */
  [258] = "#feffff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
