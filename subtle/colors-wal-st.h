const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2c2c35", /* black   */
  [1] = "#b56550", /* red     */
  [2] = "#b79b58", /* green   */
  [3] = "#6b925a", /* yellow  */
  [4] = "#6e747b", /* blue    */
  [5] = "#96787d", /* magenta */
  [6] = "#7b8889", /* cyan    */
  [7] = "#b4ada4", /* white   */

  /* 8 bright colors */
  [8]  = "#45454d",  /* black   */
  [9]  = "#b56550",  /* red     */
  [10] = "#b79b58", /* green   */
  [11] = "#6b925a", /* yellow  */
  [12] = "#6e747b", /* blue    */
  [13] = "#96787d", /* magenta */
  [14] = "#7b8889", /* cyan    */
  [15] = "#b4ada4", /* white   */

  /* special colors */
  [256] = "#2c2c35", /* background */
  [257] = "#6b925a", /* foreground */
  [258] = "#2d2d36",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
