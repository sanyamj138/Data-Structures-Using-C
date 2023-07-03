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

void between(int data, int  pos) {
    struct node *p = (struct node *) malloc (sizeof(struct node)); 
    p->data = data;

    struct node * r = head;

    while(pos - 1 > 0) {
        r = r->next;
        pos--;
    }

    p->next = r->next;
    r->next->prev = p;
    r->next = p;
    p->prev = r;
}

int main() {

    struct node *p;
    int i, size;
    int data;
    int num, pos;

    p = (struct node *) malloc (sizeof(struct node));

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++) {
        scanf("%d", &data);
        append(data);
    }

    printf("Enter the number you want to add: ");
    scanf("%d",&num);

    printf("Enter the position you want to add the node: ");
    scanf("%d",&pos);

    between(num, pos-1);
    
    p = head;

    while(p != '\0') {
        printf("%d ", p->data);
        p = p->next;
    }

    return 0;
}