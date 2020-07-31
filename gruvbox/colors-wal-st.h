const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#282828", /* black   */
  [1] = "#cc241d", /* red     */
  [2] = "#d79921", /* green   */
  [3] = "#b58900", /* yellow  */
  [4] = "#458588", /* blue    */
  [5] = "#b16286", /* magenta */
  [6] = "#689d6a", /* cyan    */
  [7] = "#a89984", /* white   */

  /* 8 bright colors */
  [8]  = "#928374",  /* black   */
  [9]  = "#cc241d",  /* red     */
  [10] = "#d79921", /* green   */
  [11] = "#b58900", /* yellow  */
  [12] = "#458588", /* blue    */
  [13] = "#b16286", /* magenta */
  [14] = "#689d6a", /* cyan    */
  [15] = "#a89984", /* white   */

  /* special colors */
  [256] = "#282828", /* background */
  [257] = "#a89984", /* foreground */
  [258] = "#ebdbb2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
