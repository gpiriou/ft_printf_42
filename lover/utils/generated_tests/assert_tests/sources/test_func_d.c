/*
** charmstr@student.42.fr
*/

#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include "../includes/printf_lover_test_func.h"
#include "../includes/libft.h"
#include "../includes/ft_printf.h"
#include <stdio.h>
#include <assert.h>
#include "../includes/printf_lover_test_func.h"

int	test_func_d(int d)
{
setbuf(stdout, NULL);
assert(printf("-->|%-4.d|<--\n", d) == ft_printf("-->|%-4.d|<--\n", d));
assert(printf("-->|%-4.*d|<--\n", -4, d) == ft_printf("-->|%-4.*d|<--\n", -4, d));
assert(printf("-->|%-4.*d|<--\n", -3, d) == ft_printf("-->|%-4.*d|<--\n", -3, d));
assert(printf("-->|%-4.*d|<--\n", -2, d) == ft_printf("-->|%-4.*d|<--\n", -2, d));
assert(printf("-->|%-4.*d|<--\n", -1, d) == ft_printf("-->|%-4.*d|<--\n", -1, d));
assert(printf("-->|%-4.*d|<--\n", 0, d) == ft_printf("-->|%-4.*d|<--\n", 0, d));
assert(printf("-->|%-4.*d|<--\n", 1, d) == ft_printf("-->|%-4.*d|<--\n", 1, d));
assert(printf("-->|%-4.*d|<--\n", 2, d) == ft_printf("-->|%-4.*d|<--\n", 2, d));
assert(printf("-->|%-4.*d|<--\n", 3, d) == ft_printf("-->|%-4.*d|<--\n", 3, d));
assert(printf("-->|%-4.*d|<--\n", 4, d) == ft_printf("-->|%-4.*d|<--\n", 4, d));
assert(printf("-->|%-4.0d|<--\n", d) == ft_printf("-->|%-4.0d|<--\n", d));
assert(printf("-->|%-4.1d|<--\n", d) == ft_printf("-->|%-4.1d|<--\n", d));
assert(printf("-->|%-4.2d|<--\n", d) == ft_printf("-->|%-4.2d|<--\n", d));
assert(printf("-->|%-4.3d|<--\n", d) == ft_printf("-->|%-4.3d|<--\n", d));
assert(printf("-->|%-4.4d|<--\n", d) == ft_printf("-->|%-4.4d|<--\n", d));
assert(printf("-->|%-4d|<--\n", d) == ft_printf("-->|%-4d|<--\n", d));
assert(printf("-->|%-3.d|<--\n", d) == ft_printf("-->|%-3.d|<--\n", d));
assert(printf("-->|%-3.*d|<--\n", -4, d) == ft_printf("-->|%-3.*d|<--\n", -4, d));
assert(printf("-->|%-3.*d|<--\n", -3, d) == ft_printf("-->|%-3.*d|<--\n", -3, d));
assert(printf("-->|%-3.*d|<--\n", -2, d) == ft_printf("-->|%-3.*d|<--\n", -2, d));
assert(printf("-->|%-3.*d|<--\n", -1, d) == ft_printf("-->|%-3.*d|<--\n", -1, d));
assert(printf("-->|%-3.*d|<--\n", 0, d) == ft_printf("-->|%-3.*d|<--\n", 0, d));
assert(printf("-->|%-3.*d|<--\n", 1, d) == ft_printf("-->|%-3.*d|<--\n", 1, d));
assert(printf("-->|%-3.*d|<--\n", 2, d) == ft_printf("-->|%-3.*d|<--\n", 2, d));
assert(printf("-->|%-3.*d|<--\n", 3, d) == ft_printf("-->|%-3.*d|<--\n", 3, d));
assert(printf("-->|%-3.*d|<--\n", 4, d) == ft_printf("-->|%-3.*d|<--\n", 4, d));
assert(printf("-->|%-3.0d|<--\n", d) == ft_printf("-->|%-3.0d|<--\n", d));
assert(printf("-->|%-3.1d|<--\n", d) == ft_printf("-->|%-3.1d|<--\n", d));
assert(printf("-->|%-3.2d|<--\n", d) == ft_printf("-->|%-3.2d|<--\n", d));
assert(printf("-->|%-3.3d|<--\n", d) == ft_printf("-->|%-3.3d|<--\n", d));
assert(printf("-->|%-3.4d|<--\n", d) == ft_printf("-->|%-3.4d|<--\n", d));
assert(printf("-->|%-3d|<--\n", d) == ft_printf("-->|%-3d|<--\n", d));
assert(printf("-->|%-2.d|<--\n", d) == ft_printf("-->|%-2.d|<--\n", d));
assert(printf("-->|%-2.*d|<--\n", -4, d) == ft_printf("-->|%-2.*d|<--\n", -4, d));
assert(printf("-->|%-2.*d|<--\n", -3, d) == ft_printf("-->|%-2.*d|<--\n", -3, d));
assert(printf("-->|%-2.*d|<--\n", -2, d) == ft_printf("-->|%-2.*d|<--\n", -2, d));
assert(printf("-->|%-2.*d|<--\n", -1, d) == ft_printf("-->|%-2.*d|<--\n", -1, d));
assert(printf("-->|%-2.*d|<--\n", 0, d) == ft_printf("-->|%-2.*d|<--\n", 0, d));
assert(printf("-->|%-2.*d|<--\n", 1, d) == ft_printf("-->|%-2.*d|<--\n", 1, d));
assert(printf("-->|%-2.*d|<--\n", 2, d) == ft_printf("-->|%-2.*d|<--\n", 2, d));
assert(printf("-->|%-2.*d|<--\n", 3, d) == ft_printf("-->|%-2.*d|<--\n", 3, d));
assert(printf("-->|%-2.*d|<--\n", 4, d) == ft_printf("-->|%-2.*d|<--\n", 4, d));
assert(printf("-->|%-2.0d|<--\n", d) == ft_printf("-->|%-2.0d|<--\n", d));
assert(printf("-->|%-2.1d|<--\n", d) == ft_printf("-->|%-2.1d|<--\n", d));
assert(printf("-->|%-2.2d|<--\n", d) == ft_printf("-->|%-2.2d|<--\n", d));
assert(printf("-->|%-2.3d|<--\n", d) == ft_printf("-->|%-2.3d|<--\n", d));
assert(printf("-->|%-2.4d|<--\n", d) == ft_printf("-->|%-2.4d|<--\n", d));
assert(printf("-->|%-2d|<--\n", d) == ft_printf("-->|%-2d|<--\n", d));
assert(printf("-->|%-1.d|<--\n", d) == ft_printf("-->|%-1.d|<--\n", d));
assert(printf("-->|%-1.*d|<--\n", -4, d) == ft_printf("-->|%-1.*d|<--\n", -4, d));
assert(printf("-->|%-1.*d|<--\n", -3, d) == ft_printf("-->|%-1.*d|<--\n", -3, d));
assert(printf("-->|%-1.*d|<--\n", -2, d) == ft_printf("-->|%-1.*d|<--\n", -2, d));
assert(printf("-->|%-1.*d|<--\n", -1, d) == ft_printf("-->|%-1.*d|<--\n", -1, d));
assert(printf("-->|%-1.*d|<--\n", 0, d) == ft_printf("-->|%-1.*d|<--\n", 0, d));
assert(printf("-->|%-1.*d|<--\n", 1, d) == ft_printf("-->|%-1.*d|<--\n", 1, d));
assert(printf("-->|%-1.*d|<--\n", 2, d) == ft_printf("-->|%-1.*d|<--\n", 2, d));
assert(printf("-->|%-1.*d|<--\n", 3, d) == ft_printf("-->|%-1.*d|<--\n", 3, d));
assert(printf("-->|%-1.*d|<--\n", 4, d) == ft_printf("-->|%-1.*d|<--\n", 4, d));
assert(printf("-->|%-1.0d|<--\n", d) == ft_printf("-->|%-1.0d|<--\n", d));
assert(printf("-->|%-1.1d|<--\n", d) == ft_printf("-->|%-1.1d|<--\n", d));
assert(printf("-->|%-1.2d|<--\n", d) == ft_printf("-->|%-1.2d|<--\n", d));
assert(printf("-->|%-1.3d|<--\n", d) == ft_printf("-->|%-1.3d|<--\n", d));
assert(printf("-->|%-1.4d|<--\n", d) == ft_printf("-->|%-1.4d|<--\n", d));
assert(printf("-->|%-1d|<--\n", d) == ft_printf("-->|%-1d|<--\n", d));
assert(printf("-->|%.d|<--\n", d) == ft_printf("-->|%.d|<--\n", d));
assert(printf("-->|%.*d|<--\n", -4, d) == ft_printf("-->|%.*d|<--\n", -4, d));
assert(printf("-->|%.*d|<--\n", -3, d) == ft_printf("-->|%.*d|<--\n", -3, d));
assert(printf("-->|%.*d|<--\n", -2, d) == ft_printf("-->|%.*d|<--\n", -2, d));
assert(printf("-->|%.*d|<--\n", -1, d) == ft_printf("-->|%.*d|<--\n", -1, d));
assert(printf("-->|%.*d|<--\n", 0, d) == ft_printf("-->|%.*d|<--\n", 0, d));
assert(printf("-->|%.*d|<--\n", 1, d) == ft_printf("-->|%.*d|<--\n", 1, d));
assert(printf("-->|%.*d|<--\n", 2, d) == ft_printf("-->|%.*d|<--\n", 2, d));
assert(printf("-->|%.*d|<--\n", 3, d) == ft_printf("-->|%.*d|<--\n", 3, d));
assert(printf("-->|%.*d|<--\n", 4, d) == ft_printf("-->|%.*d|<--\n", 4, d));
assert(printf("-->|%.0d|<--\n", d) == ft_printf("-->|%.0d|<--\n", d));
assert(printf("-->|%.1d|<--\n", d) == ft_printf("-->|%.1d|<--\n", d));
assert(printf("-->|%.2d|<--\n", d) == ft_printf("-->|%.2d|<--\n", d));
assert(printf("-->|%.3d|<--\n", d) == ft_printf("-->|%.3d|<--\n", d));
assert(printf("-->|%.4d|<--\n", d) == ft_printf("-->|%.4d|<--\n", d));
assert(printf("-->|%d|<--\n", d) == ft_printf("-->|%d|<--\n", d));
assert(printf("-->|%*.d|<--\n", -4, d) == ft_printf("-->|%*.d|<--\n", -4, d));
assert(printf("-->|%*.d|<--\n", -3, d) == ft_printf("-->|%*.d|<--\n", -3, d));
assert(printf("-->|%*.d|<--\n", -2, d) == ft_printf("-->|%*.d|<--\n", -2, d));
assert(printf("-->|%*.d|<--\n", -1, d) == ft_printf("-->|%*.d|<--\n", -1, d));
assert(printf("-->|%*.d|<--\n", 0, d) == ft_printf("-->|%*.d|<--\n", 0, d));
assert(printf("-->|%*.d|<--\n", 1, d) == ft_printf("-->|%*.d|<--\n", 1, d));
assert(printf("-->|%*.d|<--\n", 2, d) == ft_printf("-->|%*.d|<--\n", 2, d));
assert(printf("-->|%*.d|<--\n", 3, d) == ft_printf("-->|%*.d|<--\n", 3, d));
assert(printf("-->|%*.d|<--\n", 4, d) == ft_printf("-->|%*.d|<--\n", 4, d));
assert(printf("-->|%*.*d|<--\n", -4, -4, d) == ft_printf("-->|%*.*d|<--\n", -4, -4, d));
assert(printf("-->|%*.*d|<--\n", -4, -3, d) == ft_printf("-->|%*.*d|<--\n", -4, -3, d));
assert(printf("-->|%*.*d|<--\n", -4, -2, d) == ft_printf("-->|%*.*d|<--\n", -4, -2, d));
assert(printf("-->|%*.*d|<--\n", -4, -1, d) == ft_printf("-->|%*.*d|<--\n", -4, -1, d));
assert(printf("-->|%*.*d|<--\n", -4, 0, d) == ft_printf("-->|%*.*d|<--\n", -4, 0, d));
assert(printf("-->|%*.*d|<--\n", -4, 1, d) == ft_printf("-->|%*.*d|<--\n", -4, 1, d));
assert(printf("-->|%*.*d|<--\n", -4, 2, d) == ft_printf("-->|%*.*d|<--\n", -4, 2, d));
assert(printf("-->|%*.*d|<--\n", -4, 3, d) == ft_printf("-->|%*.*d|<--\n", -4, 3, d));
assert(printf("-->|%*.*d|<--\n", -4, 4, d) == ft_printf("-->|%*.*d|<--\n", -4, 4, d));
assert(printf("-->|%*.*d|<--\n", -3, -4, d) == ft_printf("-->|%*.*d|<--\n", -3, -4, d));
assert(printf("-->|%*.*d|<--\n", -3, -3, d) == ft_printf("-->|%*.*d|<--\n", -3, -3, d));
assert(printf("-->|%*.*d|<--\n", -3, -2, d) == ft_printf("-->|%*.*d|<--\n", -3, -2, d));
assert(printf("-->|%*.*d|<--\n", -3, -1, d) == ft_printf("-->|%*.*d|<--\n", -3, -1, d));
assert(printf("-->|%*.*d|<--\n", -3, 0, d) == ft_printf("-->|%*.*d|<--\n", -3, 0, d));
assert(printf("-->|%*.*d|<--\n", -3, 1, d) == ft_printf("-->|%*.*d|<--\n", -3, 1, d));
assert(printf("-->|%*.*d|<--\n", -3, 2, d) == ft_printf("-->|%*.*d|<--\n", -3, 2, d));
assert(printf("-->|%*.*d|<--\n", -3, 3, d) == ft_printf("-->|%*.*d|<--\n", -3, 3, d));
assert(printf("-->|%*.*d|<--\n", -3, 4, d) == ft_printf("-->|%*.*d|<--\n", -3, 4, d));
assert(printf("-->|%*.*d|<--\n", -2, -4, d) == ft_printf("-->|%*.*d|<--\n", -2, -4, d));
assert(printf("-->|%*.*d|<--\n", -2, -3, d) == ft_printf("-->|%*.*d|<--\n", -2, -3, d));
assert(printf("-->|%*.*d|<--\n", -2, -2, d) == ft_printf("-->|%*.*d|<--\n", -2, -2, d));
assert(printf("-->|%*.*d|<--\n", -2, -1, d) == ft_printf("-->|%*.*d|<--\n", -2, -1, d));
assert(printf("-->|%*.*d|<--\n", -2, 0, d) == ft_printf("-->|%*.*d|<--\n", -2, 0, d));
assert(printf("-->|%*.*d|<--\n", -2, 1, d) == ft_printf("-->|%*.*d|<--\n", -2, 1, d));
assert(printf("-->|%*.*d|<--\n", -2, 2, d) == ft_printf("-->|%*.*d|<--\n", -2, 2, d));
assert(printf("-->|%*.*d|<--\n", -2, 3, d) == ft_printf("-->|%*.*d|<--\n", -2, 3, d));
assert(printf("-->|%*.*d|<--\n", -2, 4, d) == ft_printf("-->|%*.*d|<--\n", -2, 4, d));
assert(printf("-->|%*.*d|<--\n", -1, -4, d) == ft_printf("-->|%*.*d|<--\n", -1, -4, d));
assert(printf("-->|%*.*d|<--\n", -1, -3, d) == ft_printf("-->|%*.*d|<--\n", -1, -3, d));
assert(printf("-->|%*.*d|<--\n", -1, -2, d) == ft_printf("-->|%*.*d|<--\n", -1, -2, d));
assert(printf("-->|%*.*d|<--\n", -1, -1, d) == ft_printf("-->|%*.*d|<--\n", -1, -1, d));
assert(printf("-->|%*.*d|<--\n", -1, 0, d) == ft_printf("-->|%*.*d|<--\n", -1, 0, d));
assert(printf("-->|%*.*d|<--\n", -1, 1, d) == ft_printf("-->|%*.*d|<--\n", -1, 1, d));
assert(printf("-->|%*.*d|<--\n", -1, 2, d) == ft_printf("-->|%*.*d|<--\n", -1, 2, d));
assert(printf("-->|%*.*d|<--\n", -1, 3, d) == ft_printf("-->|%*.*d|<--\n", -1, 3, d));
assert(printf("-->|%*.*d|<--\n", -1, 4, d) == ft_printf("-->|%*.*d|<--\n", -1, 4, d));
assert(printf("-->|%*.*d|<--\n", 0, -4, d) == ft_printf("-->|%*.*d|<--\n", 0, -4, d));
assert(printf("-->|%*.*d|<--\n", 0, -3, d) == ft_printf("-->|%*.*d|<--\n", 0, -3, d));
assert(printf("-->|%*.*d|<--\n", 0, -2, d) == ft_printf("-->|%*.*d|<--\n", 0, -2, d));
assert(printf("-->|%*.*d|<--\n", 0, -1, d) == ft_printf("-->|%*.*d|<--\n", 0, -1, d));
assert(printf("-->|%*.*d|<--\n", 0, 0, d) == ft_printf("-->|%*.*d|<--\n", 0, 0, d));
assert(printf("-->|%*.*d|<--\n", 0, 1, d) == ft_printf("-->|%*.*d|<--\n", 0, 1, d));
assert(printf("-->|%*.*d|<--\n", 0, 2, d) == ft_printf("-->|%*.*d|<--\n", 0, 2, d));
assert(printf("-->|%*.*d|<--\n", 0, 3, d) == ft_printf("-->|%*.*d|<--\n", 0, 3, d));
assert(printf("-->|%*.*d|<--\n", 0, 4, d) == ft_printf("-->|%*.*d|<--\n", 0, 4, d));
assert(printf("-->|%*.*d|<--\n", 1, -4, d) == ft_printf("-->|%*.*d|<--\n", 1, -4, d));
assert(printf("-->|%*.*d|<--\n", 1, -3, d) == ft_printf("-->|%*.*d|<--\n", 1, -3, d));
assert(printf("-->|%*.*d|<--\n", 1, -2, d) == ft_printf("-->|%*.*d|<--\n", 1, -2, d));
assert(printf("-->|%*.*d|<--\n", 1, -1, d) == ft_printf("-->|%*.*d|<--\n", 1, -1, d));
assert(printf("-->|%*.*d|<--\n", 1, 0, d) == ft_printf("-->|%*.*d|<--\n", 1, 0, d));
assert(printf("-->|%*.*d|<--\n", 1, 1, d) == ft_printf("-->|%*.*d|<--\n", 1, 1, d));
assert(printf("-->|%*.*d|<--\n", 1, 2, d) == ft_printf("-->|%*.*d|<--\n", 1, 2, d));
assert(printf("-->|%*.*d|<--\n", 1, 3, d) == ft_printf("-->|%*.*d|<--\n", 1, 3, d));
assert(printf("-->|%*.*d|<--\n", 1, 4, d) == ft_printf("-->|%*.*d|<--\n", 1, 4, d));
assert(printf("-->|%*.*d|<--\n", 2, -4, d) == ft_printf("-->|%*.*d|<--\n", 2, -4, d));
assert(printf("-->|%*.*d|<--\n", 2, -3, d) == ft_printf("-->|%*.*d|<--\n", 2, -3, d));
assert(printf("-->|%*.*d|<--\n", 2, -2, d) == ft_printf("-->|%*.*d|<--\n", 2, -2, d));
assert(printf("-->|%*.*d|<--\n", 2, -1, d) == ft_printf("-->|%*.*d|<--\n", 2, -1, d));
assert(printf("-->|%*.*d|<--\n", 2, 0, d) == ft_printf("-->|%*.*d|<--\n", 2, 0, d));
assert(printf("-->|%*.*d|<--\n", 2, 1, d) == ft_printf("-->|%*.*d|<--\n", 2, 1, d));
assert(printf("-->|%*.*d|<--\n", 2, 2, d) == ft_printf("-->|%*.*d|<--\n", 2, 2, d));
assert(printf("-->|%*.*d|<--\n", 2, 3, d) == ft_printf("-->|%*.*d|<--\n", 2, 3, d));
assert(printf("-->|%*.*d|<--\n", 2, 4, d) == ft_printf("-->|%*.*d|<--\n", 2, 4, d));
assert(printf("-->|%*.*d|<--\n", 3, -4, d) == ft_printf("-->|%*.*d|<--\n", 3, -4, d));
assert(printf("-->|%*.*d|<--\n", 3, -3, d) == ft_printf("-->|%*.*d|<--\n", 3, -3, d));
assert(printf("-->|%*.*d|<--\n", 3, -2, d) == ft_printf("-->|%*.*d|<--\n", 3, -2, d));
assert(printf("-->|%*.*d|<--\n", 3, -1, d) == ft_printf("-->|%*.*d|<--\n", 3, -1, d));
assert(printf("-->|%*.*d|<--\n", 3, 0, d) == ft_printf("-->|%*.*d|<--\n", 3, 0, d));
assert(printf("-->|%*.*d|<--\n", 3, 1, d) == ft_printf("-->|%*.*d|<--\n", 3, 1, d));
assert(printf("-->|%*.*d|<--\n", 3, 2, d) == ft_printf("-->|%*.*d|<--\n", 3, 2, d));
assert(printf("-->|%*.*d|<--\n", 3, 3, d) == ft_printf("-->|%*.*d|<--\n", 3, 3, d));
assert(printf("-->|%*.*d|<--\n", 3, 4, d) == ft_printf("-->|%*.*d|<--\n", 3, 4, d));
assert(printf("-->|%*.*d|<--\n", 4, -4, d) == ft_printf("-->|%*.*d|<--\n", 4, -4, d));
assert(printf("-->|%*.*d|<--\n", 4, -3, d) == ft_printf("-->|%*.*d|<--\n", 4, -3, d));
assert(printf("-->|%*.*d|<--\n", 4, -2, d) == ft_printf("-->|%*.*d|<--\n", 4, -2, d));
assert(printf("-->|%*.*d|<--\n", 4, -1, d) == ft_printf("-->|%*.*d|<--\n", 4, -1, d));
assert(printf("-->|%*.*d|<--\n", 4, 0, d) == ft_printf("-->|%*.*d|<--\n", 4, 0, d));
assert(printf("-->|%*.*d|<--\n", 4, 1, d) == ft_printf("-->|%*.*d|<--\n", 4, 1, d));
assert(printf("-->|%*.*d|<--\n", 4, 2, d) == ft_printf("-->|%*.*d|<--\n", 4, 2, d));
assert(printf("-->|%*.*d|<--\n", 4, 3, d) == ft_printf("-->|%*.*d|<--\n", 4, 3, d));
assert(printf("-->|%*.*d|<--\n", 4, 4, d) == ft_printf("-->|%*.*d|<--\n", 4, 4, d));
assert(printf("-->|%*.0d|<--\n", -4, d) == ft_printf("-->|%*.0d|<--\n", -4, d));
assert(printf("-->|%*.0d|<--\n", -3, d) == ft_printf("-->|%*.0d|<--\n", -3, d));
assert(printf("-->|%*.0d|<--\n", -2, d) == ft_printf("-->|%*.0d|<--\n", -2, d));
assert(printf("-->|%*.0d|<--\n", -1, d) == ft_printf("-->|%*.0d|<--\n", -1, d));
assert(printf("-->|%*.0d|<--\n", 0, d) == ft_printf("-->|%*.0d|<--\n", 0, d));
assert(printf("-->|%*.0d|<--\n", 1, d) == ft_printf("-->|%*.0d|<--\n", 1, d));
assert(printf("-->|%*.0d|<--\n", 2, d) == ft_printf("-->|%*.0d|<--\n", 2, d));
assert(printf("-->|%*.0d|<--\n", 3, d) == ft_printf("-->|%*.0d|<--\n", 3, d));
assert(printf("-->|%*.0d|<--\n", 4, d) == ft_printf("-->|%*.0d|<--\n", 4, d));
assert(printf("-->|%*.1d|<--\n", -4, d) == ft_printf("-->|%*.1d|<--\n", -4, d));
assert(printf("-->|%*.1d|<--\n", -3, d) == ft_printf("-->|%*.1d|<--\n", -3, d));
assert(printf("-->|%*.1d|<--\n", -2, d) == ft_printf("-->|%*.1d|<--\n", -2, d));
assert(printf("-->|%*.1d|<--\n", -1, d) == ft_printf("-->|%*.1d|<--\n", -1, d));
assert(printf("-->|%*.1d|<--\n", 0, d) == ft_printf("-->|%*.1d|<--\n", 0, d));
assert(printf("-->|%*.1d|<--\n", 1, d) == ft_printf("-->|%*.1d|<--\n", 1, d));
assert(printf("-->|%*.1d|<--\n", 2, d) == ft_printf("-->|%*.1d|<--\n", 2, d));
assert(printf("-->|%*.1d|<--\n", 3, d) == ft_printf("-->|%*.1d|<--\n", 3, d));
assert(printf("-->|%*.1d|<--\n", 4, d) == ft_printf("-->|%*.1d|<--\n", 4, d));
assert(printf("-->|%*.2d|<--\n", -4, d) == ft_printf("-->|%*.2d|<--\n", -4, d));
assert(printf("-->|%*.2d|<--\n", -3, d) == ft_printf("-->|%*.2d|<--\n", -3, d));
assert(printf("-->|%*.2d|<--\n", -2, d) == ft_printf("-->|%*.2d|<--\n", -2, d));
assert(printf("-->|%*.2d|<--\n", -1, d) == ft_printf("-->|%*.2d|<--\n", -1, d));
assert(printf("-->|%*.2d|<--\n", 0, d) == ft_printf("-->|%*.2d|<--\n", 0, d));
assert(printf("-->|%*.2d|<--\n", 1, d) == ft_printf("-->|%*.2d|<--\n", 1, d));
assert(printf("-->|%*.2d|<--\n", 2, d) == ft_printf("-->|%*.2d|<--\n", 2, d));
assert(printf("-->|%*.2d|<--\n", 3, d) == ft_printf("-->|%*.2d|<--\n", 3, d));
assert(printf("-->|%*.2d|<--\n", 4, d) == ft_printf("-->|%*.2d|<--\n", 4, d));
assert(printf("-->|%*.3d|<--\n", -4, d) == ft_printf("-->|%*.3d|<--\n", -4, d));
assert(printf("-->|%*.3d|<--\n", -3, d) == ft_printf("-->|%*.3d|<--\n", -3, d));
assert(printf("-->|%*.3d|<--\n", -2, d) == ft_printf("-->|%*.3d|<--\n", -2, d));
assert(printf("-->|%*.3d|<--\n", -1, d) == ft_printf("-->|%*.3d|<--\n", -1, d));
assert(printf("-->|%*.3d|<--\n", 0, d) == ft_printf("-->|%*.3d|<--\n", 0, d));
assert(printf("-->|%*.3d|<--\n", 1, d) == ft_printf("-->|%*.3d|<--\n", 1, d));
assert(printf("-->|%*.3d|<--\n", 2, d) == ft_printf("-->|%*.3d|<--\n", 2, d));
assert(printf("-->|%*.3d|<--\n", 3, d) == ft_printf("-->|%*.3d|<--\n", 3, d));
assert(printf("-->|%*.3d|<--\n", 4, d) == ft_printf("-->|%*.3d|<--\n", 4, d));
assert(printf("-->|%*.4d|<--\n", -4, d) == ft_printf("-->|%*.4d|<--\n", -4, d));
assert(printf("-->|%*.4d|<--\n", -3, d) == ft_printf("-->|%*.4d|<--\n", -3, d));
assert(printf("-->|%*.4d|<--\n", -2, d) == ft_printf("-->|%*.4d|<--\n", -2, d));
assert(printf("-->|%*.4d|<--\n", -1, d) == ft_printf("-->|%*.4d|<--\n", -1, d));
assert(printf("-->|%*.4d|<--\n", 0, d) == ft_printf("-->|%*.4d|<--\n", 0, d));
assert(printf("-->|%*.4d|<--\n", 1, d) == ft_printf("-->|%*.4d|<--\n", 1, d));
assert(printf("-->|%*.4d|<--\n", 2, d) == ft_printf("-->|%*.4d|<--\n", 2, d));
assert(printf("-->|%*.4d|<--\n", 3, d) == ft_printf("-->|%*.4d|<--\n", 3, d));
assert(printf("-->|%*.4d|<--\n", 4, d) == ft_printf("-->|%*.4d|<--\n", 4, d));
assert(printf("-->|%*d|<--\n", -4, d) == ft_printf("-->|%*d|<--\n", -4, d));
assert(printf("-->|%*d|<--\n", -3, d) == ft_printf("-->|%*d|<--\n", -3, d));
assert(printf("-->|%*d|<--\n", -2, d) == ft_printf("-->|%*d|<--\n", -2, d));
assert(printf("-->|%*d|<--\n", -1, d) == ft_printf("-->|%*d|<--\n", -1, d));
assert(printf("-->|%*d|<--\n", 0, d) == ft_printf("-->|%*d|<--\n", 0, d));
assert(printf("-->|%*d|<--\n", 1, d) == ft_printf("-->|%*d|<--\n", 1, d));
assert(printf("-->|%*d|<--\n", 2, d) == ft_printf("-->|%*d|<--\n", 2, d));
assert(printf("-->|%*d|<--\n", 3, d) == ft_printf("-->|%*d|<--\n", 3, d));
assert(printf("-->|%*d|<--\n", 4, d) == ft_printf("-->|%*d|<--\n", 4, d));
assert(printf("-->|%0.d|<--\n", d) == ft_printf("-->|%0.d|<--\n", d));
assert(printf("-->|%0.*d|<--\n", -4, d) == ft_printf("-->|%0.*d|<--\n", -4, d));
assert(printf("-->|%0.*d|<--\n", -3, d) == ft_printf("-->|%0.*d|<--\n", -3, d));
assert(printf("-->|%0.*d|<--\n", -2, d) == ft_printf("-->|%0.*d|<--\n", -2, d));
assert(printf("-->|%0.*d|<--\n", -1, d) == ft_printf("-->|%0.*d|<--\n", -1, d));
assert(printf("-->|%0.*d|<--\n", 0, d) == ft_printf("-->|%0.*d|<--\n", 0, d));
assert(printf("-->|%0.*d|<--\n", 1, d) == ft_printf("-->|%0.*d|<--\n", 1, d));
assert(printf("-->|%0.*d|<--\n", 2, d) == ft_printf("-->|%0.*d|<--\n", 2, d));
assert(printf("-->|%0.*d|<--\n", 3, d) == ft_printf("-->|%0.*d|<--\n", 3, d));
assert(printf("-->|%0.*d|<--\n", 4, d) == ft_printf("-->|%0.*d|<--\n", 4, d));
assert(printf("-->|%0.0d|<--\n", d) == ft_printf("-->|%0.0d|<--\n", d));
assert(printf("-->|%0.1d|<--\n", d) == ft_printf("-->|%0.1d|<--\n", d));
assert(printf("-->|%0.2d|<--\n", d) == ft_printf("-->|%0.2d|<--\n", d));
assert(printf("-->|%0.3d|<--\n", d) == ft_printf("-->|%0.3d|<--\n", d));
assert(printf("-->|%0.4d|<--\n", d) == ft_printf("-->|%0.4d|<--\n", d));
assert(printf("-->|%0d|<--\n", d) == ft_printf("-->|%0d|<--\n", d));
assert(printf("-->|%1.d|<--\n", d) == ft_printf("-->|%1.d|<--\n", d));
assert(printf("-->|%1.*d|<--\n", -4, d) == ft_printf("-->|%1.*d|<--\n", -4, d));
assert(printf("-->|%1.*d|<--\n", -3, d) == ft_printf("-->|%1.*d|<--\n", -3, d));
assert(printf("-->|%1.*d|<--\n", -2, d) == ft_printf("-->|%1.*d|<--\n", -2, d));
assert(printf("-->|%1.*d|<--\n", -1, d) == ft_printf("-->|%1.*d|<--\n", -1, d));
assert(printf("-->|%1.*d|<--\n", 0, d) == ft_printf("-->|%1.*d|<--\n", 0, d));
assert(printf("-->|%1.*d|<--\n", 1, d) == ft_printf("-->|%1.*d|<--\n", 1, d));
assert(printf("-->|%1.*d|<--\n", 2, d) == ft_printf("-->|%1.*d|<--\n", 2, d));
assert(printf("-->|%1.*d|<--\n", 3, d) == ft_printf("-->|%1.*d|<--\n", 3, d));
assert(printf("-->|%1.*d|<--\n", 4, d) == ft_printf("-->|%1.*d|<--\n", 4, d));
assert(printf("-->|%1.0d|<--\n", d) == ft_printf("-->|%1.0d|<--\n", d));
assert(printf("-->|%1.1d|<--\n", d) == ft_printf("-->|%1.1d|<--\n", d));
assert(printf("-->|%1.2d|<--\n", d) == ft_printf("-->|%1.2d|<--\n", d));
assert(printf("-->|%1.3d|<--\n", d) == ft_printf("-->|%1.3d|<--\n", d));
assert(printf("-->|%1.4d|<--\n", d) == ft_printf("-->|%1.4d|<--\n", d));
assert(printf("-->|%1d|<--\n", d) == ft_printf("-->|%1d|<--\n", d));
assert(printf("-->|%2.d|<--\n", d) == ft_printf("-->|%2.d|<--\n", d));
assert(printf("-->|%2.*d|<--\n", -4, d) == ft_printf("-->|%2.*d|<--\n", -4, d));
assert(printf("-->|%2.*d|<--\n", -3, d) == ft_printf("-->|%2.*d|<--\n", -3, d));
assert(printf("-->|%2.*d|<--\n", -2, d) == ft_printf("-->|%2.*d|<--\n", -2, d));
assert(printf("-->|%2.*d|<--\n", -1, d) == ft_printf("-->|%2.*d|<--\n", -1, d));
assert(printf("-->|%2.*d|<--\n", 0, d) == ft_printf("-->|%2.*d|<--\n", 0, d));
assert(printf("-->|%2.*d|<--\n", 1, d) == ft_printf("-->|%2.*d|<--\n", 1, d));
assert(printf("-->|%2.*d|<--\n", 2, d) == ft_printf("-->|%2.*d|<--\n", 2, d));
assert(printf("-->|%2.*d|<--\n", 3, d) == ft_printf("-->|%2.*d|<--\n", 3, d));
assert(printf("-->|%2.*d|<--\n", 4, d) == ft_printf("-->|%2.*d|<--\n", 4, d));
assert(printf("-->|%2.0d|<--\n", d) == ft_printf("-->|%2.0d|<--\n", d));
assert(printf("-->|%2.1d|<--\n", d) == ft_printf("-->|%2.1d|<--\n", d));
assert(printf("-->|%2.2d|<--\n", d) == ft_printf("-->|%2.2d|<--\n", d));
assert(printf("-->|%2.3d|<--\n", d) == ft_printf("-->|%2.3d|<--\n", d));
assert(printf("-->|%2.4d|<--\n", d) == ft_printf("-->|%2.4d|<--\n", d));
assert(printf("-->|%2d|<--\n", d) == ft_printf("-->|%2d|<--\n", d));
assert(printf("-->|%3.d|<--\n", d) == ft_printf("-->|%3.d|<--\n", d));
assert(printf("-->|%3.*d|<--\n", -4, d) == ft_printf("-->|%3.*d|<--\n", -4, d));
assert(printf("-->|%3.*d|<--\n", -3, d) == ft_printf("-->|%3.*d|<--\n", -3, d));
assert(printf("-->|%3.*d|<--\n", -2, d) == ft_printf("-->|%3.*d|<--\n", -2, d));
assert(printf("-->|%3.*d|<--\n", -1, d) == ft_printf("-->|%3.*d|<--\n", -1, d));
assert(printf("-->|%3.*d|<--\n", 0, d) == ft_printf("-->|%3.*d|<--\n", 0, d));
assert(printf("-->|%3.*d|<--\n", 1, d) == ft_printf("-->|%3.*d|<--\n", 1, d));
assert(printf("-->|%3.*d|<--\n", 2, d) == ft_printf("-->|%3.*d|<--\n", 2, d));
assert(printf("-->|%3.*d|<--\n", 3, d) == ft_printf("-->|%3.*d|<--\n", 3, d));
assert(printf("-->|%3.*d|<--\n", 4, d) == ft_printf("-->|%3.*d|<--\n", 4, d));
assert(printf("-->|%3.0d|<--\n", d) == ft_printf("-->|%3.0d|<--\n", d));
assert(printf("-->|%3.1d|<--\n", d) == ft_printf("-->|%3.1d|<--\n", d));
assert(printf("-->|%3.2d|<--\n", d) == ft_printf("-->|%3.2d|<--\n", d));
assert(printf("-->|%3.3d|<--\n", d) == ft_printf("-->|%3.3d|<--\n", d));
assert(printf("-->|%3.4d|<--\n", d) == ft_printf("-->|%3.4d|<--\n", d));
assert(printf("-->|%3d|<--\n", d) == ft_printf("-->|%3d|<--\n", d));
assert(printf("-->|%4.d|<--\n", d) == ft_printf("-->|%4.d|<--\n", d));
assert(printf("-->|%4.*d|<--\n", -4, d) == ft_printf("-->|%4.*d|<--\n", -4, d));
assert(printf("-->|%4.*d|<--\n", -3, d) == ft_printf("-->|%4.*d|<--\n", -3, d));
assert(printf("-->|%4.*d|<--\n", -2, d) == ft_printf("-->|%4.*d|<--\n", -2, d));
assert(printf("-->|%4.*d|<--\n", -1, d) == ft_printf("-->|%4.*d|<--\n", -1, d));
assert(printf("-->|%4.*d|<--\n", 0, d) == ft_printf("-->|%4.*d|<--\n", 0, d));
assert(printf("-->|%4.*d|<--\n", 1, d) == ft_printf("-->|%4.*d|<--\n", 1, d));
assert(printf("-->|%4.*d|<--\n", 2, d) == ft_printf("-->|%4.*d|<--\n", 2, d));
assert(printf("-->|%4.*d|<--\n", 3, d) == ft_printf("-->|%4.*d|<--\n", 3, d));
assert(printf("-->|%4.*d|<--\n", 4, d) == ft_printf("-->|%4.*d|<--\n", 4, d));
assert(printf("-->|%4.0d|<--\n", d) == ft_printf("-->|%4.0d|<--\n", d));
assert(printf("-->|%4.1d|<--\n", d) == ft_printf("-->|%4.1d|<--\n", d));
assert(printf("-->|%4.2d|<--\n", d) == ft_printf("-->|%4.2d|<--\n", d));
assert(printf("-->|%4.3d|<--\n", d) == ft_printf("-->|%4.3d|<--\n", d));
assert(printf("-->|%4.4d|<--\n", d) == ft_printf("-->|%4.4d|<--\n", d));
assert(printf("-->|%4d|<--\n", d) == ft_printf("-->|%4d|<--\n", d));
assert(printf("-->|%0.d|<--\n", d) == ft_printf("-->|%0.d|<--\n", d));
assert(printf("-->|%0.*d|<--\n", -4, d) == ft_printf("-->|%0.*d|<--\n", -4, d));
assert(printf("-->|%0.*d|<--\n", -3, d) == ft_printf("-->|%0.*d|<--\n", -3, d));
assert(printf("-->|%0.*d|<--\n", -2, d) == ft_printf("-->|%0.*d|<--\n", -2, d));
assert(printf("-->|%0.*d|<--\n", -1, d) == ft_printf("-->|%0.*d|<--\n", -1, d));
assert(printf("-->|%0.*d|<--\n", 0, d) == ft_printf("-->|%0.*d|<--\n", 0, d));
assert(printf("-->|%0.*d|<--\n", 1, d) == ft_printf("-->|%0.*d|<--\n", 1, d));
assert(printf("-->|%0.*d|<--\n", 2, d) == ft_printf("-->|%0.*d|<--\n", 2, d));
assert(printf("-->|%0.*d|<--\n", 3, d) == ft_printf("-->|%0.*d|<--\n", 3, d));
assert(printf("-->|%0.*d|<--\n", 4, d) == ft_printf("-->|%0.*d|<--\n", 4, d));
assert(printf("-->|%0.0d|<--\n", d) == ft_printf("-->|%0.0d|<--\n", d));
assert(printf("-->|%0.1d|<--\n", d) == ft_printf("-->|%0.1d|<--\n", d));
assert(printf("-->|%0.2d|<--\n", d) == ft_printf("-->|%0.2d|<--\n", d));
assert(printf("-->|%0.3d|<--\n", d) == ft_printf("-->|%0.3d|<--\n", d));
assert(printf("-->|%0.4d|<--\n", d) == ft_printf("-->|%0.4d|<--\n", d));
assert(printf("-->|%0d|<--\n", d) == ft_printf("-->|%0d|<--\n", d));
assert(printf("-->|%0*.d|<--\n", -4, d) == ft_printf("-->|%0*.d|<--\n", -4, d));
assert(printf("-->|%0*.d|<--\n", -3, d) == ft_printf("-->|%0*.d|<--\n", -3, d));
assert(printf("-->|%0*.d|<--\n", -2, d) == ft_printf("-->|%0*.d|<--\n", -2, d));
assert(printf("-->|%0*.d|<--\n", -1, d) == ft_printf("-->|%0*.d|<--\n", -1, d));
assert(printf("-->|%0*.d|<--\n", 0, d) == ft_printf("-->|%0*.d|<--\n", 0, d));
assert(printf("-->|%0*.d|<--\n", 1, d) == ft_printf("-->|%0*.d|<--\n", 1, d));
assert(printf("-->|%0*.d|<--\n", 2, d) == ft_printf("-->|%0*.d|<--\n", 2, d));
assert(printf("-->|%0*.d|<--\n", 3, d) == ft_printf("-->|%0*.d|<--\n", 3, d));
assert(printf("-->|%0*.d|<--\n", 4, d) == ft_printf("-->|%0*.d|<--\n", 4, d));
assert(printf("-->|%0*.*d|<--\n", -4, -4, d) == ft_printf("-->|%0*.*d|<--\n", -4, -4, d));
assert(printf("-->|%0*.*d|<--\n", -4, -3, d) == ft_printf("-->|%0*.*d|<--\n", -4, -3, d));
assert(printf("-->|%0*.*d|<--\n", -4, -2, d) == ft_printf("-->|%0*.*d|<--\n", -4, -2, d));
assert(printf("-->|%0*.*d|<--\n", -4, -1, d) == ft_printf("-->|%0*.*d|<--\n", -4, -1, d));
assert(printf("-->|%0*.*d|<--\n", -4, 0, d) == ft_printf("-->|%0*.*d|<--\n", -4, 0, d));
assert(printf("-->|%0*.*d|<--\n", -4, 1, d) == ft_printf("-->|%0*.*d|<--\n", -4, 1, d));
assert(printf("-->|%0*.*d|<--\n", -4, 2, d) == ft_printf("-->|%0*.*d|<--\n", -4, 2, d));
assert(printf("-->|%0*.*d|<--\n", -4, 3, d) == ft_printf("-->|%0*.*d|<--\n", -4, 3, d));
assert(printf("-->|%0*.*d|<--\n", -4, 4, d) == ft_printf("-->|%0*.*d|<--\n", -4, 4, d));
assert(printf("-->|%0*.*d|<--\n", -3, -4, d) == ft_printf("-->|%0*.*d|<--\n", -3, -4, d));
assert(printf("-->|%0*.*d|<--\n", -3, -3, d) == ft_printf("-->|%0*.*d|<--\n", -3, -3, d));
assert(printf("-->|%0*.*d|<--\n", -3, -2, d) == ft_printf("-->|%0*.*d|<--\n", -3, -2, d));
assert(printf("-->|%0*.*d|<--\n", -3, -1, d) == ft_printf("-->|%0*.*d|<--\n", -3, -1, d));
assert(printf("-->|%0*.*d|<--\n", -3, 0, d) == ft_printf("-->|%0*.*d|<--\n", -3, 0, d));
assert(printf("-->|%0*.*d|<--\n", -3, 1, d) == ft_printf("-->|%0*.*d|<--\n", -3, 1, d));
assert(printf("-->|%0*.*d|<--\n", -3, 2, d) == ft_printf("-->|%0*.*d|<--\n", -3, 2, d));
assert(printf("-->|%0*.*d|<--\n", -3, 3, d) == ft_printf("-->|%0*.*d|<--\n", -3, 3, d));
assert(printf("-->|%0*.*d|<--\n", -3, 4, d) == ft_printf("-->|%0*.*d|<--\n", -3, 4, d));
assert(printf("-->|%0*.*d|<--\n", -2, -4, d) == ft_printf("-->|%0*.*d|<--\n", -2, -4, d));
assert(printf("-->|%0*.*d|<--\n", -2, -3, d) == ft_printf("-->|%0*.*d|<--\n", -2, -3, d));
assert(printf("-->|%0*.*d|<--\n", -2, -2, d) == ft_printf("-->|%0*.*d|<--\n", -2, -2, d));
assert(printf("-->|%0*.*d|<--\n", -2, -1, d) == ft_printf("-->|%0*.*d|<--\n", -2, -1, d));
assert(printf("-->|%0*.*d|<--\n", -2, 0, d) == ft_printf("-->|%0*.*d|<--\n", -2, 0, d));
assert(printf("-->|%0*.*d|<--\n", -2, 1, d) == ft_printf("-->|%0*.*d|<--\n", -2, 1, d));
assert(printf("-->|%0*.*d|<--\n", -2, 2, d) == ft_printf("-->|%0*.*d|<--\n", -2, 2, d));
assert(printf("-->|%0*.*d|<--\n", -2, 3, d) == ft_printf("-->|%0*.*d|<--\n", -2, 3, d));
assert(printf("-->|%0*.*d|<--\n", -2, 4, d) == ft_printf("-->|%0*.*d|<--\n", -2, 4, d));
assert(printf("-->|%0*.*d|<--\n", -1, -4, d) == ft_printf("-->|%0*.*d|<--\n", -1, -4, d));
assert(printf("-->|%0*.*d|<--\n", -1, -3, d) == ft_printf("-->|%0*.*d|<--\n", -1, -3, d));
assert(printf("-->|%0*.*d|<--\n", -1, -2, d) == ft_printf("-->|%0*.*d|<--\n", -1, -2, d));
assert(printf("-->|%0*.*d|<--\n", -1, -1, d) == ft_printf("-->|%0*.*d|<--\n", -1, -1, d));
assert(printf("-->|%0*.*d|<--\n", -1, 0, d) == ft_printf("-->|%0*.*d|<--\n", -1, 0, d));
assert(printf("-->|%0*.*d|<--\n", -1, 1, d) == ft_printf("-->|%0*.*d|<--\n", -1, 1, d));
assert(printf("-->|%0*.*d|<--\n", -1, 2, d) == ft_printf("-->|%0*.*d|<--\n", -1, 2, d));
assert(printf("-->|%0*.*d|<--\n", -1, 3, d) == ft_printf("-->|%0*.*d|<--\n", -1, 3, d));
assert(printf("-->|%0*.*d|<--\n", -1, 4, d) == ft_printf("-->|%0*.*d|<--\n", -1, 4, d));
assert(printf("-->|%0*.*d|<--\n", 0, -4, d) == ft_printf("-->|%0*.*d|<--\n", 0, -4, d));
assert(printf("-->|%0*.*d|<--\n", 0, -3, d) == ft_printf("-->|%0*.*d|<--\n", 0, -3, d));
assert(printf("-->|%0*.*d|<--\n", 0, -2, d) == ft_printf("-->|%0*.*d|<--\n", 0, -2, d));
assert(printf("-->|%0*.*d|<--\n", 0, -1, d) == ft_printf("-->|%0*.*d|<--\n", 0, -1, d));
assert(printf("-->|%0*.*d|<--\n", 0, 0, d) == ft_printf("-->|%0*.*d|<--\n", 0, 0, d));
assert(printf("-->|%0*.*d|<--\n", 0, 1, d) == ft_printf("-->|%0*.*d|<--\n", 0, 1, d));
assert(printf("-->|%0*.*d|<--\n", 0, 2, d) == ft_printf("-->|%0*.*d|<--\n", 0, 2, d));
assert(printf("-->|%0*.*d|<--\n", 0, 3, d) == ft_printf("-->|%0*.*d|<--\n", 0, 3, d));
assert(printf("-->|%0*.*d|<--\n", 0, 4, d) == ft_printf("-->|%0*.*d|<--\n", 0, 4, d));
assert(printf("-->|%0*.*d|<--\n", 1, -4, d) == ft_printf("-->|%0*.*d|<--\n", 1, -4, d));
assert(printf("-->|%0*.*d|<--\n", 1, -3, d) == ft_printf("-->|%0*.*d|<--\n", 1, -3, d));
assert(printf("-->|%0*.*d|<--\n", 1, -2, d) == ft_printf("-->|%0*.*d|<--\n", 1, -2, d));
assert(printf("-->|%0*.*d|<--\n", 1, -1, d) == ft_printf("-->|%0*.*d|<--\n", 1, -1, d));
assert(printf("-->|%0*.*d|<--\n", 1, 0, d) == ft_printf("-->|%0*.*d|<--\n", 1, 0, d));
assert(printf("-->|%0*.*d|<--\n", 1, 1, d) == ft_printf("-->|%0*.*d|<--\n", 1, 1, d));
assert(printf("-->|%0*.*d|<--\n", 1, 2, d) == ft_printf("-->|%0*.*d|<--\n", 1, 2, d));
assert(printf("-->|%0*.*d|<--\n", 1, 3, d) == ft_printf("-->|%0*.*d|<--\n", 1, 3, d));
assert(printf("-->|%0*.*d|<--\n", 1, 4, d) == ft_printf("-->|%0*.*d|<--\n", 1, 4, d));
assert(printf("-->|%0*.*d|<--\n", 2, -4, d) == ft_printf("-->|%0*.*d|<--\n", 2, -4, d));
assert(printf("-->|%0*.*d|<--\n", 2, -3, d) == ft_printf("-->|%0*.*d|<--\n", 2, -3, d));
assert(printf("-->|%0*.*d|<--\n", 2, -2, d) == ft_printf("-->|%0*.*d|<--\n", 2, -2, d));
assert(printf("-->|%0*.*d|<--\n", 2, -1, d) == ft_printf("-->|%0*.*d|<--\n", 2, -1, d));
assert(printf("-->|%0*.*d|<--\n", 2, 0, d) == ft_printf("-->|%0*.*d|<--\n", 2, 0, d));
assert(printf("-->|%0*.*d|<--\n", 2, 1, d) == ft_printf("-->|%0*.*d|<--\n", 2, 1, d));
assert(printf("-->|%0*.*d|<--\n", 2, 2, d) == ft_printf("-->|%0*.*d|<--\n", 2, 2, d));
assert(printf("-->|%0*.*d|<--\n", 2, 3, d) == ft_printf("-->|%0*.*d|<--\n", 2, 3, d));
assert(printf("-->|%0*.*d|<--\n", 2, 4, d) == ft_printf("-->|%0*.*d|<--\n", 2, 4, d));
assert(printf("-->|%0*.*d|<--\n", 3, -4, d) == ft_printf("-->|%0*.*d|<--\n", 3, -4, d));
assert(printf("-->|%0*.*d|<--\n", 3, -3, d) == ft_printf("-->|%0*.*d|<--\n", 3, -3, d));
assert(printf("-->|%0*.*d|<--\n", 3, -2, d) == ft_printf("-->|%0*.*d|<--\n", 3, -2, d));
assert(printf("-->|%0*.*d|<--\n", 3, -1, d) == ft_printf("-->|%0*.*d|<--\n", 3, -1, d));
assert(printf("-->|%0*.*d|<--\n", 3, 0, d) == ft_printf("-->|%0*.*d|<--\n", 3, 0, d));
assert(printf("-->|%0*.*d|<--\n", 3, 1, d) == ft_printf("-->|%0*.*d|<--\n", 3, 1, d));
assert(printf("-->|%0*.*d|<--\n", 3, 2, d) == ft_printf("-->|%0*.*d|<--\n", 3, 2, d));
assert(printf("-->|%0*.*d|<--\n", 3, 3, d) == ft_printf("-->|%0*.*d|<--\n", 3, 3, d));
assert(printf("-->|%0*.*d|<--\n", 3, 4, d) == ft_printf("-->|%0*.*d|<--\n", 3, 4, d));
assert(printf("-->|%0*.*d|<--\n", 4, -4, d) == ft_printf("-->|%0*.*d|<--\n", 4, -4, d));
assert(printf("-->|%0*.*d|<--\n", 4, -3, d) == ft_printf("-->|%0*.*d|<--\n", 4, -3, d));
assert(printf("-->|%0*.*d|<--\n", 4, -2, d) == ft_printf("-->|%0*.*d|<--\n", 4, -2, d));
assert(printf("-->|%0*.*d|<--\n", 4, -1, d) == ft_printf("-->|%0*.*d|<--\n", 4, -1, d));
assert(printf("-->|%0*.*d|<--\n", 4, 0, d) == ft_printf("-->|%0*.*d|<--\n", 4, 0, d));
assert(printf("-->|%0*.*d|<--\n", 4, 1, d) == ft_printf("-->|%0*.*d|<--\n", 4, 1, d));
assert(printf("-->|%0*.*d|<--\n", 4, 2, d) == ft_printf("-->|%0*.*d|<--\n", 4, 2, d));
assert(printf("-->|%0*.*d|<--\n", 4, 3, d) == ft_printf("-->|%0*.*d|<--\n", 4, 3, d));
assert(printf("-->|%0*.*d|<--\n", 4, 4, d) == ft_printf("-->|%0*.*d|<--\n", 4, 4, d));
assert(printf("-->|%0*.0d|<--\n", -4, d) == ft_printf("-->|%0*.0d|<--\n", -4, d));
assert(printf("-->|%0*.0d|<--\n", -3, d) == ft_printf("-->|%0*.0d|<--\n", -3, d));
assert(printf("-->|%0*.0d|<--\n", -2, d) == ft_printf("-->|%0*.0d|<--\n", -2, d));
assert(printf("-->|%0*.0d|<--\n", -1, d) == ft_printf("-->|%0*.0d|<--\n", -1, d));
assert(printf("-->|%0*.0d|<--\n", 0, d) == ft_printf("-->|%0*.0d|<--\n", 0, d));
assert(printf("-->|%0*.0d|<--\n", 1, d) == ft_printf("-->|%0*.0d|<--\n", 1, d));
assert(printf("-->|%0*.0d|<--\n", 2, d) == ft_printf("-->|%0*.0d|<--\n", 2, d));
assert(printf("-->|%0*.0d|<--\n", 3, d) == ft_printf("-->|%0*.0d|<--\n", 3, d));
assert(printf("-->|%0*.0d|<--\n", 4, d) == ft_printf("-->|%0*.0d|<--\n", 4, d));
assert(printf("-->|%0*.1d|<--\n", -4, d) == ft_printf("-->|%0*.1d|<--\n", -4, d));
assert(printf("-->|%0*.1d|<--\n", -3, d) == ft_printf("-->|%0*.1d|<--\n", -3, d));
assert(printf("-->|%0*.1d|<--\n", -2, d) == ft_printf("-->|%0*.1d|<--\n", -2, d));
assert(printf("-->|%0*.1d|<--\n", -1, d) == ft_printf("-->|%0*.1d|<--\n", -1, d));
assert(printf("-->|%0*.1d|<--\n", 0, d) == ft_printf("-->|%0*.1d|<--\n", 0, d));
assert(printf("-->|%0*.1d|<--\n", 1, d) == ft_printf("-->|%0*.1d|<--\n", 1, d));
assert(printf("-->|%0*.1d|<--\n", 2, d) == ft_printf("-->|%0*.1d|<--\n", 2, d));
assert(printf("-->|%0*.1d|<--\n", 3, d) == ft_printf("-->|%0*.1d|<--\n", 3, d));
assert(printf("-->|%0*.1d|<--\n", 4, d) == ft_printf("-->|%0*.1d|<--\n", 4, d));
assert(printf("-->|%0*.2d|<--\n", -4, d) == ft_printf("-->|%0*.2d|<--\n", -4, d));
assert(printf("-->|%0*.2d|<--\n", -3, d) == ft_printf("-->|%0*.2d|<--\n", -3, d));
assert(printf("-->|%0*.2d|<--\n", -2, d) == ft_printf("-->|%0*.2d|<--\n", -2, d));
assert(printf("-->|%0*.2d|<--\n", -1, d) == ft_printf("-->|%0*.2d|<--\n", -1, d));
assert(printf("-->|%0*.2d|<--\n", 0, d) == ft_printf("-->|%0*.2d|<--\n", 0, d));
assert(printf("-->|%0*.2d|<--\n", 1, d) == ft_printf("-->|%0*.2d|<--\n", 1, d));
assert(printf("-->|%0*.2d|<--\n", 2, d) == ft_printf("-->|%0*.2d|<--\n", 2, d));
assert(printf("-->|%0*.2d|<--\n", 3, d) == ft_printf("-->|%0*.2d|<--\n", 3, d));
assert(printf("-->|%0*.2d|<--\n", 4, d) == ft_printf("-->|%0*.2d|<--\n", 4, d));
assert(printf("-->|%0*.3d|<--\n", -4, d) == ft_printf("-->|%0*.3d|<--\n", -4, d));
assert(printf("-->|%0*.3d|<--\n", -3, d) == ft_printf("-->|%0*.3d|<--\n", -3, d));
assert(printf("-->|%0*.3d|<--\n", -2, d) == ft_printf("-->|%0*.3d|<--\n", -2, d));
assert(printf("-->|%0*.3d|<--\n", -1, d) == ft_printf("-->|%0*.3d|<--\n", -1, d));
assert(printf("-->|%0*.3d|<--\n", 0, d) == ft_printf("-->|%0*.3d|<--\n", 0, d));
assert(printf("-->|%0*.3d|<--\n", 1, d) == ft_printf("-->|%0*.3d|<--\n", 1, d));
assert(printf("-->|%0*.3d|<--\n", 2, d) == ft_printf("-->|%0*.3d|<--\n", 2, d));
assert(printf("-->|%0*.3d|<--\n", 3, d) == ft_printf("-->|%0*.3d|<--\n", 3, d));
assert(printf("-->|%0*.3d|<--\n", 4, d) == ft_printf("-->|%0*.3d|<--\n", 4, d));
assert(printf("-->|%0*.4d|<--\n", -4, d) == ft_printf("-->|%0*.4d|<--\n", -4, d));
assert(printf("-->|%0*.4d|<--\n", -3, d) == ft_printf("-->|%0*.4d|<--\n", -3, d));
assert(printf("-->|%0*.4d|<--\n", -2, d) == ft_printf("-->|%0*.4d|<--\n", -2, d));
assert(printf("-->|%0*.4d|<--\n", -1, d) == ft_printf("-->|%0*.4d|<--\n", -1, d));
assert(printf("-->|%0*.4d|<--\n", 0, d) == ft_printf("-->|%0*.4d|<--\n", 0, d));
assert(printf("-->|%0*.4d|<--\n", 1, d) == ft_printf("-->|%0*.4d|<--\n", 1, d));
assert(printf("-->|%0*.4d|<--\n", 2, d) == ft_printf("-->|%0*.4d|<--\n", 2, d));
assert(printf("-->|%0*.4d|<--\n", 3, d) == ft_printf("-->|%0*.4d|<--\n", 3, d));
assert(printf("-->|%0*.4d|<--\n", 4, d) == ft_printf("-->|%0*.4d|<--\n", 4, d));
assert(printf("-->|%0*d|<--\n", -4, d) == ft_printf("-->|%0*d|<--\n", -4, d));
assert(printf("-->|%0*d|<--\n", -3, d) == ft_printf("-->|%0*d|<--\n", -3, d));
assert(printf("-->|%0*d|<--\n", -2, d) == ft_printf("-->|%0*d|<--\n", -2, d));
assert(printf("-->|%0*d|<--\n", -1, d) == ft_printf("-->|%0*d|<--\n", -1, d));
assert(printf("-->|%0*d|<--\n", 0, d) == ft_printf("-->|%0*d|<--\n", 0, d));
assert(printf("-->|%0*d|<--\n", 1, d) == ft_printf("-->|%0*d|<--\n", 1, d));
assert(printf("-->|%0*d|<--\n", 2, d) == ft_printf("-->|%0*d|<--\n", 2, d));
assert(printf("-->|%0*d|<--\n", 3, d) == ft_printf("-->|%0*d|<--\n", 3, d));
assert(printf("-->|%0*d|<--\n", 4, d) == ft_printf("-->|%0*d|<--\n", 4, d));
assert(printf("-->|%00.d|<--\n", d) == ft_printf("-->|%00.d|<--\n", d));
assert(printf("-->|%00.*d|<--\n", -4, d) == ft_printf("-->|%00.*d|<--\n", -4, d));
assert(printf("-->|%00.*d|<--\n", -3, d) == ft_printf("-->|%00.*d|<--\n", -3, d));
assert(printf("-->|%00.*d|<--\n", -2, d) == ft_printf("-->|%00.*d|<--\n", -2, d));
assert(printf("-->|%00.*d|<--\n", -1, d) == ft_printf("-->|%00.*d|<--\n", -1, d));
assert(printf("-->|%00.*d|<--\n", 0, d) == ft_printf("-->|%00.*d|<--\n", 0, d));
assert(printf("-->|%00.*d|<--\n", 1, d) == ft_printf("-->|%00.*d|<--\n", 1, d));
assert(printf("-->|%00.*d|<--\n", 2, d) == ft_printf("-->|%00.*d|<--\n", 2, d));
assert(printf("-->|%00.*d|<--\n", 3, d) == ft_printf("-->|%00.*d|<--\n", 3, d));
assert(printf("-->|%00.*d|<--\n", 4, d) == ft_printf("-->|%00.*d|<--\n", 4, d));
assert(printf("-->|%00.0d|<--\n", d) == ft_printf("-->|%00.0d|<--\n", d));
assert(printf("-->|%00.1d|<--\n", d) == ft_printf("-->|%00.1d|<--\n", d));
assert(printf("-->|%00.2d|<--\n", d) == ft_printf("-->|%00.2d|<--\n", d));
assert(printf("-->|%00.3d|<--\n", d) == ft_printf("-->|%00.3d|<--\n", d));
assert(printf("-->|%00.4d|<--\n", d) == ft_printf("-->|%00.4d|<--\n", d));
assert(printf("-->|%00d|<--\n", d) == ft_printf("-->|%00d|<--\n", d));
assert(printf("-->|%01.d|<--\n", d) == ft_printf("-->|%01.d|<--\n", d));
assert(printf("-->|%01.*d|<--\n", -4, d) == ft_printf("-->|%01.*d|<--\n", -4, d));
assert(printf("-->|%01.*d|<--\n", -3, d) == ft_printf("-->|%01.*d|<--\n", -3, d));
assert(printf("-->|%01.*d|<--\n", -2, d) == ft_printf("-->|%01.*d|<--\n", -2, d));
assert(printf("-->|%01.*d|<--\n", -1, d) == ft_printf("-->|%01.*d|<--\n", -1, d));
assert(printf("-->|%01.*d|<--\n", 0, d) == ft_printf("-->|%01.*d|<--\n", 0, d));
assert(printf("-->|%01.*d|<--\n", 1, d) == ft_printf("-->|%01.*d|<--\n", 1, d));
assert(printf("-->|%01.*d|<--\n", 2, d) == ft_printf("-->|%01.*d|<--\n", 2, d));
assert(printf("-->|%01.*d|<--\n", 3, d) == ft_printf("-->|%01.*d|<--\n", 3, d));
assert(printf("-->|%01.*d|<--\n", 4, d) == ft_printf("-->|%01.*d|<--\n", 4, d));
assert(printf("-->|%01.0d|<--\n", d) == ft_printf("-->|%01.0d|<--\n", d));
assert(printf("-->|%01.1d|<--\n", d) == ft_printf("-->|%01.1d|<--\n", d));
assert(printf("-->|%01.2d|<--\n", d) == ft_printf("-->|%01.2d|<--\n", d));
assert(printf("-->|%01.3d|<--\n", d) == ft_printf("-->|%01.3d|<--\n", d));
assert(printf("-->|%01.4d|<--\n", d) == ft_printf("-->|%01.4d|<--\n", d));
assert(printf("-->|%01d|<--\n", d) == ft_printf("-->|%01d|<--\n", d));
assert(printf("-->|%02.d|<--\n", d) == ft_printf("-->|%02.d|<--\n", d));
assert(printf("-->|%02.*d|<--\n", -4, d) == ft_printf("-->|%02.*d|<--\n", -4, d));
assert(printf("-->|%02.*d|<--\n", -3, d) == ft_printf("-->|%02.*d|<--\n", -3, d));
assert(printf("-->|%02.*d|<--\n", -2, d) == ft_printf("-->|%02.*d|<--\n", -2, d));
assert(printf("-->|%02.*d|<--\n", -1, d) == ft_printf("-->|%02.*d|<--\n", -1, d));
assert(printf("-->|%02.*d|<--\n", 0, d) == ft_printf("-->|%02.*d|<--\n", 0, d));
assert(printf("-->|%02.*d|<--\n", 1, d) == ft_printf("-->|%02.*d|<--\n", 1, d));
assert(printf("-->|%02.*d|<--\n", 2, d) == ft_printf("-->|%02.*d|<--\n", 2, d));
assert(printf("-->|%02.*d|<--\n", 3, d) == ft_printf("-->|%02.*d|<--\n", 3, d));
assert(printf("-->|%02.*d|<--\n", 4, d) == ft_printf("-->|%02.*d|<--\n", 4, d));
assert(printf("-->|%02.0d|<--\n", d) == ft_printf("-->|%02.0d|<--\n", d));
assert(printf("-->|%02.1d|<--\n", d) == ft_printf("-->|%02.1d|<--\n", d));
assert(printf("-->|%02.2d|<--\n", d) == ft_printf("-->|%02.2d|<--\n", d));
assert(printf("-->|%02.3d|<--\n", d) == ft_printf("-->|%02.3d|<--\n", d));
assert(printf("-->|%02.4d|<--\n", d) == ft_printf("-->|%02.4d|<--\n", d));
assert(printf("-->|%02d|<--\n", d) == ft_printf("-->|%02d|<--\n", d));
assert(printf("-->|%03.d|<--\n", d) == ft_printf("-->|%03.d|<--\n", d));
assert(printf("-->|%03.*d|<--\n", -4, d) == ft_printf("-->|%03.*d|<--\n", -4, d));
assert(printf("-->|%03.*d|<--\n", -3, d) == ft_printf("-->|%03.*d|<--\n", -3, d));
assert(printf("-->|%03.*d|<--\n", -2, d) == ft_printf("-->|%03.*d|<--\n", -2, d));
assert(printf("-->|%03.*d|<--\n", -1, d) == ft_printf("-->|%03.*d|<--\n", -1, d));
assert(printf("-->|%03.*d|<--\n", 0, d) == ft_printf("-->|%03.*d|<--\n", 0, d));
assert(printf("-->|%03.*d|<--\n", 1, d) == ft_printf("-->|%03.*d|<--\n", 1, d));
assert(printf("-->|%03.*d|<--\n", 2, d) == ft_printf("-->|%03.*d|<--\n", 2, d));
assert(printf("-->|%03.*d|<--\n", 3, d) == ft_printf("-->|%03.*d|<--\n", 3, d));
assert(printf("-->|%03.*d|<--\n", 4, d) == ft_printf("-->|%03.*d|<--\n", 4, d));
assert(printf("-->|%03.0d|<--\n", d) == ft_printf("-->|%03.0d|<--\n", d));
assert(printf("-->|%03.1d|<--\n", d) == ft_printf("-->|%03.1d|<--\n", d));
assert(printf("-->|%03.2d|<--\n", d) == ft_printf("-->|%03.2d|<--\n", d));
assert(printf("-->|%03.3d|<--\n", d) == ft_printf("-->|%03.3d|<--\n", d));
assert(printf("-->|%03.4d|<--\n", d) == ft_printf("-->|%03.4d|<--\n", d));
assert(printf("-->|%03d|<--\n", d) == ft_printf("-->|%03d|<--\n", d));
assert(printf("-->|%04.d|<--\n", d) == ft_printf("-->|%04.d|<--\n", d));
assert(printf("-->|%04.*d|<--\n", -4, d) == ft_printf("-->|%04.*d|<--\n", -4, d));
assert(printf("-->|%04.*d|<--\n", -3, d) == ft_printf("-->|%04.*d|<--\n", -3, d));
assert(printf("-->|%04.*d|<--\n", -2, d) == ft_printf("-->|%04.*d|<--\n", -2, d));
assert(printf("-->|%04.*d|<--\n", -1, d) == ft_printf("-->|%04.*d|<--\n", -1, d));
assert(printf("-->|%04.*d|<--\n", 0, d) == ft_printf("-->|%04.*d|<--\n", 0, d));
assert(printf("-->|%04.*d|<--\n", 1, d) == ft_printf("-->|%04.*d|<--\n", 1, d));
assert(printf("-->|%04.*d|<--\n", 2, d) == ft_printf("-->|%04.*d|<--\n", 2, d));
assert(printf("-->|%04.*d|<--\n", 3, d) == ft_printf("-->|%04.*d|<--\n", 3, d));
assert(printf("-->|%04.*d|<--\n", 4, d) == ft_printf("-->|%04.*d|<--\n", 4, d));
assert(printf("-->|%04.0d|<--\n", d) == ft_printf("-->|%04.0d|<--\n", d));
assert(printf("-->|%04.1d|<--\n", d) == ft_printf("-->|%04.1d|<--\n", d));
assert(printf("-->|%04.2d|<--\n", d) == ft_printf("-->|%04.2d|<--\n", d));
assert(printf("-->|%04.3d|<--\n", d) == ft_printf("-->|%04.3d|<--\n", d));
assert(printf("-->|%04.4d|<--\n", d) == ft_printf("-->|%04.4d|<--\n", d));
assert(printf("-->|%04d|<--\n", d) == ft_printf("-->|%04d|<--\n", d));
assert(printf("-->|%--4.d|<--\n", d) == ft_printf("-->|%--4.d|<--\n", d));
assert(printf("-->|%--4.*d|<--\n", -4, d) == ft_printf("-->|%--4.*d|<--\n", -4, d));
assert(printf("-->|%--4.*d|<--\n", -3, d) == ft_printf("-->|%--4.*d|<--\n", -3, d));
assert(printf("-->|%--4.*d|<--\n", -2, d) == ft_printf("-->|%--4.*d|<--\n", -2, d));
assert(printf("-->|%--4.*d|<--\n", -1, d) == ft_printf("-->|%--4.*d|<--\n", -1, d));
assert(printf("-->|%--4.*d|<--\n", 0, d) == ft_printf("-->|%--4.*d|<--\n", 0, d));
assert(printf("-->|%--4.*d|<--\n", 1, d) == ft_printf("-->|%--4.*d|<--\n", 1, d));
assert(printf("-->|%--4.*d|<--\n", 2, d) == ft_printf("-->|%--4.*d|<--\n", 2, d));
assert(printf("-->|%--4.*d|<--\n", 3, d) == ft_printf("-->|%--4.*d|<--\n", 3, d));
assert(printf("-->|%--4.*d|<--\n", 4, d) == ft_printf("-->|%--4.*d|<--\n", 4, d));
assert(printf("-->|%--4.0d|<--\n", d) == ft_printf("-->|%--4.0d|<--\n", d));
assert(printf("-->|%--4.1d|<--\n", d) == ft_printf("-->|%--4.1d|<--\n", d));
assert(printf("-->|%--4.2d|<--\n", d) == ft_printf("-->|%--4.2d|<--\n", d));
assert(printf("-->|%--4.3d|<--\n", d) == ft_printf("-->|%--4.3d|<--\n", d));
assert(printf("-->|%--4.4d|<--\n", d) == ft_printf("-->|%--4.4d|<--\n", d));
assert(printf("-->|%--4d|<--\n", d) == ft_printf("-->|%--4d|<--\n", d));
assert(printf("-->|%--3.d|<--\n", d) == ft_printf("-->|%--3.d|<--\n", d));
assert(printf("-->|%--3.*d|<--\n", -4, d) == ft_printf("-->|%--3.*d|<--\n", -4, d));
assert(printf("-->|%--3.*d|<--\n", -3, d) == ft_printf("-->|%--3.*d|<--\n", -3, d));
assert(printf("-->|%--3.*d|<--\n", -2, d) == ft_printf("-->|%--3.*d|<--\n", -2, d));
assert(printf("-->|%--3.*d|<--\n", -1, d) == ft_printf("-->|%--3.*d|<--\n", -1, d));
assert(printf("-->|%--3.*d|<--\n", 0, d) == ft_printf("-->|%--3.*d|<--\n", 0, d));
assert(printf("-->|%--3.*d|<--\n", 1, d) == ft_printf("-->|%--3.*d|<--\n", 1, d));
assert(printf("-->|%--3.*d|<--\n", 2, d) == ft_printf("-->|%--3.*d|<--\n", 2, d));
assert(printf("-->|%--3.*d|<--\n", 3, d) == ft_printf("-->|%--3.*d|<--\n", 3, d));
assert(printf("-->|%--3.*d|<--\n", 4, d) == ft_printf("-->|%--3.*d|<--\n", 4, d));
assert(printf("-->|%--3.0d|<--\n", d) == ft_printf("-->|%--3.0d|<--\n", d));
assert(printf("-->|%--3.1d|<--\n", d) == ft_printf("-->|%--3.1d|<--\n", d));
assert(printf("-->|%--3.2d|<--\n", d) == ft_printf("-->|%--3.2d|<--\n", d));
assert(printf("-->|%--3.3d|<--\n", d) == ft_printf("-->|%--3.3d|<--\n", d));
assert(printf("-->|%--3.4d|<--\n", d) == ft_printf("-->|%--3.4d|<--\n", d));
assert(printf("-->|%--3d|<--\n", d) == ft_printf("-->|%--3d|<--\n", d));
assert(printf("-->|%--2.d|<--\n", d) == ft_printf("-->|%--2.d|<--\n", d));
assert(printf("-->|%--2.*d|<--\n", -4, d) == ft_printf("-->|%--2.*d|<--\n", -4, d));
assert(printf("-->|%--2.*d|<--\n", -3, d) == ft_printf("-->|%--2.*d|<--\n", -3, d));
assert(printf("-->|%--2.*d|<--\n", -2, d) == ft_printf("-->|%--2.*d|<--\n", -2, d));
assert(printf("-->|%--2.*d|<--\n", -1, d) == ft_printf("-->|%--2.*d|<--\n", -1, d));
assert(printf("-->|%--2.*d|<--\n", 0, d) == ft_printf("-->|%--2.*d|<--\n", 0, d));
assert(printf("-->|%--2.*d|<--\n", 1, d) == ft_printf("-->|%--2.*d|<--\n", 1, d));
assert(printf("-->|%--2.*d|<--\n", 2, d) == ft_printf("-->|%--2.*d|<--\n", 2, d));
assert(printf("-->|%--2.*d|<--\n", 3, d) == ft_printf("-->|%--2.*d|<--\n", 3, d));
assert(printf("-->|%--2.*d|<--\n", 4, d) == ft_printf("-->|%--2.*d|<--\n", 4, d));
assert(printf("-->|%--2.0d|<--\n", d) == ft_printf("-->|%--2.0d|<--\n", d));
assert(printf("-->|%--2.1d|<--\n", d) == ft_printf("-->|%--2.1d|<--\n", d));
assert(printf("-->|%--2.2d|<--\n", d) == ft_printf("-->|%--2.2d|<--\n", d));
assert(printf("-->|%--2.3d|<--\n", d) == ft_printf("-->|%--2.3d|<--\n", d));
assert(printf("-->|%--2.4d|<--\n", d) == ft_printf("-->|%--2.4d|<--\n", d));
assert(printf("-->|%--2d|<--\n", d) == ft_printf("-->|%--2d|<--\n", d));
assert(printf("-->|%--1.d|<--\n", d) == ft_printf("-->|%--1.d|<--\n", d));
assert(printf("-->|%--1.*d|<--\n", -4, d) == ft_printf("-->|%--1.*d|<--\n", -4, d));
assert(printf("-->|%--1.*d|<--\n", -3, d) == ft_printf("-->|%--1.*d|<--\n", -3, d));
assert(printf("-->|%--1.*d|<--\n", -2, d) == ft_printf("-->|%--1.*d|<--\n", -2, d));
assert(printf("-->|%--1.*d|<--\n", -1, d) == ft_printf("-->|%--1.*d|<--\n", -1, d));
assert(printf("-->|%--1.*d|<--\n", 0, d) == ft_printf("-->|%--1.*d|<--\n", 0, d));
assert(printf("-->|%--1.*d|<--\n", 1, d) == ft_printf("-->|%--1.*d|<--\n", 1, d));
assert(printf("-->|%--1.*d|<--\n", 2, d) == ft_printf("-->|%--1.*d|<--\n", 2, d));
assert(printf("-->|%--1.*d|<--\n", 3, d) == ft_printf("-->|%--1.*d|<--\n", 3, d));
assert(printf("-->|%--1.*d|<--\n", 4, d) == ft_printf("-->|%--1.*d|<--\n", 4, d));
assert(printf("-->|%--1.0d|<--\n", d) == ft_printf("-->|%--1.0d|<--\n", d));
assert(printf("-->|%--1.1d|<--\n", d) == ft_printf("-->|%--1.1d|<--\n", d));
assert(printf("-->|%--1.2d|<--\n", d) == ft_printf("-->|%--1.2d|<--\n", d));
assert(printf("-->|%--1.3d|<--\n", d) == ft_printf("-->|%--1.3d|<--\n", d));
assert(printf("-->|%--1.4d|<--\n", d) == ft_printf("-->|%--1.4d|<--\n", d));
assert(printf("-->|%--1d|<--\n", d) == ft_printf("-->|%--1d|<--\n", d));
assert(printf("-->|%-.d|<--\n", d) == ft_printf("-->|%-.d|<--\n", d));
assert(printf("-->|%-.*d|<--\n", -4, d) == ft_printf("-->|%-.*d|<--\n", -4, d));
assert(printf("-->|%-.*d|<--\n", -3, d) == ft_printf("-->|%-.*d|<--\n", -3, d));
assert(printf("-->|%-.*d|<--\n", -2, d) == ft_printf("-->|%-.*d|<--\n", -2, d));
assert(printf("-->|%-.*d|<--\n", -1, d) == ft_printf("-->|%-.*d|<--\n", -1, d));
assert(printf("-->|%-.*d|<--\n", 0, d) == ft_printf("-->|%-.*d|<--\n", 0, d));
assert(printf("-->|%-.*d|<--\n", 1, d) == ft_printf("-->|%-.*d|<--\n", 1, d));
assert(printf("-->|%-.*d|<--\n", 2, d) == ft_printf("-->|%-.*d|<--\n", 2, d));
assert(printf("-->|%-.*d|<--\n", 3, d) == ft_printf("-->|%-.*d|<--\n", 3, d));
assert(printf("-->|%-.*d|<--\n", 4, d) == ft_printf("-->|%-.*d|<--\n", 4, d));
assert(printf("-->|%-.0d|<--\n", d) == ft_printf("-->|%-.0d|<--\n", d));
assert(printf("-->|%-.1d|<--\n", d) == ft_printf("-->|%-.1d|<--\n", d));
assert(printf("-->|%-.2d|<--\n", d) == ft_printf("-->|%-.2d|<--\n", d));
assert(printf("-->|%-.3d|<--\n", d) == ft_printf("-->|%-.3d|<--\n", d));
assert(printf("-->|%-.4d|<--\n", d) == ft_printf("-->|%-.4d|<--\n", d));
assert(printf("-->|%-d|<--\n", d) == ft_printf("-->|%-d|<--\n", d));
assert(printf("-->|%-*.d|<--\n", -4, d) == ft_printf("-->|%-*.d|<--\n", -4, d));
assert(printf("-->|%-*.d|<--\n", -3, d) == ft_printf("-->|%-*.d|<--\n", -3, d));
assert(printf("-->|%-*.d|<--\n", -2, d) == ft_printf("-->|%-*.d|<--\n", -2, d));
assert(printf("-->|%-*.d|<--\n", -1, d) == ft_printf("-->|%-*.d|<--\n", -1, d));
assert(printf("-->|%-*.d|<--\n", 0, d) == ft_printf("-->|%-*.d|<--\n", 0, d));
assert(printf("-->|%-*.d|<--\n", 1, d) == ft_printf("-->|%-*.d|<--\n", 1, d));
assert(printf("-->|%-*.d|<--\n", 2, d) == ft_printf("-->|%-*.d|<--\n", 2, d));
assert(printf("-->|%-*.d|<--\n", 3, d) == ft_printf("-->|%-*.d|<--\n", 3, d));
assert(printf("-->|%-*.d|<--\n", 4, d) == ft_printf("-->|%-*.d|<--\n", 4, d));
assert(printf("-->|%-*.*d|<--\n", -4, -4, d) == ft_printf("-->|%-*.*d|<--\n", -4, -4, d));
assert(printf("-->|%-*.*d|<--\n", -4, -3, d) == ft_printf("-->|%-*.*d|<--\n", -4, -3, d));
assert(printf("-->|%-*.*d|<--\n", -4, -2, d) == ft_printf("-->|%-*.*d|<--\n", -4, -2, d));
assert(printf("-->|%-*.*d|<--\n", -4, -1, d) == ft_printf("-->|%-*.*d|<--\n", -4, -1, d));
assert(printf("-->|%-*.*d|<--\n", -4, 0, d) == ft_printf("-->|%-*.*d|<--\n", -4, 0, d));
assert(printf("-->|%-*.*d|<--\n", -4, 1, d) == ft_printf("-->|%-*.*d|<--\n", -4, 1, d));
assert(printf("-->|%-*.*d|<--\n", -4, 2, d) == ft_printf("-->|%-*.*d|<--\n", -4, 2, d));
assert(printf("-->|%-*.*d|<--\n", -4, 3, d) == ft_printf("-->|%-*.*d|<--\n", -4, 3, d));
assert(printf("-->|%-*.*d|<--\n", -4, 4, d) == ft_printf("-->|%-*.*d|<--\n", -4, 4, d));
assert(printf("-->|%-*.*d|<--\n", -3, -4, d) == ft_printf("-->|%-*.*d|<--\n", -3, -4, d));
assert(printf("-->|%-*.*d|<--\n", -3, -3, d) == ft_printf("-->|%-*.*d|<--\n", -3, -3, d));
assert(printf("-->|%-*.*d|<--\n", -3, -2, d) == ft_printf("-->|%-*.*d|<--\n", -3, -2, d));
assert(printf("-->|%-*.*d|<--\n", -3, -1, d) == ft_printf("-->|%-*.*d|<--\n", -3, -1, d));
assert(printf("-->|%-*.*d|<--\n", -3, 0, d) == ft_printf("-->|%-*.*d|<--\n", -3, 0, d));
assert(printf("-->|%-*.*d|<--\n", -3, 1, d) == ft_printf("-->|%-*.*d|<--\n", -3, 1, d));
assert(printf("-->|%-*.*d|<--\n", -3, 2, d) == ft_printf("-->|%-*.*d|<--\n", -3, 2, d));
assert(printf("-->|%-*.*d|<--\n", -3, 3, d) == ft_printf("-->|%-*.*d|<--\n", -3, 3, d));
assert(printf("-->|%-*.*d|<--\n", -3, 4, d) == ft_printf("-->|%-*.*d|<--\n", -3, 4, d));
assert(printf("-->|%-*.*d|<--\n", -2, -4, d) == ft_printf("-->|%-*.*d|<--\n", -2, -4, d));
assert(printf("-->|%-*.*d|<--\n", -2, -3, d) == ft_printf("-->|%-*.*d|<--\n", -2, -3, d));
assert(printf("-->|%-*.*d|<--\n", -2, -2, d) == ft_printf("-->|%-*.*d|<--\n", -2, -2, d));
assert(printf("-->|%-*.*d|<--\n", -2, -1, d) == ft_printf("-->|%-*.*d|<--\n", -2, -1, d));
assert(printf("-->|%-*.*d|<--\n", -2, 0, d) == ft_printf("-->|%-*.*d|<--\n", -2, 0, d));
assert(printf("-->|%-*.*d|<--\n", -2, 1, d) == ft_printf("-->|%-*.*d|<--\n", -2, 1, d));
assert(printf("-->|%-*.*d|<--\n", -2, 2, d) == ft_printf("-->|%-*.*d|<--\n", -2, 2, d));
assert(printf("-->|%-*.*d|<--\n", -2, 3, d) == ft_printf("-->|%-*.*d|<--\n", -2, 3, d));
assert(printf("-->|%-*.*d|<--\n", -2, 4, d) == ft_printf("-->|%-*.*d|<--\n", -2, 4, d));
assert(printf("-->|%-*.*d|<--\n", -1, -4, d) == ft_printf("-->|%-*.*d|<--\n", -1, -4, d));
assert(printf("-->|%-*.*d|<--\n", -1, -3, d) == ft_printf("-->|%-*.*d|<--\n", -1, -3, d));
assert(printf("-->|%-*.*d|<--\n", -1, -2, d) == ft_printf("-->|%-*.*d|<--\n", -1, -2, d));
assert(printf("-->|%-*.*d|<--\n", -1, -1, d) == ft_printf("-->|%-*.*d|<--\n", -1, -1, d));
assert(printf("-->|%-*.*d|<--\n", -1, 0, d) == ft_printf("-->|%-*.*d|<--\n", -1, 0, d));
assert(printf("-->|%-*.*d|<--\n", -1, 1, d) == ft_printf("-->|%-*.*d|<--\n", -1, 1, d));
assert(printf("-->|%-*.*d|<--\n", -1, 2, d) == ft_printf("-->|%-*.*d|<--\n", -1, 2, d));
assert(printf("-->|%-*.*d|<--\n", -1, 3, d) == ft_printf("-->|%-*.*d|<--\n", -1, 3, d));
assert(printf("-->|%-*.*d|<--\n", -1, 4, d) == ft_printf("-->|%-*.*d|<--\n", -1, 4, d));
assert(printf("-->|%-*.*d|<--\n", 0, -4, d) == ft_printf("-->|%-*.*d|<--\n", 0, -4, d));
assert(printf("-->|%-*.*d|<--\n", 0, -3, d) == ft_printf("-->|%-*.*d|<--\n", 0, -3, d));
assert(printf("-->|%-*.*d|<--\n", 0, -2, d) == ft_printf("-->|%-*.*d|<--\n", 0, -2, d));
assert(printf("-->|%-*.*d|<--\n", 0, -1, d) == ft_printf("-->|%-*.*d|<--\n", 0, -1, d));
assert(printf("-->|%-*.*d|<--\n", 0, 0, d) == ft_printf("-->|%-*.*d|<--\n", 0, 0, d));
assert(printf("-->|%-*.*d|<--\n", 0, 1, d) == ft_printf("-->|%-*.*d|<--\n", 0, 1, d));
assert(printf("-->|%-*.*d|<--\n", 0, 2, d) == ft_printf("-->|%-*.*d|<--\n", 0, 2, d));
assert(printf("-->|%-*.*d|<--\n", 0, 3, d) == ft_printf("-->|%-*.*d|<--\n", 0, 3, d));
assert(printf("-->|%-*.*d|<--\n", 0, 4, d) == ft_printf("-->|%-*.*d|<--\n", 0, 4, d));
assert(printf("-->|%-*.*d|<--\n", 1, -4, d) == ft_printf("-->|%-*.*d|<--\n", 1, -4, d));
assert(printf("-->|%-*.*d|<--\n", 1, -3, d) == ft_printf("-->|%-*.*d|<--\n", 1, -3, d));
assert(printf("-->|%-*.*d|<--\n", 1, -2, d) == ft_printf("-->|%-*.*d|<--\n", 1, -2, d));
assert(printf("-->|%-*.*d|<--\n", 1, -1, d) == ft_printf("-->|%-*.*d|<--\n", 1, -1, d));
assert(printf("-->|%-*.*d|<--\n", 1, 0, d) == ft_printf("-->|%-*.*d|<--\n", 1, 0, d));
assert(printf("-->|%-*.*d|<--\n", 1, 1, d) == ft_printf("-->|%-*.*d|<--\n", 1, 1, d));
assert(printf("-->|%-*.*d|<--\n", 1, 2, d) == ft_printf("-->|%-*.*d|<--\n", 1, 2, d));
assert(printf("-->|%-*.*d|<--\n", 1, 3, d) == ft_printf("-->|%-*.*d|<--\n", 1, 3, d));
assert(printf("-->|%-*.*d|<--\n", 1, 4, d) == ft_printf("-->|%-*.*d|<--\n", 1, 4, d));
assert(printf("-->|%-*.*d|<--\n", 2, -4, d) == ft_printf("-->|%-*.*d|<--\n", 2, -4, d));
assert(printf("-->|%-*.*d|<--\n", 2, -3, d) == ft_printf("-->|%-*.*d|<--\n", 2, -3, d));
assert(printf("-->|%-*.*d|<--\n", 2, -2, d) == ft_printf("-->|%-*.*d|<--\n", 2, -2, d));
assert(printf("-->|%-*.*d|<--\n", 2, -1, d) == ft_printf("-->|%-*.*d|<--\n", 2, -1, d));
assert(printf("-->|%-*.*d|<--\n", 2, 0, d) == ft_printf("-->|%-*.*d|<--\n", 2, 0, d));
assert(printf("-->|%-*.*d|<--\n", 2, 1, d) == ft_printf("-->|%-*.*d|<--\n", 2, 1, d));
assert(printf("-->|%-*.*d|<--\n", 2, 2, d) == ft_printf("-->|%-*.*d|<--\n", 2, 2, d));
assert(printf("-->|%-*.*d|<--\n", 2, 3, d) == ft_printf("-->|%-*.*d|<--\n", 2, 3, d));
assert(printf("-->|%-*.*d|<--\n", 2, 4, d) == ft_printf("-->|%-*.*d|<--\n", 2, 4, d));
assert(printf("-->|%-*.*d|<--\n", 3, -4, d) == ft_printf("-->|%-*.*d|<--\n", 3, -4, d));
assert(printf("-->|%-*.*d|<--\n", 3, -3, d) == ft_printf("-->|%-*.*d|<--\n", 3, -3, d));
assert(printf("-->|%-*.*d|<--\n", 3, -2, d) == ft_printf("-->|%-*.*d|<--\n", 3, -2, d));
assert(printf("-->|%-*.*d|<--\n", 3, -1, d) == ft_printf("-->|%-*.*d|<--\n", 3, -1, d));
assert(printf("-->|%-*.*d|<--\n", 3, 0, d) == ft_printf("-->|%-*.*d|<--\n", 3, 0, d));
assert(printf("-->|%-*.*d|<--\n", 3, 1, d) == ft_printf("-->|%-*.*d|<--\n", 3, 1, d));
assert(printf("-->|%-*.*d|<--\n", 3, 2, d) == ft_printf("-->|%-*.*d|<--\n", 3, 2, d));
assert(printf("-->|%-*.*d|<--\n", 3, 3, d) == ft_printf("-->|%-*.*d|<--\n", 3, 3, d));
assert(printf("-->|%-*.*d|<--\n", 3, 4, d) == ft_printf("-->|%-*.*d|<--\n", 3, 4, d));
assert(printf("-->|%-*.*d|<--\n", 4, -4, d) == ft_printf("-->|%-*.*d|<--\n", 4, -4, d));
assert(printf("-->|%-*.*d|<--\n", 4, -3, d) == ft_printf("-->|%-*.*d|<--\n", 4, -3, d));
assert(printf("-->|%-*.*d|<--\n", 4, -2, d) == ft_printf("-->|%-*.*d|<--\n", 4, -2, d));
assert(printf("-->|%-*.*d|<--\n", 4, -1, d) == ft_printf("-->|%-*.*d|<--\n", 4, -1, d));
assert(printf("-->|%-*.*d|<--\n", 4, 0, d) == ft_printf("-->|%-*.*d|<--\n", 4, 0, d));
assert(printf("-->|%-*.*d|<--\n", 4, 1, d) == ft_printf("-->|%-*.*d|<--\n", 4, 1, d));
assert(printf("-->|%-*.*d|<--\n", 4, 2, d) == ft_printf("-->|%-*.*d|<--\n", 4, 2, d));
assert(printf("-->|%-*.*d|<--\n", 4, 3, d) == ft_printf("-->|%-*.*d|<--\n", 4, 3, d));
assert(printf("-->|%-*.*d|<--\n", 4, 4, d) == ft_printf("-->|%-*.*d|<--\n", 4, 4, d));
assert(printf("-->|%-*.0d|<--\n", -4, d) == ft_printf("-->|%-*.0d|<--\n", -4, d));
assert(printf("-->|%-*.0d|<--\n", -3, d) == ft_printf("-->|%-*.0d|<--\n", -3, d));
assert(printf("-->|%-*.0d|<--\n", -2, d) == ft_printf("-->|%-*.0d|<--\n", -2, d));
assert(printf("-->|%-*.0d|<--\n", -1, d) == ft_printf("-->|%-*.0d|<--\n", -1, d));
assert(printf("-->|%-*.0d|<--\n", 0, d) == ft_printf("-->|%-*.0d|<--\n", 0, d));
assert(printf("-->|%-*.0d|<--\n", 1, d) == ft_printf("-->|%-*.0d|<--\n", 1, d));
assert(printf("-->|%-*.0d|<--\n", 2, d) == ft_printf("-->|%-*.0d|<--\n", 2, d));
assert(printf("-->|%-*.0d|<--\n", 3, d) == ft_printf("-->|%-*.0d|<--\n", 3, d));
assert(printf("-->|%-*.0d|<--\n", 4, d) == ft_printf("-->|%-*.0d|<--\n", 4, d));
assert(printf("-->|%-*.1d|<--\n", -4, d) == ft_printf("-->|%-*.1d|<--\n", -4, d));
assert(printf("-->|%-*.1d|<--\n", -3, d) == ft_printf("-->|%-*.1d|<--\n", -3, d));
assert(printf("-->|%-*.1d|<--\n", -2, d) == ft_printf("-->|%-*.1d|<--\n", -2, d));
assert(printf("-->|%-*.1d|<--\n", -1, d) == ft_printf("-->|%-*.1d|<--\n", -1, d));
assert(printf("-->|%-*.1d|<--\n", 0, d) == ft_printf("-->|%-*.1d|<--\n", 0, d));
assert(printf("-->|%-*.1d|<--\n", 1, d) == ft_printf("-->|%-*.1d|<--\n", 1, d));
assert(printf("-->|%-*.1d|<--\n", 2, d) == ft_printf("-->|%-*.1d|<--\n", 2, d));
assert(printf("-->|%-*.1d|<--\n", 3, d) == ft_printf("-->|%-*.1d|<--\n", 3, d));
assert(printf("-->|%-*.1d|<--\n", 4, d) == ft_printf("-->|%-*.1d|<--\n", 4, d));
assert(printf("-->|%-*.2d|<--\n", -4, d) == ft_printf("-->|%-*.2d|<--\n", -4, d));
assert(printf("-->|%-*.2d|<--\n", -3, d) == ft_printf("-->|%-*.2d|<--\n", -3, d));
assert(printf("-->|%-*.2d|<--\n", -2, d) == ft_printf("-->|%-*.2d|<--\n", -2, d));
assert(printf("-->|%-*.2d|<--\n", -1, d) == ft_printf("-->|%-*.2d|<--\n", -1, d));
assert(printf("-->|%-*.2d|<--\n", 0, d) == ft_printf("-->|%-*.2d|<--\n", 0, d));
assert(printf("-->|%-*.2d|<--\n", 1, d) == ft_printf("-->|%-*.2d|<--\n", 1, d));
assert(printf("-->|%-*.2d|<--\n", 2, d) == ft_printf("-->|%-*.2d|<--\n", 2, d));
assert(printf("-->|%-*.2d|<--\n", 3, d) == ft_printf("-->|%-*.2d|<--\n", 3, d));
assert(printf("-->|%-*.2d|<--\n", 4, d) == ft_printf("-->|%-*.2d|<--\n", 4, d));
assert(printf("-->|%-*.3d|<--\n", -4, d) == ft_printf("-->|%-*.3d|<--\n", -4, d));
assert(printf("-->|%-*.3d|<--\n", -3, d) == ft_printf("-->|%-*.3d|<--\n", -3, d));
assert(printf("-->|%-*.3d|<--\n", -2, d) == ft_printf("-->|%-*.3d|<--\n", -2, d));
assert(printf("-->|%-*.3d|<--\n", -1, d) == ft_printf("-->|%-*.3d|<--\n", -1, d));
assert(printf("-->|%-*.3d|<--\n", 0, d) == ft_printf("-->|%-*.3d|<--\n", 0, d));
assert(printf("-->|%-*.3d|<--\n", 1, d) == ft_printf("-->|%-*.3d|<--\n", 1, d));
assert(printf("-->|%-*.3d|<--\n", 2, d) == ft_printf("-->|%-*.3d|<--\n", 2, d));
assert(printf("-->|%-*.3d|<--\n", 3, d) == ft_printf("-->|%-*.3d|<--\n", 3, d));
assert(printf("-->|%-*.3d|<--\n", 4, d) == ft_printf("-->|%-*.3d|<--\n", 4, d));
assert(printf("-->|%-*.4d|<--\n", -4, d) == ft_printf("-->|%-*.4d|<--\n", -4, d));
assert(printf("-->|%-*.4d|<--\n", -3, d) == ft_printf("-->|%-*.4d|<--\n", -3, d));
assert(printf("-->|%-*.4d|<--\n", -2, d) == ft_printf("-->|%-*.4d|<--\n", -2, d));
assert(printf("-->|%-*.4d|<--\n", -1, d) == ft_printf("-->|%-*.4d|<--\n", -1, d));
assert(printf("-->|%-*.4d|<--\n", 0, d) == ft_printf("-->|%-*.4d|<--\n", 0, d));
assert(printf("-->|%-*.4d|<--\n", 1, d) == ft_printf("-->|%-*.4d|<--\n", 1, d));
assert(printf("-->|%-*.4d|<--\n", 2, d) == ft_printf("-->|%-*.4d|<--\n", 2, d));
assert(printf("-->|%-*.4d|<--\n", 3, d) == ft_printf("-->|%-*.4d|<--\n", 3, d));
assert(printf("-->|%-*.4d|<--\n", 4, d) == ft_printf("-->|%-*.4d|<--\n", 4, d));
assert(printf("-->|%-*d|<--\n", -4, d) == ft_printf("-->|%-*d|<--\n", -4, d));
assert(printf("-->|%-*d|<--\n", -3, d) == ft_printf("-->|%-*d|<--\n", -3, d));
assert(printf("-->|%-*d|<--\n", -2, d) == ft_printf("-->|%-*d|<--\n", -2, d));
assert(printf("-->|%-*d|<--\n", -1, d) == ft_printf("-->|%-*d|<--\n", -1, d));
assert(printf("-->|%-*d|<--\n", 0, d) == ft_printf("-->|%-*d|<--\n", 0, d));
assert(printf("-->|%-*d|<--\n", 1, d) == ft_printf("-->|%-*d|<--\n", 1, d));
assert(printf("-->|%-*d|<--\n", 2, d) == ft_printf("-->|%-*d|<--\n", 2, d));
assert(printf("-->|%-*d|<--\n", 3, d) == ft_printf("-->|%-*d|<--\n", 3, d));
assert(printf("-->|%-*d|<--\n", 4, d) == ft_printf("-->|%-*d|<--\n", 4, d));
assert(printf("-->|%-1.d|<--\n", d) == ft_printf("-->|%-1.d|<--\n", d));
assert(printf("-->|%-1.*d|<--\n", -4, d) == ft_printf("-->|%-1.*d|<--\n", -4, d));
assert(printf("-->|%-1.*d|<--\n", -3, d) == ft_printf("-->|%-1.*d|<--\n", -3, d));
assert(printf("-->|%-1.*d|<--\n", -2, d) == ft_printf("-->|%-1.*d|<--\n", -2, d));
assert(printf("-->|%-1.*d|<--\n", -1, d) == ft_printf("-->|%-1.*d|<--\n", -1, d));
assert(printf("-->|%-1.*d|<--\n", 0, d) == ft_printf("-->|%-1.*d|<--\n", 0, d));
assert(printf("-->|%-1.*d|<--\n", 1, d) == ft_printf("-->|%-1.*d|<--\n", 1, d));
assert(printf("-->|%-1.*d|<--\n", 2, d) == ft_printf("-->|%-1.*d|<--\n", 2, d));
assert(printf("-->|%-1.*d|<--\n", 3, d) == ft_printf("-->|%-1.*d|<--\n", 3, d));
assert(printf("-->|%-1.*d|<--\n", 4, d) == ft_printf("-->|%-1.*d|<--\n", 4, d));
assert(printf("-->|%-1.0d|<--\n", d) == ft_printf("-->|%-1.0d|<--\n", d));
assert(printf("-->|%-1.1d|<--\n", d) == ft_printf("-->|%-1.1d|<--\n", d));
assert(printf("-->|%-1.2d|<--\n", d) == ft_printf("-->|%-1.2d|<--\n", d));
assert(printf("-->|%-1.3d|<--\n", d) == ft_printf("-->|%-1.3d|<--\n", d));
assert(printf("-->|%-1.4d|<--\n", d) == ft_printf("-->|%-1.4d|<--\n", d));
assert(printf("-->|%-1d|<--\n", d) == ft_printf("-->|%-1d|<--\n", d));
assert(printf("-->|%-2.d|<--\n", d) == ft_printf("-->|%-2.d|<--\n", d));
assert(printf("-->|%-2.*d|<--\n", -4, d) == ft_printf("-->|%-2.*d|<--\n", -4, d));
assert(printf("-->|%-2.*d|<--\n", -3, d) == ft_printf("-->|%-2.*d|<--\n", -3, d));
assert(printf("-->|%-2.*d|<--\n", -2, d) == ft_printf("-->|%-2.*d|<--\n", -2, d));
assert(printf("-->|%-2.*d|<--\n", -1, d) == ft_printf("-->|%-2.*d|<--\n", -1, d));
assert(printf("-->|%-2.*d|<--\n", 0, d) == ft_printf("-->|%-2.*d|<--\n", 0, d));
assert(printf("-->|%-2.*d|<--\n", 1, d) == ft_printf("-->|%-2.*d|<--\n", 1, d));
assert(printf("-->|%-2.*d|<--\n", 2, d) == ft_printf("-->|%-2.*d|<--\n", 2, d));
assert(printf("-->|%-2.*d|<--\n", 3, d) == ft_printf("-->|%-2.*d|<--\n", 3, d));
assert(printf("-->|%-2.*d|<--\n", 4, d) == ft_printf("-->|%-2.*d|<--\n", 4, d));
assert(printf("-->|%-2.0d|<--\n", d) == ft_printf("-->|%-2.0d|<--\n", d));
assert(printf("-->|%-2.1d|<--\n", d) == ft_printf("-->|%-2.1d|<--\n", d));
assert(printf("-->|%-2.2d|<--\n", d) == ft_printf("-->|%-2.2d|<--\n", d));
assert(printf("-->|%-2.3d|<--\n", d) == ft_printf("-->|%-2.3d|<--\n", d));
assert(printf("-->|%-2.4d|<--\n", d) == ft_printf("-->|%-2.4d|<--\n", d));
assert(printf("-->|%-2d|<--\n", d) == ft_printf("-->|%-2d|<--\n", d));
assert(printf("-->|%-3.d|<--\n", d) == ft_printf("-->|%-3.d|<--\n", d));
assert(printf("-->|%-3.*d|<--\n", -4, d) == ft_printf("-->|%-3.*d|<--\n", -4, d));
assert(printf("-->|%-3.*d|<--\n", -3, d) == ft_printf("-->|%-3.*d|<--\n", -3, d));
assert(printf("-->|%-3.*d|<--\n", -2, d) == ft_printf("-->|%-3.*d|<--\n", -2, d));
assert(printf("-->|%-3.*d|<--\n", -1, d) == ft_printf("-->|%-3.*d|<--\n", -1, d));
assert(printf("-->|%-3.*d|<--\n", 0, d) == ft_printf("-->|%-3.*d|<--\n", 0, d));
assert(printf("-->|%-3.*d|<--\n", 1, d) == ft_printf("-->|%-3.*d|<--\n", 1, d));
assert(printf("-->|%-3.*d|<--\n", 2, d) == ft_printf("-->|%-3.*d|<--\n", 2, d));
assert(printf("-->|%-3.*d|<--\n", 3, d) == ft_printf("-->|%-3.*d|<--\n", 3, d));
assert(printf("-->|%-3.*d|<--\n", 4, d) == ft_printf("-->|%-3.*d|<--\n", 4, d));
assert(printf("-->|%-3.0d|<--\n", d) == ft_printf("-->|%-3.0d|<--\n", d));
assert(printf("-->|%-3.1d|<--\n", d) == ft_printf("-->|%-3.1d|<--\n", d));
assert(printf("-->|%-3.2d|<--\n", d) == ft_printf("-->|%-3.2d|<--\n", d));
assert(printf("-->|%-3.3d|<--\n", d) == ft_printf("-->|%-3.3d|<--\n", d));
assert(printf("-->|%-3.4d|<--\n", d) == ft_printf("-->|%-3.4d|<--\n", d));
assert(printf("-->|%-3d|<--\n", d) == ft_printf("-->|%-3d|<--\n", d));
assert(printf("-->|%-4.d|<--\n", d) == ft_printf("-->|%-4.d|<--\n", d));
assert(printf("-->|%-4.*d|<--\n", -4, d) == ft_printf("-->|%-4.*d|<--\n", -4, d));
assert(printf("-->|%-4.*d|<--\n", -3, d) == ft_printf("-->|%-4.*d|<--\n", -3, d));
assert(printf("-->|%-4.*d|<--\n", -2, d) == ft_printf("-->|%-4.*d|<--\n", -2, d));
assert(printf("-->|%-4.*d|<--\n", -1, d) == ft_printf("-->|%-4.*d|<--\n", -1, d));
assert(printf("-->|%-4.*d|<--\n", 0, d) == ft_printf("-->|%-4.*d|<--\n", 0, d));
assert(printf("-->|%-4.*d|<--\n", 1, d) == ft_printf("-->|%-4.*d|<--\n", 1, d));
assert(printf("-->|%-4.*d|<--\n", 2, d) == ft_printf("-->|%-4.*d|<--\n", 2, d));
assert(printf("-->|%-4.*d|<--\n", 3, d) == ft_printf("-->|%-4.*d|<--\n", 3, d));
assert(printf("-->|%-4.*d|<--\n", 4, d) == ft_printf("-->|%-4.*d|<--\n", 4, d));
assert(printf("-->|%-4.0d|<--\n", d) == ft_printf("-->|%-4.0d|<--\n", d));
assert(printf("-->|%-4.1d|<--\n", d) == ft_printf("-->|%-4.1d|<--\n", d));
assert(printf("-->|%-4.2d|<--\n", d) == ft_printf("-->|%-4.2d|<--\n", d));
assert(printf("-->|%-4.3d|<--\n", d) == ft_printf("-->|%-4.3d|<--\n", d));
assert(printf("-->|%-4.4d|<--\n", d) == ft_printf("-->|%-4.4d|<--\n", d));
assert(printf("-->|%-4d|<--\n", d) == ft_printf("-->|%-4d|<--\n", d));
	return(0);
}
/*
** charmstr@student.42.fr
**
** 1664 different calls generated automatically according to your options
*/
