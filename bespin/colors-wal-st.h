const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#28211c", /* black   */
  [1] = "#cf6a4c", /* red     */
  [2] = "#54be0d", /* green   */
  [3] = "#f9ee98", /* yellow  */
  [4] = "#5ea6ea", /* blue    */
  [5] = "#9b859d", /* magenta */
  [6] = "#afc4db", /* cyan    */
  [7] = "#8a8986", /* white   */

  /* 8 bright colors */
  [8]  = "#666666",  /* black   */
  [9]  = "#cf6a4c",  /* red     */
  [10] = "#54be0d", /* green   */
  [11] = "#f9ee98", /* yellow  */
  [12] = "#5ea6ea", /* blue    */
  [13] = "#9b859d", /* magenta */
  [14] = "#afc4db", /* cyan    */
  [15] = "#baae9e", /* white   */

  /* special colors */
  [256] = "#28211c", /* background */
  [257] = "#8a8986", /* foreground */
  [258] = "#8a8986",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
