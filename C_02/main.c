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
// #include "ex11/ft_putstr_non_printable.c"

// #include <stdio.h>

// int main(void){ //ex00
// 	char dest[1000];
// 	char *temp;
// 	temp =ft_strcpy(dest, "wyuwyuwyuwyuwyuwyu    wyuwyu");

// 	printf("%s\n%s", dest, temp);
// 	return (0);
// }

// int main(void){ //ex01
// 	char src[1000];
// 	char temp[1000];

// 	scanf("%[^\n]s", src);
// 	ft_strncpy(temp, src, 5);
// 	printf("%s\n%s\n", src, temp);
// 	return (0);
// }

// int main(void){ //ex02
// 	int flag;

// 	flag = ft_str_is_alpha("");
// 	printf("%d", flag);
// 	return (0);
// }

// int main(void){ //ex03
// 	int flag;

// 	flag = ft_str_is_numeric("");
// 	printf("%d", flag);
// 	return (0);
// }

// int main(void){ //ex04
// 	int flag;

// 	flag = ft_str_is_lowercase("");
// 	printf("%d", flag);
// 	return (0);
// }

// int main(void){ //ex05
// 	int flag;

// 	flag =  ft_str_is_uppercase("");
// 	printf("%d", flag);
// 	return (0);
// }

// int main(void){ //ex06
// 	int flag;

// 	flag = ft_str_is_printable("\t");
// 	printf("%d", flag);
// }

// int main() //ex07
// {
// 	char str[10] = {'1','b','c','D',' ','?', '\0'};
// 	ft_strupcase(str);
// 	printf("%s", str);
// 	return (0);
// }

// int main(){ //ex08
// 	char str[10] = {'1','B','C','d',' ','?', '\0'};
// 	ft_strlowcase(str);
// 	printf("%s", str);
// 	return (0);
// }

// int main() //ex09
// {
// 	char str[100];

// 	scanf("%[^\n]s", str);
// 	ft_strcapitalize(str);
// 	printf("%s", str);
// 	return (0);
// }

// int main(void) { //ex11
// 	char dest[1000];
// 	char src[1000];
// 	int num;

// 	scanf("%[^\n]s", src);
// 	num = ft_strlcpy(dest, src, 10);
// 	printf("%s\n%d", dest, num);
// 	return 0;
// }

// int main()
// {
// 	char	str[100];

// 	scanf("%[^\n]s", str);
// 	ft_putstr_non_printable(str);
// 	return (0);
// }
