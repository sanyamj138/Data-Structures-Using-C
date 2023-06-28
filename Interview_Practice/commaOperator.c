#include<stdio.h>

int main() {

    extern int five;

    int a = 5, b = 7, c = 9;

    // 2 Variables
    printf("%d\n",(a>b)?a:b);


    // 3 Variables
    printf("%d\n", (a>b?a>c?a:b>c?b:c:b>c?b:c));
    printf("%d\n", (a>b?b>c?a:c>a?c:a:b>c?b:c));
    printf("%d\n", (a>b?a>c?a:c:b>c?b:c));
    printf("%d\n", (a>b?(a>c?a:c):(b>c?b:c)));

    return 0;
}