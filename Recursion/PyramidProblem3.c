#include<stdio.h>

int pyramid(int size, int i, int j) {
    if(i <= size) {
        if(j <= i) {
            printf("%d ", j);
            pyramid(size, i, ++j);
        }

        if(j > i) {
            printf("\n");
            pyramid(size, ++i, 1);
        }
    }
    return 0;
}

int main() {
    int size;
    printf("Enter size of the pyramid you want: ");
    scanf("%d", &size);
    pyramid(size, 1, 1);

    return 0;
}