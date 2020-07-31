const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0b0a18", /* black   */
  [1] = "#5D284F", /* red     */
  [2] = "#5A475F", /* green   */
  [3] = "#9B0830", /* yellow  */
  [4] = "#E2122E", /* blue    */
  [5] = "#9B2551", /* magenta */
  [6] = "#E0254C", /* cyan    */
  [7] = "#dda4a9", /* white   */

  /* 8 bright colors */
  [8]  = "#9a7276",  /* black   */
  [9]  = "#5D284F",  /* red     */
  [10] = "#5A475F", /* green   */
  [11] = "#9B0830", /* yellow  */
  [12] = "#E2122E", /* blue    */
  [13] = "#9B2551", /* magenta */
  [14] = "#E0254C", /* cyan    */
  [15] = "#dda4a9", /* white   */

  /* special colors */
  [256] = "#0b0a18", /* background */
  [257] = "#dda4a9", /* foreground */
  [258] = "#dda4a9",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
