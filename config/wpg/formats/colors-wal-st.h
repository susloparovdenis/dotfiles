const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#04060D", /* black   */
  [1] = "#2A455B", /* red     */
  [2] = "#315269", /* green   */
  [3] = "#3A6176", /* yellow  */
  [4] = "#4B6775", /* blue    */
  [5] = "#818475", /* magenta */
  [6] = "#3E6A81", /* cyan    */
  [7] = "#9fb1b9", /* white   */

  /* 8 bright colors */
  [8]  = "#6f7b81",  /* black   */
  [9]  = "#2A455B",  /* red     */
  [10] = "#315269", /* green   */
  [11] = "#3A6176", /* yellow  */
  [12] = "#4B6775", /* blue    */
  [13] = "#818475", /* magenta */
  [14] = "#3E6A81", /* cyan    */
  [15] = "#9fb1b9", /* white   */

  /* special colors */
  [256] = "#04060D", /* background */
  [257] = "#9fb1b9", /* foreground */
  [258] = "#9fb1b9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
