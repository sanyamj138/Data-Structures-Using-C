#include<stdio.h>
#include</Users/sanyamjain/Documents/GitHub/Data-Structures-Using-C/Header/Fibonacci.h>

int main() {
    int x;

    scanf("%d",&x);

    printf("%d ", 0);
    
    fib(x - 2, 0, 1);

    return 0;
}