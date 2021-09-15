// #include "ex07/ft_strupcase.c"
#include "ex09/ft_strcapitalize.c"
#include <stdio.h>

// int main()
// {
// 	char str[10] = {'1','b','c','D',' ','?', '\0'};
// 	ft_strupcase(str);
// 	printf("%s", str);
// 	return 0;
// }

int main()
{
	char str[100];

	scanf("%s", str);
	ft_strcapitalize(str);
	printf("%s", str);
	return (0);
}
