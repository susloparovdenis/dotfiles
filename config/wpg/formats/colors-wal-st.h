const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#14110e", /* black   */
  [1] = "#2E4FA2", /* red     */
  [2] = "#5B649F", /* green   */
  [3] = "#DF9763", /* yellow  */
  [4] = "#3168C8", /* blue    */
  [5] = "#9C7495", /* magenta */
  [6] = "#3D8EEB", /* cyan    */
  [7] = "#a0c3e8", /* white   */

  /* 8 bright colors */
  [8]  = "#312a22",  /* black   */
  [9]  = "#2e60e0",  /* red     */
  [10] = "#6676de", /* green   */
  [11] = "#ffc06b", /* yellow  */
  [12] = "#2f82ff", /* blue    */
  [13] = "#dc85cd", /* magenta */
  [14] = "#3bb7ff", /* cyan    */
  [15] = "#d0fdff", /* white   */

  /* special colors */
  [256] = "#14110e", /* background */
  [257] = "#d0fdff", /* foreground */
  [258] = "#d0fdff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
