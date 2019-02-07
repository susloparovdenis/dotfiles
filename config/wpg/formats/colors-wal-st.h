const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#030A0D", /* black   */
  [1] = "#5A6962", /* red     */
  [2] = "#265765", /* green   */
  [3] = "#2C6976", /* yellow  */
  [4] = "#8A7E6C", /* blue    */
  [5] = "#2F7787", /* magenta */
  [6] = "#497B87", /* cyan    */
  [7] = "#93b9c0", /* white   */

  /* 8 bright colors */
  [8]  = "#08232f",  /* black   */
  [9]  = "#689580",  /* red     */
  [10] = "#28768c", /* green   */
  [11] = "#2e8fa3", /* yellow  */
  [12] = "#c3a67c", /* blue    */
  [13] = "#31a2bb", /* magenta */
  [14] = "#51a8bd", /* cyan    */
  [15] = "#c6faff", /* white   */

  /* special colors */
  [256] = "#030A0D", /* background */
  [257] = "#c6faff", /* foreground */
  [258] = "#c6faff",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
