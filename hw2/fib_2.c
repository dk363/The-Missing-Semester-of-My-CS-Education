#include <stdio.h>

int fib(int x)
{
        if (x == 0) {
                return 0;
        }

        if (x == 1) {
                return 1;
        }
        int x0 = 0;
        int x1 = 1;

        int i = 2;

        while (i <= x) {
                int temp = x0;
                x0 = x1;
                x1 += temp;
                i += 1;
        }

        return x1;
}

int main(void) 
{
        printf("%d\n", fib(0));
        printf("This line should be printed 0\n");

        printf("%d\n", fib(3));
        printf("This line should be printed 2\n");

        printf("%d\n", fib(5));
        printf("This line should be printed 5\n");

        return 0;
}