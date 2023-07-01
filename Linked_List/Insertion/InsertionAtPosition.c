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

void insertAtPosition(int data, int i) {
    struct demo *p = (struct demo *) malloc (sizeof(struct demo)); 
    p->data = data;

    struct demo *r = head;

    while(i-1 > 0) {
        r = r->next;
        i--;
    }
    p->next = r->next;
    r->next = p;
}

int main() {
    struct demo *p;
    int i, size;
    int data;
    int pos;

    p = (struct demo *) malloc (sizeof(struct demo));

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++) {
        scanf("%d", &data);
        append(data);
    }

    printf("Enter the number you want to add: ");
    scanf("%d", &data);

    printf("Enter the position you want to add the number on: ");
    scanf("%d", &pos);

    insertAtPosition(data, pos-1);

    p->data = head->data;
    p->next = head->next;
    
    while(p != '\0') {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}