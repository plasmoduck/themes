const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2E3440", /* black   */
  [1] = "#59a1b6", /* red     */
  [2] = "#a8414b", /* green   */
  [3] = "#3c6291", /* yellow  */
  [4] = "#caa14f", /* blue    */
  [5] = "#7aa159", /* magenta */
  [6] = "#b6654c", /* cyan    */
  [7] = "#cad0dc", /* white   */

  /* 8 bright colors */
  [8]  = "#4C566A",  /* black   */
  [9]  = "#88C0D0",  /* red     */
  [10] = "#BF616A", /* green   */
  [11] = "#5E81AC", /* yellow  */
  [12] = "#EBCB8B", /* blue    */
  [13] = "#A3BE8C", /* magenta */
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
