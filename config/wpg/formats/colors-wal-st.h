const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#04090F", /* black   */
  [1] = "#4AA6E8", /* red     */
  [2] = "#576974", /* green   */
  [3] = "#2C6799", /* yellow  */
  [4] = "#357AC5", /* blue    */
  [5] = "#3D88B4", /* magenta */
  [6] = "#3A8CD4", /* cyan    */
  [7] = "#aae6f5", /* white   */

  /* 8 bright colors */
  [8]  = "#0b1b2f",  /* black   */
  [9]  = "#4cdbff",  /* red     */
  [10] = "#638ba3", /* green   */
  [11] = "#2c86d3", /* yellow  */
  [12] = "#349dff", /* blue    */
  [13] = "#3fb4f9", /* magenta */
  [14] = "#39b7ff", /* cyan    */
  [15] = "#d0ffff", /* white   */

  /* special colors */
  [256] = "#04090F", /* background */
  [257] = "#d0ffff", /* foreground */
  [258] = "#d0ffff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
