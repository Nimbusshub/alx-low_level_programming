#include "main.h"

int main(void)
{
	char s[] = "Abj gung lbh'er qbar jvgu lbhe qbar jvgu lbhe hqrzl cebwrpg, jung'f arkg ba gur ntraqn?\n";
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





