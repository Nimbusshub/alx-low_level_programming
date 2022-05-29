#include "main.h"

int main(void)
{
	char s[] = "Why did \"the chicken cross\"! the road 13!70f5get out\n";
	char ans[] = "To get to the other side\n";
	char *p;

	p = rot13(s);
	printf("%s", s);
	printf("%s", p);

	p = rot13(s);
	printf("%s", s);
	printf("%s", p);
	
	p = rot13(ans);
	printf("%s", ans);
	printf("%s", p);

	p = rot13(ans);
	printf("%s", ans);
	printf("%s", p);

	return (0);
}





