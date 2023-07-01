#include<stdio.h>
#include<stdlib.h>

struct demo {
    int data;
    struct demo *next;
};
    
    struct demo * head = NULL;

void append(int data) {
    struct demo *p = (struct demo *) malloc (sizeof(struct demo)); 
    p->data = data;

    if(head == NULL) {
        p->next = head;
        head = p;
        return;
    }

    p->next = '\0';

    struct demo * r = head; 

    while(r->next != '\0') {
        r = r->next;
    }
    r->next = p;
}

int min() {
    struct demo * p = (struct demo *) malloc (sizeof(struct demo));
    int mini = 32767;

    p->data = head->data;
    p->next = head->next;
    
    while(p != '\0') {
        if(p->data < mini) 
            mini = p->data;
        p = p->next;
    }

    return mini;
}

int main() {
    struct demo *p;
    int i, size;
    int data;
    int mini;

    p = (struct demo *) malloc (sizeof(struct demo));

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++) {
        scanf("%d", &data);
        append(data);
    }

    mini = min();

    printf("Minimum element in the linked list is %d.\n", mini);

    return 0;
}