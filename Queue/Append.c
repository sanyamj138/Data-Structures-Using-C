#include<stdio.h>

int rear = -1;
int arr[100];

void append(int data) {
    rear++;
    arr[rear] = data;
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
    
    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}