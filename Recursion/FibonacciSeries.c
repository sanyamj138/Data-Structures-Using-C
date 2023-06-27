#include<stdio.h>

int fib(int x, int a, int b) {
    if(x < 0)
        return 0;
    printf("%d ", b);
    return fib(x-1, b, b+a);
}   

int main() {
    int x;

    scanf("%d",&x);

    printf("%d ", 0);
    
    fib(x - 2, 0, 1);

    return 0;
}