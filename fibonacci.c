#include <stdio.h>

int fibonacci(int n)
{
    if (n < 2)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void)
{
    int n;
    printf("\tSucesión de Fibonacci\nNúmero: ");
    scanf("%d", &n);
    printf("f(%d) = %d\n", n, fibonacci(n));
    return 0;
}