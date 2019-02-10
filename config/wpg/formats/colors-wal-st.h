const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b0c0d", /* black   */
  [1] = "#51484F", /* red     */
  [2] = "#6D5253", /* green   */
  [3] = "#6A5E68", /* yellow  */
  [4] = "#AB5E51", /* blue    */
  [5] = "#956A66", /* magenta */
  [6] = "#BB8C76", /* cyan    */
  [7] = "#b7b2bd", /* white   */

  /* 8 bright colors */
  [8]  = "#807c84",  /* black   */
  [9]  = "#51484F",  /* red     */
  [10] = "#6D5253", /* green   */
  [11] = "#6A5E68", /* yellow  */
  [12] = "#AB5E51", /* blue    */
  [13] = "#956A66", /* magenta */
  [14] = "#BB8C76", /* cyan    */
  [15] = "#b7b2bd", /* white   */

  /* special colors */
  [256] = "#0b0c0d", /* background */
  [257] = "#b7b2bd", /* foreground */
  [258] = "#b7b2bd",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
