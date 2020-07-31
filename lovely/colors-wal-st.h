const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#212121", /* black   */
  [1] = "#758F6F", /* red     */
  [2] = "#AB8C6D", /* green   */
  [3] = "#5F7985", /* yellow  */
  [4] = "#89747D", /* blue    */
  [5] = "#5F857E", /* magenta */
  [6] = "#91a1a5", /* cyan    */
  [7] = "#C3C3B4", /* white   */

  /* 8 bright colors */
  [8]  = "#a56858",  /* black   */
  [9]  = "#758F6F",  /* red     */
  [10] = "#AB8C6D", /* green   */
  [11] = "#5F7985", /* yellow  */
  [12] = "#89747D", /* blue    */
  [13] = "#5F857E", /* magenta */
  [14] = "#91a1a5", /* cyan    */
  [15] = "#C3C3B4", /* white   */

  /* special colors */
  [256] = "#242424", /* background */
  [257] = "#C3C3B4", /* foreground */
  [258] = "#c8b49d",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
