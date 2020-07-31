const char *colorname[] = {

  /* 8 normal colors */
  [0] = "#080808", /* black   */
  [1] = "#EA4041", /* red     */
  [2] = "#89DD01", /* green   */
  [3] = "#FC7D00", /* yellow  */
  [4] = "#09BDFF", /* blue    */
  [5] = "#FF5691", /* magenta */
  [6] = "#77E0F3", /* cyan    */
  [7] = "#F5F5F5", /* white   */

  /* 8 bright colors */
  [8]  = "#5E5E5E",  /* black   */
  [9]  = "#EA4041",  /* red     */
  [10] = "#9DFA05", /* green   */
  [11] = "#FBE031", /* yellow  */
  [12] = "#40CDFF", /* blue    */
  [13] = "#FF2B75", /* magenta */
  [14] = "#08CFF3", /* cyan    */
  [15] = "#FFFFFF", /* white   */

  /* special colors */
  [256] = "#080808", /* background */
  [257] = "#F5F5F5", /* foreground */
  [258] = "#F5F5F5",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 0;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
