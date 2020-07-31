const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0d0913", /* black   */
  [1] = "#8778B4", /* red     */
  [2] = "#983CCE", /* green   */
  [3] = "#AE909C", /* yellow  */
  [4] = "#9082BD", /* blue    */
  [5] = "#988AC5", /* magenta */
  [6] = "#A395CE", /* cyan    */
  [7] = "#d5c2e3", /* white   */

  /* 8 bright colors */
  [8]  = "#95879e",  /* black   */
  [9]  = "#8778B4",  /* red     */
  [10] = "#983CCE", /* green   */
  [11] = "#AE909C", /* yellow  */
  [12] = "#9082BD", /* blue    */
  [13] = "#988AC5", /* magenta */
  [14] = "#A395CE", /* cyan    */
  [15] = "#d5c2e3", /* white   */

  /* special colors */
  [256] = "#0d0913", /* background */
  [257] = "#d5c2e3", /* foreground */
  [258] = "#d5c2e3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
