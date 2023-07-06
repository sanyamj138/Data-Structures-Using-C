#include<stdio.h>

int top = -1;
int arr[100];

void append(int data) {
    top++;
    arr[top] = data;
}

void reverse(int size) {
    int x = top;
    int temp, i, j;

    for(j = 0; j < size; j++) {
        for(i = 0; i < x; i++) {
            temp = arr[top];
            arr[top] = arr[top - 1];
            arr[top - 1] = temp;

            top = top - 1;
        }
        x = top;
    }
}

int main() {
    int i;
    int size, data;

    printf("Enter the number of elements you want in stack: ");
    scanf("%d",&size);

    for(i = 0; i < size; i++) {
        scanf("%d",&data);
        append(data);
    }
    
    reverse(size);

    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}