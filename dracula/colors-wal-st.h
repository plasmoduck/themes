const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#2D2D39", /* black   */
  [1] = "#E87BC1", /* red     */
  [2] = "#8AFF80", /* green   */
  [3] = "#FFFF80", /* yellow  */
  [4] = "#8AADFF", /* blue    */
  [5] = "#9580FF", /* magenta */
  [6] = "#80FFEA", /* cyan    */
  [7] = "#DFDFDD", /* white   */

  /* 8 bright colors */
  [8]  = "#4d4f68",  /* black   */
  [9]  = "#ea51b2",  /* red     */
  [10] = "#00f769", /* green   */
  [11] = "#ebff87", /* yellow  */
  [12] = "#62d6e8", /* blue    */
  [13] = "#b45bcf", /* magenta */
  [14] = "#a1efe4", /* cyan    */
  [15] = "#f7f7fb", /* white   */

  /* special colors */
  [256] = "#2D2D39", /* background */
  [257] = "#DFDFDD", /* foreground */
  [258] = "#DFDFDD",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
