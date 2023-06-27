/*
1
1 2
1 2 3
1 2 3 4
*/

#include<stdio.h>

int pyramid(int size) {
    if(size == 0) {
        return 0;
    }
    pyramid(size-1);
    printf("%d ", size);
}

int problem(int size, int i) {
    if(size == 0)
        return 0;
    pyramid(i);
    printf("\n");
    problem(size-1, i+1);
}

int main() {
    int size;
    printf("Enter size of the pyramid you want: ");
    scanf("%d", &size);
    problem(size, 1);

    return 0;
}