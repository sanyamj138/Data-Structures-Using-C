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

void sorting() {
    int temp;

    struct demo *p = head;
    struct demo *r = head;

    while(p != '\0') {
        while(r != '\0') {
            if(p->data > r->data) {
                temp = p->data;
                p->data = r->data;
                r->data = temp;
            }

            r = r->next;
        }
        p = p->next;
        r = p;
    }
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

    sorting();

    p->data = head->data;
    p->next = head->next;
    
    while(p != '\0') {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}