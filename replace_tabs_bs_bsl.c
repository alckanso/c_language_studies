/* Program to replace tab by \t, backspace by \b and each backslash by \\ */

#include <stdio.h>

main ()
{

        int c;

        c = getchar();
        while (c != EOF) {
                if (c == '\b') {
                        putchar('\\');
                        putchar('b');
                        c = getchar();
                        continue;
                }
                else if (c == '\\') {
                        putchar('\\');
                        putchar('\\');
                        c = getchar();
                        continue;
                }
                else if (c == '\t') {
                        putchar('\\');
                        putchar('t');
                        c = getchar();
                        continue;
                }
                putchar(c);
                c = getchar();
        }
}
