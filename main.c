#include "my.h"
#include <stdio.h>
int main()
{
    int nb = 43;
    int *ptr = &nb;

    my_printf("%d = %.6X et %.8x en hexa et %.5o en octal\n", 42, 42, 42, 42);
    my_printf("s = %s, c = %c, d et i = %.3i %.5d %%.\n","test",'T', 42, 42);
    my_printf("e = %.10e, E = %.6E, a = %.3a A = %.6A\n", 4655.78, 0.00066, 42.47, 0.24);
    my_printf("f = %.4f, u = %.4u\n", 43.83983899, (unsigned int) 34);
    my_printf("p = %p, %nn = ", ptr, &nb);
    my_printf("%d\n", nb);
    my_printf("e = %+.3e, E = %.5E\n", 1000.0, 1000.0);

    printf("%d = %.6X et %.8x en hexa et %.5o en octal\n", 42, 42, 42, 42);
    printf("s = %s, c = %c, d et i = %.3i %.5d %%.\n","test",'T', 42, 42);
    printf("e = %.10e, E = %.6E, a = %.3a A = %.6A\n", 4655.78, 0.00066, 42.47, 0.24);
    printf("f = %.4f, u = %.4u\n", 43.83983899, (unsigned int) 34);
    printf("p = %p, %nn = ", ptr, &nb);
    printf("%d\n", nb);
    printf("e = %+.3e, E = %.5E\n", 1000.0, 1000.0);
}
