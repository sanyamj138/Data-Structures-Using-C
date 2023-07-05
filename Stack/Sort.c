#include<stdio.h>

int top = -1;
int arr[100];

void append(int data) {
    top++;
    arr[top] = data;
}

void sort(int size) {
    int x = top;
    int temp, i;

    for(i = 0; i < size; i++) {
        while(top >= 0) {
            if(arr[top] < arr[top - 1]) {
                temp = arr[top];
                arr[top] = arr[top - 1];
                arr[top - 1] = temp;
            }
            top = top - 1;
        }
        top = x;
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
    
    sort(size);

    for(i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}