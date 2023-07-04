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

void reverse() {
    struct demo *p = (struct demo *) malloc (sizeof(struct demo)); 
    struct demo *cur = head;
    struct demo *prev = (struct demo *) malloc (sizeof(struct demo)); 
    struct demo *r = cur->next;
    p = '\0';
    cur->next = p;

    while (r != '\0') {
        prev = cur;
        cur = r;
        r = r->next;
        cur->next = prev;
    }
    head = cur;
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

    reverse();

    p = head;
    
    while(p != '\0') {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}