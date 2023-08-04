#include<stdio.h>
#include<stdlib.h>

struct node * start = NULL;
struct node *root = NULL;

struct node {
    int data;
    struct node *left;
    struct node *right;
};

void append(int data){
    struct node * p = (struct node *) malloc (sizeof(struct node));

    p->data = data;
    p->left = NULL;
    p->right = NULL;

    if(start == NULL) {
        start = p;
        return;
    }
        
    root = start;

    while(root != NULL) {
        if(root->data < p->data) {
            root = root->right;
        }
        else {
            root = root->left;
        }
    }
    root = p;

    // while(root->right != NULL || root->left != NULL) {
    //     if(root->data < p->data) {
    //         root = root->right;
    //     }
    //     else {
    //         root = root->left;
    //     }
    // }
    // if(root->data < p->data) {
    //     root->right = p;
    // }
    // else {
    //     root->left = p;
    // }
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
