const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#151515", /* black   */
  [1] = "#bf7979", /* red     */
  [2] = "#97b26b", /* green   */
  [3] = "#cdcda1", /* yellow  */
  [4] = "#4a5463", /* blue    */
  [5] = "#9c3885", /* magenta */
  [6] = "#88aadd", /* cyan    */
  [7] = "#ffffff", /* white   */

  /* 8 bright colors */
  [8]  = "#505450",  /* black   */
  [9]  = "#bf7979",  /* red     */
  [10] = "#97b26b", /* green   */
  [11] = "#cdcda1", /* yellow  */
  [12] = "#4a5463", /* blue    */
  [13] = "#9c3885", /* magenta */
  [14] = "#88aadd", /* cyan    */
  [15] = "#ffffff", /* white   */

  /* special colors */
  [256] = "#000000", /* background */
  [257] = "#ffffff", /* foreground */
  [258] = "#f4a45f",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
