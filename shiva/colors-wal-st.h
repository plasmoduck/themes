const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#26252A", /* black   */
  [1] = "#956C7D", /* red     */
  [2] = "#CC6943", /* green   */
  [3] = "#E9A45A", /* yellow  */
  [4] = "#3B5F8A", /* blue    */
  [5] = "#206697", /* magenta */
  [6] = "#2AB2A7", /* cyan    */
  [7] = "#b5cfd3", /* white   */

  /* 8 bright colors */
  [8]  = "#7e9093",  /* black   */
  [9]  = "#956C7D",  /* red     */
  [10] = "#CC6943", /* green   */
  [11] = "#E9A45A", /* yellow  */
  [12] = "#3B5F8A", /* blue    */
  [13] = "#206697", /* magenta */
  [14] = "#2AB2A7", /* cyan    */
  [15] = "#b5cfd3", /* white   */

  /* special colors */
  [256] = "#03070A", /* background */
  [257] = "#b5cfd3", /* foreground */
  [258] = "#b5cfd3",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
