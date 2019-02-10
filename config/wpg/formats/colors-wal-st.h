const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#141309", /* black   */
  [1] = "#E9A853", /* red     */
  [2] = "#50A12F", /* green   */
  [3] = "#CAA834", /* yellow  */
  [4] = "#727886", /* blue    */
  [5] = "#9A9F28", /* magenta */
  [6] = "#7ae4c1", /* cyan    */
  [7] = "#F3CB6C", /* white   */

  /* 8 bright colors */
  [8]  = "#302d14",  /* black   */
  [9]  = "#ffdd57",  /* red     */
  [10] = "#62de2f", /* green   */
  [11] = "#ffe333", /* yellow  */
  [12] = "#8495be", /* blue    */
  [13] = "#d4db26", /* magenta */
  [14] = "#87ffff", /* cyan    */
  [15] = "#ffff90", /* white   */

  /* special colors */
  [256] = "#141309", /* background */
  [257] = "#ffff90", /* foreground */
  [258] = "#ffff90",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
