#include "ex05/ft_atoi_base.c"
#include <stdio.h>

int main()
{
	int num;
	char str[100];

	scanf("%s", str);
	num = ft_atoi_base(str, "01234567");
	printf("%d", num);
	return 0;
}
