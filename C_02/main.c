// #include "ex00/ft_strcpy.c"
// #include "ex01/ft_strncpy.c"
// #include "ex02/ft_str_is_alpha.c"
// #include "ex03/ft_str_is_numeric.c"
// #include "ex04/ft_str_is_lowercase.c"
// #include "ex05/ft_str_is_uppercase.c"
// #include "ex06/ft_str_is_printable.c"
// #include "ex07/ft_strupcase.c"
// #include "ex08/ft_strlowcase.c"
// #include "ex09/ft_strcapitalize.c"
// #include "ex10/ft_strlcpy.c"
#include "ex11/ft_putstr_non_printable.c"

#include <stdio.h>

// int main(void){
// 	char dest[1000];
// 	char *temp;
// 	temp =ft_strcpy(dest, "wyuwyuwyuwyuwyuwyu    wyuwyu");

// 	printf("%s\n%s", dest, temp);
// 	return (0);
// }

// int main(void){
// 	char dest[1000];
// 	char *temp;

// 	temp = ft_strncpy(dest, "wyu	wyu		wyu", 100);
// 	printf("%s\n%s\n", dest, temp);
// 	return (0);
// }

// int main(void){
// 	int flag;

// 	flag = ft_str_is_alpha("");
// 	printf("%d", flag);
// 	return (0);
// }

// int main(void){
// 	int flag;

// 	flag = ft_str_is_numeric("");
// 	printf("%d", flag);
// 	return (0);
// }

// int main(void){
// 	int flag;

// 	flag = ft_str_is_lowercase("");
// 	printf("%d", flag);
// 	return (0);
// }

// int main(void){
// 	int flag;

// 	flag =  ft_str_is_uppercase("");
// 	printf("%d", flag);
// 	return (0);
// }

// int main(void){
// 	int flag;

// 	flag = ft_str_is_printable("\t");
// 	printf("%d", flag);
// }

// int main()
// {
// 	char str[10] = {'1','b','c','D',' ','?', '\0'};
// 	ft_strupcase(str);
// 	printf("%s", str);
// 	return (0);
// }

// int main(){
// 	char str[10] = {'1','B','C','d',' ','?', '\0'};
// 	ft_strlowcase(str);
// 	printf("%s", str);
// 	return (0);
// }

// int main()
// {
// 	char str[100];

// 	scanf("%s", str);
// 	ft_strcapitalize(str);
// 	printf("%s", str);
// 	return (0);
// }

// int main(void){
// 	char str[1000];
// 	char *temp;

// 	scanf("%[^\n]s", str);
// 	printf("%s\n", str);
// 	temp = ft_strcapitalize(str);
// 	printf("%s\n%s", str, temp);
// 	return (0);
// }

// int main(void) {
// 	char dest[1000];
// 	ft_strlcpy(dest, "wyuwyuwyuwyuwy   u", 5);
// 	printf("%s", dest);
// 	return 0;
// }

int main()
{
	char	str[100];

	scanf("%[^\n]s", str);
	ft_putstr_non_printable(str);
	return (0);
}
