const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0D0703", /* black   */
  [1] = "#975F24", /* red     */
  [2] = "#9E754D", /* green   */
  [3] = "#728D45", /* yellow  */
  [4] = "#B6AB48", /* blue    */
  [5] = "#94986A", /* magenta */
  [6] = "#73948A", /* cyan    */
  [7] = "#dad9cb", /* white   */

  /* 8 bright colors */
  [8]  = "#371c0a",  /* black   */
  [9]  = "#d07b22",  /* red     */
  [10] = "#dc9754", /* green   */
  [11] = "#97c44c", /* yellow  */
  [12] = "#fdeb4d", /* blue    */
  [13] = "#ced679", /* magenta */
  [14] = "#84d1ba", /* cyan    */
  [15] = "#fffff5", /* white   */

  /* special colors */
  [256] = "#0D0703", /* background */
  [257] = "#fffff5", /* foreground */
  [258] = "#fffff5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
