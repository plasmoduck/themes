const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f061b", /* black   */
  [1] = "#A35B67", /* red     */
  [2] = "#418B76", /* green   */
  [3] = "#D59175", /* yellow  */
  [4] = "#4C608B", /* blue    */
  [5] = "#D6488B", /* magenta */
  [6] = "#419BA0", /* cyan    */
  [7] = "#e8d4c7", /* white   */

  /* 8 bright colors */
  [8]  = "#a2948b",  /* black   */
  [9]  = "#A35B67",  /* red     */
  [10] = "#418B76", /* green   */
  [11] = "#D59175", /* yellow  */
  [12] = "#4C608B", /* blue    */
  [13] = "#D6488B", /* magenta */
  [14] = "#419BA0", /* cyan    */
  [15] = "#e8d4c7", /* white   */

  /* special colors */
  [256] = "#0f061b", /* background */
  [257] = "#e8d4c7", /* foreground */
  [258] = "#e8d4c7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
