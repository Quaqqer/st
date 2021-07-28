/* Terminal colors (16 first used in escape sequence) */
static const char *colorname[] = {
       /* 8 normal colors */
       "#292d3e", /* black   */
       "#f07178", /* red     */
       "#c3e88d", /* green   */
       "#ffcb6b", /* yellow  */
       "#82aaff", /* blue    */
       "#c792ea", /* magenta */
       "#89ddff", /* cyan    */
       "#959dcb", /* white   */


       /* 8 bright colors */
       "#676e95", /* black   */
       "#f78c6c", /* red     */
       "#444267", /* green   */
       "#32374d", /* yellow  */
       "#8796b0", /* blue    */
       "#959dcb", /* magenta */
       "#ff5370", /* cyan    */
       "#ffffff", /* white   */

       [255] = 0,

       /* more colors can be added after 255 to use with DefaultXX */
       "#292d3e", /* background */
       "#959dcb", /* foreground */
       "black",
};

int draw_bold_as_bright = 0;

/*
 * Default colors (colorname index)
 * foreground, background, cursor, reverse cursor
 */
unsigned int defaultfg = 257;
unsigned int defaultbg = 256;
static unsigned int defaultcs = 257;
static unsigned int defaultrcs = 256;
