const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2E3440", /* black   */
  [1] = "#88C0D0", /* red     */
  [2] = "#BF616A", /* green   */
  [3] = "#5E81AC", /* yellow  */
  [4] = "#EBCB8B", /* blue    */
  [5] = "#A3BE8C", /* magenta */
  [6] = "#D08770", /* cyan    */
  [7] = "#E5E9F0", /* white   */

  /* 8 bright colors */
  [8]  = "#4C566A",  /* black   */
  [9]  = "#4BADBA",  /* red     */
  [10] = "#DC6069", /* green   */
  [11] = "#57A5ED", /* yellow  */
  [12] = "#E1B86F", /* blue    */
  [13] = "#8DBB6E", /* magenta */
  [14] = "#D08770", /* cyan    */
  [15] = "#8FBCBB", /* white   */

  /* special colors */
  [256] = "#2E3440", /* background */
  [257] = "#E5E9F0", /* foreground */
  [258] = "#E5E9F0",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
