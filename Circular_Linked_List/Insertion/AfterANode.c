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
        p->next = head;
        return;
    }

    p->next = head;

    struct demo * r = head; 

    while(r->next != head) {
        r = r->next;
    }
    r->next = p;
}

void position(int data, int i) {
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

    p = (struct demo *) malloc (sizeof(struct demo));

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++) {
        scanf("%d", &data);
        append(data);
    }

    printf("Enter the number you want to add: ");
    scanf("%d", &data);

    printf("Enter the position: ");
    scanf("%d", &i);

    position(data, i-1);
    p = head;
    
    while(p->next != head) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("%d ", p->data);

    return 0;
}