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

int searching(int ele) {
    struct demo *p = head; 
    
    while(p != '\0') {
        if(p->data == ele) 
        return 1;
        p = p->next;
    }
    return 0;
}

int main() {
    struct demo *p;
    int i, size, ele;
    int data;
    p = (struct demo *) malloc (sizeof(struct demo));

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++) {
        scanf("%d", &data);
        append(data);
    }

    printf("Enter element you want to search: ");
    scanf("%d",&ele);

    if(searching(ele))
        printf("Element Found");
    else
        printf("Element Not Found");

    return 0;
}