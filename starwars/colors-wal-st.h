const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1f2223", /* black   */
  [1] = "#493434", /* red     */
  [2] = "#713F3F", /* green   */
  [3] = "#713f48", /* yellow  */
  [4] = "#2D333F", /* blue    */
  [5] = "#713f48", /* magenta */
  [7] = "#545C5C", /* cyan    */
  [6] = "#a7a7a7", /* white   */

  /* 8 bright colors */
  [8]  = "#4f4f4f",  /* black   */
  [9]  = "#6d4c4c",  /* red     */
  [10] = "#8A4D4D", /* green   */
  [11] = "#8d4f5a", /* yellow  */
  [12] = "#4C566A", /* blue    */
  [13] = "#8D4F5A", /* magenta */
  [15] = "#6A7474", /* cyan    */
  [14] = "#c2c0c0", /* white   */

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
