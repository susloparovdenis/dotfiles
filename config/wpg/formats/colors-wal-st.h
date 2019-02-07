const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#221c2e", /* black   */
  [1] = "#6379CF", /* red     */
  [2] = "#6F86B3", /* green   */
  [3] = "#558DEB", /* yellow  */
  [4] = "#6690E1", /* blue    */
  [5] = "#6995F1", /* magenta */
  [6] = "#C08D83", /* cyan    */
  [7] = "#dacfd4", /* white   */

  /* 8 bright colors */
  [8]  = "#989094",  /* black   */
  [9]  = "#6379CF",  /* red     */
  [10] = "#6F86B3", /* green   */
  [11] = "#558DEB", /* yellow  */
  [12] = "#6690E1", /* blue    */
  [13] = "#6995F1", /* magenta */
  [14] = "#C08D83", /* cyan    */
  [15] = "#dacfd4", /* white   */

  /* special colors */
  [256] = "#221c2e", /* background */
  [257] = "#dacfd4", /* foreground */
  [258] = "#dacfd4",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
