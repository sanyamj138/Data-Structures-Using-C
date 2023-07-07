#include<stdio.h>
#include<stdlib.h>

struct node *start = NULL;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

void append(int data){
    struct node * p = (struct node *) malloc (sizeof(struct node));
    p->data = data;

    if(start == NULL) {
        start = p;
        start->right = NULL;
        start->left = NULL;
        return;
    }    

    struct node *root = start;

    while(root->right != NULL || root->left != NULL) {
        if(root->data > p->data) {
            root = root->left;
        }
        else if(root->data < p->data) {
            root = root->right;
        }
    }

    if(root->data < p->data) {
        root->right = p;
        root = root->right;
    }
    else {
        root->left = p;
        root = root->left;
    }

    p->left = NULL;
    p->right = NULL;
}

void display(struct node * p) {
    if(p == NULL) 
    return;
    display(p->left); 
    printf("%d ", p->data);
    display(p->right);
}   

int main() {
    int i, size;
    int data;

    printf("Enter the number of elements you want to enter: ");
    scanf("%d", &size);

    for(i = 0; i < size; i++) {
        scanf("%d", &data);
        append(data);
    }

    display(start);

    return 0;
}