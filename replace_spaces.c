/* Program to replace space input with more than one space,
with output with just one space */
/* declare vars c (input character) and l (get the last character) */
/* First if is used to test if the character is not space */
/* l gets c value. Needed for the second elseif comparison */
/* If the actual and the last values are both space, we just get the
next character, without printing the actual one */

#include <stdio.h>

main()
{
        int c, l; 

        c = getchar(); 
        while (c != EOF) {
                if (c != ' ') { 
                        putchar(c);
                        l = c; 
                        c = getchar();
                }
                else if ((c == ' ') && (l == ' ')) { 
                        c = getchar();
                }
                else if (c == ' ') {
                        putchar(c);
                        l = c;
                        c = getchar();
                }
        }

}
