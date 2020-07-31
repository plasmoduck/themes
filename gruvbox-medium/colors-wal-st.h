const char *colorname[] = {
  /* 8 normal colors */
  [0] = "#282828", /* black   */
  [1] = "#CC241D", /* red     */
  [2] = "#98971A", /* green   */
  [3] = "#D79921", /* yellow  */
  [4] = "#458588", /* blue    */
  [5] = "#B16286", /* magenta */
  [6] = "#689D6A", /* cyan    */
  [7] = "#A89984", /* white   */

  /* 8 bright colors */
  [8]  = "#928374",  /* black   */
  [9]  = "#fb4934",  /* red     */
  [10] = "#b8bb26", /* green   */
  [11] = "#FABD2F", /* yellow  */
  [12] = "#83a598", /* blue    */
  [13] = "#d3869b", /* magenta */
  [14] = "#8ec07c", /* cyan    */
  [15] = "#EBDBB2", /* white   */

  /* special colors */
  [256] = "#282828", /* background */
  [257] = "#EBDBB2", /* foreground */
  [258] = "#EBDBB2",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
