// PRIORITY QUEUE

#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    int priority;
    struct node *next;
};

struct node *start = NULL;

struct node *insert(struct node *start){
    int val, pri;
    struct node *ptr, *p;

    ptr = (struct node*) malloc(sizeof(struct node));
    printf("\n enter the value and its priority: ");
    scanf("%d%d", &val, &pri);

    ptr->data = val;
    ptr->priority = pri;

    if(start==NULL || pri<start->priority){
        ptr->next = start;
        start = ptr;
    }
    else{
        p = start;
        while(p->next!=NULL && p->next->priority<=pri)
            p = p->next;
        ptr->next = p->next;
        p->next = ptr;
    }

    return start;
}

struct node *delete(struct node *start){
    struct node *ptr;
    if(start==NULL){
        printf("\n underflow");
        return start;
    }
    else{
        ptr=start;
        printf("\n deleted value is:%d",ptr->data);
        start=start->next;
        free(ptr);
    }
    return start;
}

void display(struct node *start){
    struct node *ptr;
    ptr=start;
    if(start==NULL)
        printf("\n empty queue");
    else{
        printf("\n priority queue is:\n");
        while(ptr!=NULL){
            printf("\t %d [priority=%d]",ptr->data,ptr->priority);
            ptr=ptr->next;
        }
    }
}

int main(){
    int choice;

    while(1){
        printf("\n\n ---- PRIORITY QUEUE MENU ----");
        printf("\n 1. Insert");
        printf("\n 2. Delete");
        printf("\n 3. Display");
        printf("\n 4. Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                start = insert(start);
                break;
            case 2:
                start = delete(start);
                break;
            case 3:
                display(start);
                break;
            case 4:
                exit(0);
            default:
                printf("\n wrong choice");
        }
    }

    return 0;
}