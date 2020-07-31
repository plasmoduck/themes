const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#1d1f21", /* black   */
  [1] = "#B55E25", /* red     */
  [2] = "#E99A06", /* green   */
  [3] = "#BDB655", /* yellow  */
  [4] = "#386AB0", /* blue    */
  [5] = "#506094", /* magenta */
  [6] = "#44C8C2", /* cyan    */
  [7] = "#bcbabc", /* white   */

  /* 8 bright colors */
  [8]  = "#969896",  /* black   */
  [9]  = "#B55E25",  /* red     */
  [10] = "#E99A06", /* green   */
  [11] = "#BDB655", /* yellow  */
  [12] = "#386AB0", /* blue    */
  [13] = "#506094", /* magenta */
  [14] = "#44C8C2", /* cyan    */
  [15] = "#bcbabc", /* white   */

  /* special colors */
  [256] = "#1d1f21", /* background */
  [257] = "#bcbabc", /* foreground */
  [258] = "#bcbabc",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
