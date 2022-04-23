char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;

	i = 0;

}

#include <stdio.h>
#include <string.h>
int	main(void)
{
	char	dest1[50] = "Hello World! ";
	char	dest11[50] = "Hello World! ";
	char	src1[50] = "I'm Batman!!!!";
	char	dest2[50] = "We ";
	char	dest22[50] = "We ";
	char	src2[50] = "need for Speed";
	char	dest3[50] = "I am ";
	char	dest33[50] = "I am ";
	char	src3[50] = "Vengeance.";
	char	dest4[50] = "I love ";
	char	dest44[50] = "I love ";
	char	src4[50] = " you";
	int		i;
	i = 3;
	printf("\n");
	printf("dest : %s\nsrc : %s\n nb : %d\n", dest1, src1, i);
	printf("com function  : %s\nyour function : %s\n", strncat(dest1,src1, i), ft_strncat(dest11, src1, i));
	printf("\n\n");
	i = 4;
	printf("dest1 ; %s\nsrc1 : %s\n nb : %d\n", dest2, src2, i);
	printf("com function  : %s\nyour function : %s\n", strncat(dest2, src2, i), ft_strncat(dest22, src2, i));
	printf("\n\n");
	i = 30;
	printf("dest1 ; %s\nsrc1 : %s\n nb : %d\n", dest3, src3, i);
	printf("com function  : %s\nyour function : %s\n", strncat(dest3, src3, i), ft_strncat(dest33, src3, i));
	printf("\n\n");
	i = 2;
	printf("dest1 ; %s\nsrc1 : %s\n nb : %d\n", dest4, src4, i);
	printf("com function  : %s\nyour function : %s\n", strncat(dest4, src4, i), ft_strncat(dest44, src4, i));
	printf("\n\n");
	return (0);
}
