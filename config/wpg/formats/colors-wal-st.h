const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#04090F", /* black   */
  [1] = "#576974", /* red     */
  [2] = "#2C6799", /* green   */
  [3] = "#357AC5", /* yellow  */
  [4] = "#3D88B4", /* blue    */
  [5] = "#3A8CD4", /* magenta */
  [6] = "#4AA6E8", /* cyan    */
  [7] = "#aae6f5", /* white   */

  /* 8 bright colors */
  [8]  = "#76a1ab",  /* black   */
  [9]  = "#576974",  /* red     */
  [10] = "#2C6799", /* green   */
  [11] = "#357AC5", /* yellow  */
  [12] = "#3D88B4", /* blue    */
  [13] = "#3A8CD4", /* magenta */
  [14] = "#4AA6E8", /* cyan    */
  [15] = "#aae6f5", /* white   */

  /* special colors */
  [256] = "#04090F", /* background */
  [257] = "#aae6f5", /* foreground */
  [258] = "#aae6f5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
