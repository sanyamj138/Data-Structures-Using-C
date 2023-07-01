#include<stdio.h>
#include<stdlib.h>

struct demo {
    int data;
    struct demo *next;
};

int main() {
    struct demo *p;

    p = (struct demo *) malloc (sizeof(struct demo));

    scanf("%d", &p->data);
    p->next = '/0';

    printf("%d", p->data);

    return 0;
}