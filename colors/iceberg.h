/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
       /* 8 normal colors */
       "#161821", /* black   */
       "#e27878", /* red     */
       "#b4be82", /* green   */
       "#e2a478", /* yellow  */
       "#84a0c6", /* blue    */
       "#a093c7", /* magenta */
       "#89b8c2", /* cyan    */
       "#c6c8d1", /* white   */


       /* 8 bright colors */
       "#6b7089", /* black   */
       "#e98989", /* red     */
       "#c0ca8e", /* green   */
       "#e9b189", /* yellow  */
       "#91acd1", /* blue    */
       "#ada0d3", /* magenta */
       "#95c4ce", /* cyan    */
       "#d2d4de", /* white   */

       [255] = 0,

       /* more colors can be added after 255 to use with DefaultXX */
       "#161821", /* background */
       "#c6c8d1", /* foreground */
       "#d2d4de", /* cursor */
};

int draw_bold_as_bright = 0;

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
unsigned int defaultcs = 258;
unsigned int defaultrcs = 258;
