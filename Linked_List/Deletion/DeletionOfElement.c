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

void deletionOfElement(int ele) {
    struct demo * r = (struct demo *) malloc (sizeof(struct demo));
    struct demo * p = head;
    
    while(p->next->data != ele) {
        if(p->next == '\0')
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
    int data, ele;
    p = (struct demo *) malloc (sizeof(struct demo));

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++) {
        scanf("%d", &data);
        append(data);
    }

    printf("Enter element you want to delete: ");
    scanf("%d",&ele);

    deletionOfElement(ele);

    p->data = head->data;
    p->next = head->next;
    
    while(p != '\0') {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}