const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#0f1011", /* black   */
  [1] = "#CF0D03", /* red     */
  [2] = "#E02406", /* green   */
  [3] = "#CE5E45", /* yellow  */
  [4] = "#E69967", /* blue    */
  [5] = "#E4A99E", /* magenta */
  [6] = "#EAC9AB", /* cyan    */
  [7] = "#f2e4df", /* white   */

  /* 8 bright colors */
  [8]  = "#a99f9c",  /* black   */
  [9]  = "#CF0D03",  /* red     */
  [10] = "#E02406", /* green   */
  [11] = "#CE5E45", /* yellow  */
  [12] = "#E69967", /* blue    */
  [13] = "#E4A99E", /* magenta */
  [14] = "#EAC9AB", /* cyan    */
  [15] = "#f2e4df", /* white   */

  /* special colors */
  [256] = "#0f1011", /* background */
  [257] = "#f2e4df", /* foreground */
  [258] = "#f2e4df",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
