#include <stdio.h>

int main()
{
	unsigned n;
	
	scanf("%u", &n);

	while (n % 10 == 0) n /= 10;

	printf("%u", n);

	return 0;
}
