// #include "ex00/ft_ft.c"
// #include "ex01/ft_ultimate_ft.c"
// #include "ex02/ft_swap.c"
// #include "ex03/ft_div_mod.c"
// #include "ex04/ft_ultimate_div_mod.c"
// #include "ex05/ft_putstr.c"
// #include "ex06/ft_strlen.c"
// #include "ex07/ft_rev_int_tab.c"
// #include "ex08/ft_sort_int_tab.c"

// #include <stdio.h>

// int main()
// {
// 	int nbr;
// 	ft_ft(&nbr);
// 	printf("%d", nbr);
// 	return 0;
// }

// int main()
// {
// 	int n0 = 0;
// 	int *n1 = &n0;
// 	int **n2 = &n1;
// 	int ***n3 = &n2;
// 	int ****n4 = &n3;
// 	int *****n5 = &n4;
// 	int ******n6 = &n5;
// 	int *******n7 = &n6;
// 	int ********n8 = &n7;
// 	int *********nbr = &n8;
// 	ft_ultimate_ft(nbr);
// 	printf("%d", *********nbr);
// 	return (0);
// }


// int main()
// {
// 	int a = 42;
// 	int b = 24;

// 	ft_swap(&a, &b);
// 	printf("%d %d ", a, b);
// 	return (0);
// }

// int main()
// {
// 	int a = 42;
// 	int b = 24;
// 	int div;
// 	int mod;
// 	ft_div_mod(a, b, &div, &mod);
// 	printf("%d %d", div, mod);
// 	return 0;
// }

// int main()
// {
// 	int a = 42;
// 	int b = 24;
// 	ft_ultimate_div_mod(&a, &b);
// 	printf("%d %d", a, b);
// 	return (0);
// }

// int main()
// {
// 	char *str = "asdsadmsakd3v4ui7rwe895734526897";
// 	ft_putstr(str);
// 	return (0);
// }

// int main()
// {
// 	char *str = "ashbrvwehkrbksdfnwjfanwejknfj";
// 	int len = ft_strlen(str);
// 	printf("%d", len);
// 	return (0);
// }

// int main()
// {
// 	int tab[10] = {53124235,12342,-21234243,0 ,3123452,-41324123,52345,612354,73451,8213413};
// 	int size = 10;

// 	ft_rev_int_tab(tab, size);
// 	int i;
// 	for (i = 0; i < size; i++)
// 		printf("%d ", tab[i]);
// 	return (0);
// }

// int main()
// {
// 	int tab[9] = {413123,22134234,412345,-5612345,712345,9,6312345, -23142, 0};
// 	int size = 9;

// 	ft_sort_int_tab(tab, size);
// 	int i;
// 	for(i = 0; i < size; i++)
// 		printf("%d ", tab[i]);
// 	return (0);
// }
