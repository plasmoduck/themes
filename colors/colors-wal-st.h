const char *colorname[] = {
 /* 8 normal colors */
  [0]  = "#30343F",  /* black   */
  [1]  = "#B35660",  /* red     */
  [2] = "#96AC7E", /* green   */
  [3] = "#D7B971", /* yellow  */
  [4] = "#7091B0", /* blue    */
  [5] = "#A37E9D", /* magenta */
  [6] = "#76AEBD", /* cyan    */
  [7] = "#D1D6DC", /* white   */


  /* 8 bright colors */
  [8] = "#4B5262", /* black   */
  [9] = "#BA5E61", /* red     */
  [10] = "#A3BD8D", /* green   */
  [11] = "#EACB8B", /* yellow  */
  [12] = "#80A1C0", /* blue    */
  [13] = "#B38EAD", /* magenta */
  [14] = "#88C0CF", /* cyan    */
  [15] = "#E5EAF0", /* white   */
  
  /* special colors */
  [256] = "#30343F", /* background */
  [257] = "#D1D6DC", /* foreground */
  [258] = "#D1D6DC",     /* cursor */
};

/* Default colors (colorname index)
 * foreground, background, cursor */
 unsigned int defaultbg = 256;
 unsigned int defaultfg = 257;
 unsigned int defaultcs = 258;
 unsigned int defaultrcs= 258;
