#include <stdio.h>

/* Count blank spaces, tab, new lines or "a" caracter */

main()
{

        int c, s, t, n, a;
        s, n, a = 0;
        t = 0;
        while ((c = getchar()) != EOF)
                if (c == ' ')
                        ++s;
                else if (c == '\t')
                        ++t;
                else if (c == '\n')
                        ++n;
                else if (c == 'a')
                        ++a;
        printf("Space: %d\n", s);
        printf("Tab: %d\n", t);
        printf("NewLine: %d\n", n);
        printf("A: %d\n", a);
}
