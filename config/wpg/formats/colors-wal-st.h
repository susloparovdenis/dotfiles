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
  [8]  = "#98978e",  /* black   */
  [9]  = "#975F24",  /* red     */
  [10] = "#9E754D", /* green   */
  [11] = "#728D45", /* yellow  */
  [12] = "#B6AB48", /* blue    */
  [13] = "#94986A", /* magenta */
  [14] = "#73948A", /* cyan    */
  [15] = "#dad9cb", /* white   */

  /* special colors */
  [256] = "#0D0703", /* background */
  [257] = "#dad9cb", /* foreground */
  [258] = "#dad9cb",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
