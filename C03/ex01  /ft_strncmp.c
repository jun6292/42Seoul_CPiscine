int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	
	while (s1[i] && s2[i] && s1[i] == s2[i] && i < n - 1)
		i++;
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>
int main(void)
{
	char s1[] = "abcdefg";
	char s2[] = "abcdefg";
	char s3[] = "abcfffffff";
	char s4[] = "abcggggggg";
	char s5[] = "";
	char s6[] = "123546789";
	char s7[] = "abcdefghijklmnop";
	char s8[] = "abcdef9hijklmnio";
	printf("\n");
	printf("s1 : %s \ns2 : %s\nn : 3\ncom function : %d\nyour function : %d\n", s1, s2, strncmp(s1, s2, 3), ft_strncmp(s1, s2, 3));
	printf("\n");
	printf("s3 : %s \ns4 : %s\nn : 3\ncom function : %d\nyour function : %d\n", s3, s4, strncmp(s3, s4, 3), ft_strncmp(s3, s4, 3));
	printf("\n");
	printf("s5 : %s \ns6 : %s\nn : 5\ncom function : %d\nyour function : %d\n", s5, s6, strncmp(s5, s6, 5), ft_strncmp(s5, s6, 5));
	printf("\n");
	printf("s7 : %s \ns8 : %s\nn : 15\ncom function : %d\nyour function : %d\n", s7, s8, strncmp(s7, s8, 15), ft_strncmp(s7, s8, 15));
	printf("\n");
	return (0);
}
