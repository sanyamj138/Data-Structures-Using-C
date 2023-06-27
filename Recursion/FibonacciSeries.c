#include<stdio.h>

int fib(int x) {
    if(x == 0) {
        return 0;
    }
    if(x == 1) {
        return 1;
    }

    return x + fib(x-1);
}

int main() {
    int x;

    scanf("%d",&x);
    printf("Sum of %d terms in Fibonacci Series: %d", x, fib(x));

    return 0;
}