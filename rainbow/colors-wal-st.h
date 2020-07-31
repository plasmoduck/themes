const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#282A36", /* black   */
  [1] = "#FF5555", /* red     */
  [2] = "#50FA7B", /* green   */
  [3] = "#F1FA8C", /* yellow  */
  [4] = "#BD93F9", /* blue    */
  [5] = "#FF79C6", /* magenta */
  [6] = "#8BE9FD", /* cyan    */
  [7] = "#BFBFBF", /* white   */

  /* 8 bright colors */
  [8]  = "#555555",  /* black   */
  [9]  = "#FF6E67",  /* red     */
  [10] = "#5AF78E", /* green   */
  [11] = "#F4F99D", /* yellow  */
  [12] = "#CAA9FA", /* blue    */
  [13] = "#FF92D0", /* magenta */
  [14] = "#9AEDFE", /* cyan    */
  [15] = "#E6E6E6", /* white   */

  /* special colors */
  [256] = "#282A36", /* background */
  [257] = "#BFBFBF", /* foreground */
  [258] = "#FF5555",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
