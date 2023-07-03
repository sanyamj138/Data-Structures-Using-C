#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node * next;
    struct node * prev;
};

struct node * head = NULL;

void append(int data) {
    struct node * p = (struct node*) malloc (sizeof(struct node));

    p->data = data;

    if(head == NULL) {
        p->next = head;
        head = p;
        head->prev = '\0';
        head->next = '\0';
        return;
    }

    struct node * r = head;

    p->next = '\0';

    while(r->next != '\0')
        r = r->next;

    p->prev = r;
    r->next = p;
}

void particular(int ele) {
    struct node * r = head;
    struct node * p;
    struct node * c;

    while(r->next->data != ele) {
        r = r->next;
    }
    
    p = r->next->next;
    c = r->next;
    r->next = p;
    p->prev = r->next;

    free(c);
}

int main() {

    struct node *p;
    int i, size;
    int data;
    int ele;

    p = (struct node *) malloc (sizeof(struct node));

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++) {
        scanf("%d", &data);
        append(data);
    }

    printf("Enter the element you want to delete: ");
    scanf("%d", &ele);

    particular(ele);

    p->data = head->data;
    p->next = head->next;

    while(p != '\0') {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}