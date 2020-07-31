const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#09020c", /* black   */
  [1] = "#4B1261", /* red     */
  [2] = "#4F136B", /* green   */
  [3] = "#2D3A87", /* yellow  */
  [4] = "#6C1C8F", /* blue    */
  [5] = "#3B6A9F", /* magenta */
  [6] = "#2057A1", /* cyan    */
  [7] = "#88afd7", /* white   */

  /* 8 bright colors */
  [8]  = "#5f7a96",  /* black   */
  [9]  = "#4B1261",  /* red     */
  [10] = "#4F136B", /* green   */
  [11] = "#2D3A87", /* yellow  */
  [12] = "#6C1C8F", /* blue    */
  [13] = "#3B6A9F", /* magenta */
  [14] = "#2057A1", /* cyan    */
  [15] = "#88afd7", /* white   */

  /* special colors */
  [256] = "#09020c", /* background */
  [257] = "#88afd7", /* foreground */
  [258] = "#88afd7",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
