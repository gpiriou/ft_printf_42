#include "includes/ft_printf.h"

int main()
{

//	int a = -5;
//	int b = 6;
//	int c = 7;
//	int d = 8;
//	int e = 9;
//	int f = 10;


	//int		a = -4;
	//int		b = 0;
	//char	c = 'a';
	int		d = -12;
	//int		e = -2147483648;
	//int		f = 42;
	//int		g = 25;
	//int		h = 4200;
	//int		i = 8;
	//int		j = -12;
	//int		k = 123456789;
	//int		l = 0;
	//int		m = -12345678;
	//char	*n = "abcdefghijklmnop";
	//char	*o = "-a";
	//char	*p = "-12";
	//char	*q = "0";
	//char	*r = "%%";
	//char	*s = "-2147483648";
	//char	*t = "0x12345678";
	//char	*u = "-0";

	//char *str ="%i, %d, %d, %d, %d, %s, %c, %d, %u, %x, %X\n";

//	char *str = "Hello %0*.*d\n";

//	printf("P\n");printf(str, a, b, c, d, e, f);
//	printf("F");ft_printf(str, a, b, c, d, e, f);

	/// LIGNE 674
	ft_printf("-->|%-*.1d|<--\n", 3, d);
	ft_printf("-->|%-*.1d|<--\n", 4, d);
	printf("\n");
	printf("-->|%-*.1d|<--\n", 3, d);
	printf("-->|%-*.1d|<--\n", 4, d);

	return (0);
}
