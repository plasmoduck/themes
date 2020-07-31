const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1f2223", /* black   */
  [1] = "#493434", /* red     */
  [2] = "#713f3f", /* green   */
  [3] = "#713f48", /* yellow  */
  [4] = "#545c5c", /* blue    */
  [5] = "#713f4e", /* magenta */
  [6] = "#848484", /* cyan    */
  [7] = "#a7a7a7", /* white   */

  /* 8 bright colors */
  [8]  = "#4f4f4f",  /* black   */
  [9]  = "#6d4c4c",  /* red     */
  [10] = "#8a4d4d", /* green   */
  [11] = "#8d4f5a", /* yellow  */
  [12] = "#6a7474", /* blue    */
  [13] = "#8b4f63", /* magenta */
  [14] = "#979595", /* cyan    */
  [15] = "#c2c0c0", /* white   */

  /* special colors */
  [256] = "#1f2223", /* background */
  [257] = "#a7a7a7", /* foreground */
  [258] = "#6d4c4c",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
