#include<stdio.h>

int top = -1;
int arr[100];

void append(int data) {
    top++;
    arr[top] = data;
}

void pop() { 
    printf("%d ",arr[top]);
    top--;
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

    pop();
    
    return 0;
}