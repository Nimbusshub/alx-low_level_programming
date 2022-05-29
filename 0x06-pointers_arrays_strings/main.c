#include "main.h"

int main(void)
{
	char s[] = "sorry that was a mistake.. I mean \nNow that you're done with your udemy project, what's next on the agenda?\n";
	/* char ans[] = "To get to the other side\n"; */
	char *p;

	p = rot13(s);
	printf("%s", p);
	
	/* p = rot13(ans);
	printf("%s", ans);
	printf("%s", p);

	p = rot13(ans);
	printf("%s", ans);
	printf("%s", p);*/

	return (0);
}





