const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#252528", /* black   */
  [1] = "#CFD958", /* red     */
  [2] = "#5D54A4", /* green   */
  [3] = "#C26298", /* yellow  */
  [4] = "#6DAAD9", /* blue    */
  [5] = "#C6B5BE", /* magenta */
  [6] = "#A2D09E", /* cyan    */
  [7] = "#c5cbdf", /* white   */

  /* 8 bright colors */
  [8]  = "#898e9c",  /* black   */
  [9]  = "#CFD958",  /* red     */
  [10] = "#5D54A4", /* green   */
  [11] = "#C26298", /* yellow  */
  [12] = "#6DAAD9", /* blue    */
  [13] = "#C6B5BE", /* magenta */
  [14] = "#A2D09E", /* cyan    */
  [15] = "#c5cbdf", /* white   */

  /* special colors */
  [256] = "#252528", /* background */
  [257] = "#c5cbdf", /* foreground */
  [258] = "#c5cbdf",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
