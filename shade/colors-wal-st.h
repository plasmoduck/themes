const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#130d13", /* black   */
  [1] = "#468EDF", /* red     */
  [2] = "#728DD7", /* green   */
  [3] = "#7D98E4", /* yellow  */
  [4] = "#D392B4", /* blue    */
  [5] = "#ABA5DC", /* magenta */
  [6] = "#8299E4", /* cyan    */
  [7] = "#c1c8e8", /* white   */

  /* 8 bright colors */
  [8]  = "#878ca2",  /* black   */
  [9]  = "#468EDF",  /* red     */
  [10] = "#728DD7", /* green   */
  [11] = "#7D98E4", /* yellow  */
  [12] = "#D392B4", /* blue    */
  [13] = "#ABA5DC", /* magenta */
  [14] = "#8299E4", /* cyan    */
  [15] = "#c1c8e8", /* white   */

  /* special colors */
  [256] = "#130d13", /* background */
  [257] = "#c1c8e8", /* foreground */
  [258] = "#c1c8e8",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
