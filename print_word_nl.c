/* Program to print input one word per line */
/* 1) If first input is space or tab, program need to ignore it;
2) If not, just input, until a space or tab character is input;
3) On second space or tab input, include newline command, and set "fc" to 1, to avoid double 
space and blank lines;
4) Consider "fc" equal 1 for space or tab, so a sequence with "space+tab" or "tab+space", avo
id double new lines;
*/


#include <stdio.h>

main()
{

	int c, h, fc, st; /* c = character; fc = first character ; h = history ; st = spaceta
b */

	fc = 0;
	c = getchar();	
	while (c  != EOF) {
		if ((c == ' ' || c == '\t') && (fc == 0)) {
			h = c;
			++fc; /* Increment fc to 1 - now we know its not the first input */
			c = getchar();
		}
		else if ((c == ' ' || c == '\t') && (fc != 0 && (h != ' ' && h != '\t'))) {
			h = c;
			printf("\n"); /* Include a new line when space or tabs input */
			c = getchar();
		}
		/* next else will ignore space and tabs in sequence */
		else if ((c == ' ' && h == ' ') || (c == '\t' && h == '\t'))
			c = getchar();
		else if ((c == ' ' && h == '\t') || (c == '\t' && h == ' '))
			c = getchar();
		else if (c != ' ' && c != '\t') {
			putchar(c);
			h = c;
			c = getchar();
		}
	}
}
