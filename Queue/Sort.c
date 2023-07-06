#include<stdio.h>

int rear = -1;
int front = -1;
int arr[100];

void append(int data) {
    rear++;
    arr[rear] = data;
}

void sort(int size) {
    int i;
    int temp, x = rear;

    for(i = 0; i < size; i++) {
        while(rear >= 0) {
            if(arr[rear] < arr[rear - 1]) {
                temp = arr[rear];
                arr[rear] = arr[rear - 1];
                arr[rear - 1] = temp;
            }
            rear = rear - 1;
        }
        rear = x;
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