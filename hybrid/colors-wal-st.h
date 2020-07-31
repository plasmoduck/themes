static char *colorname[] = {

  /* 8 normal colors */
  [0] = "#282a2e", /* black   */
  [1] = "#a54242", /* red     */
  [2] = "#8c9440", /* green   */
  [3] = "#de935f", /* yellow  */
  [4] = "#5f819d", /* blue    */
  [5] = "#85678f", /* magenta */
  [6] = "#5e8d87", /* cyan    */
  [7] = "#707880", /* white   */

  /* 8 bright colors */
  [8]  = "#373b41", /* black   */
  [9]  = "#cc6666", /* red     */
  [10] = "#b5bd68", /* green   */
  [11] = "#f0c674", /* yellow  */
  [12] = "#81a2be", /* blue    */
  [13] = "#b294bb", /* magenta */
  [14] = "#8abeb7", /* cyan    */
  [15] = "#c5c8c6", /* white   */

  /* special colors */
  [256] = "#282a2e", /* background */
  [257] = "#c5c8c6", /* foreground */
  [258] = "#c5c8c6",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 256;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
