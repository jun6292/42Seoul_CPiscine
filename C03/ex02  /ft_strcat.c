char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest1[50] = "Hello World! ";
	char	dest11[50] = "Hello World! ";
	char	src1[50] = "What's your name??";
	char	dest2[50] = "We ";
	char	dest22[50] = "We ";
	char	src2[50] = "need for Speed";
	char	dest3[50] = "I am ";
	char	dest33[50] = "I am ";
	char	src3[50] = "Vengeance.";
	char	dest4[50] = "I am";
	char	dest44[50] = "I am";
	char	src4[50] = " the night.";
	char	dest5[50] = "I am";
	char	dest55[50] = "I am";
	char	src5[50] = " the Batman!!!";
	printf("\n");
	printf("dest : %s\nsrc : %s\n", dest1, src1);
	printf("com function  : %s\nyour function : %s\n", strcat(dest1,src1), ft_strcat(dest11, src1));
	printf("\n\n");
	printf("dest ; %s\nsrc : %s\n", dest2, src2);
	printf("com function  : %s\nyour function : %s\n", strcat(dest2, src2), ft_strcat(dest22, src2));
	printf("\n\n");
	printf("dest ; %s\nsrc : %s\n", dest3, src3);
	printf("com function  : %s\nyour function : %s\n", strcat(dest3, src3), ft_strcat(dest33, src3));
	printf("\n\n");
	printf("dest ; %s\nsrc : %s\n", dest4, src4);
	printf("com function  : %s\nyour function : %s\n", strcat(dest4, src4), ft_strcat(dest44, src4));
	printf("\n\n");
	printf("dest ; %s\nsrc : %s\n", dest5, src5);
	printf("com function  : %s\nyour function : %s\n", strcat(dest5, src5), ft_strcat(dest55, src5));
	printf("\n\n");
	return (0);
}
