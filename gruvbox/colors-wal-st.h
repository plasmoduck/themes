const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#282828", /* black  / hard contrast: #1d2021 / soft contrast: #32302f */
  [1] = "#cc241d", /* red     */
  [2] = "#98971a", /* green   */
  [3] = "#d79921", /* yellow  / orange = "#d65d0e" */
  [4] = "#458588", /* blue    */
  [5] = "#b16286", /* magenta */
  [6] = "#689d6a", /* cyan    */
  [7] = "#a89984", /* white   */

  /* 8 bright colors */
  [8]  = "#928374",  /* black   */
  [9]  = "#fb4934",  /* red     */
  [10] = "#b8bb26", /* green   */
  [11] = "#fabd2f", /* yellow  / orange = "#fe8019" */
  [12] = "#83a598", /* blue    */
  [13] = "#d3869b", /* magenta */
  [14] = "#8ec07c", /* cyan    */
  [15] = "#ebdbb2", /* white   */

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
