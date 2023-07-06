#include<stdio.h>
#include<stdlib.h>

struct demo {
    int data;
    struct demo *next;
    struct demo * prev;
};

    struct demo * top = NULL;
    struct demo * end = NULL;

void append(int data) {
    struct demo *p = (struct demo *) malloc (sizeof(struct demo)); 
    p->data = data;

    if(top == NULL) {
        p->next = top;
        top = p;
        p->prev = end;
        return;
    }

    p->prev = top;
    top = top->next;
    p->next = top;
    top = p;
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

    p=top;
    
    while(p != end) {
        printf("%d ", p->data);
        p = p->prev;
    }

    return 0;
}