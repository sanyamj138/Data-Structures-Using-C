/*
1
1 2
1 2 3
1 2 3 4
*/

#include<stdio.h>

int pyramid(int size, int i) {

    if(size <= 0) {
        return 0;
    }

    pyramid(size-1, i);
    

    if(size != 0 && size >= i) {
        i++;
        pyramid(size-i, i);
        printf("%d ", size);
        return 0;
    } 
}

int main() {
    int size;
    printf("Enter size of the pyramid you want: ");
    scanf("%d", &size);
    pyramid(size, 0);

    return 0;
}