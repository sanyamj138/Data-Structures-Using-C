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

void anode(int ele) {
    struct demo * r = (struct demo *) malloc (sizeof(struct demo));
    struct demo * p = head;
    
    while(p->next->data != ele) {
        if(p->next == head)
            return;
        p = p->next;
    }
    r = p->next;
    p->next = r->next;
    free(r);
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

    printf("Enter position: ");
    scanf("%d", &data);
    
    anode(data);

    p = head;
    
    while(p->next != head) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("%d ", p->data);

    return 0;
}