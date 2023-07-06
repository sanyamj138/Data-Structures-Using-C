#include<stdio.h>
#include<stdlib.h>

struct demo {
    int data;
    struct demo *next;
};

    struct demo * front = NULL;
    struct demo * rear = NULL;

void append(int data) {
    struct demo *p = (struct demo *) malloc (sizeof(struct demo)); 
    p->data = data;

    if(rear == NULL) {
        front = p;
        rear = p;
        return;
    }

    rear->next = p;
    rear = p;
}

void enqueue(int data) {
    struct demo *p = (struct demo *) malloc (sizeof(struct demo)); 
    p->data = data;

    rear->next = p;
    rear = p;
}

void dequeue() {
    struct demo *p = front;
    printf("%d ", p->data);
    front = front->next;
}

int main() {
    struct demo *p;
    int i, size;
    int data;
    p = (struct demo *) malloc (sizeof(struct demo));

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++) {
        scanf("%d", &data);
        append(data);
    }

    printf("Enter the number you want to add in the queue: ");
    scanf("%d", &data);

    enqueue(data);
    dequeue();
    dequeue();

    return 0;
}