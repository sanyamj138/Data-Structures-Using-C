#include<stdio.h>

int main() {

    int five = 5;
    printf("%d\n", five);
  
    five = 5;
    five = five++ + five++ + five++; // 18
    printf("%d\n", five); // 18

    five = 5;
    five = five++ + ++five; // 12
    printf("%d\n", five); // 12

    five = 5;
    five = ++five + five++; // 12
    printf("%d\n", five); // 12

    five = 5;
    five = ++five + ++five; // 13
    printf("%d\n", five); // 13
}