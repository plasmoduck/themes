const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#252A30", /* black   */
  [1] = "#88C0D0", /* red     */
  [2] = "#BF616A", /* green   */
  [3] = "#5E81AC", /* yellow  */
  [4] = "#B48EAD", /* blue    */
  [5] = "#8a4d4c", /* magenta */
  [6] = "#4C566A", /* cyan    */
  [7] = "#a7a7a7", /* white   */

  /* 8 bright colors */
  [8]  = "#4C566A",  /* black   */
  [9]  = "#4BADBA",  /* red     */
  [10] = "#DC6069", /* green   */
  [11] = "#57A5ED", /* yellow  */
  [12] = "#8787AF", /* blue    */
  [13] = "#8a4d4c", /* magenta */
  [14] = "#4C566A", /* cyan    */
  [15] = "#c2c0c0", /* white   */

  /* special colors */
  [256] = "#252A30", /* background */
  [257] = "#E5E9F0", /* foreground */
  [258] = "#E5E9F0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
