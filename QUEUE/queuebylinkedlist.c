// QUEUE IMPLENETATION USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>
typedef struct qlink
{
    int info;
    struct qlink *next;
}queue;
queue *front,*rear;
void empty(){
    front=NULL;
    rear=NULL;
    return;
}
void inqueue(int ele){
    queue *ptr;
    ptr=(queue*)malloc(sizeof(queue));
    ptr->info=ele;
    ptr->next=NULL;
    if(front==NULL && rear==NULL){
        front=rear=ptr;
 }
     else{
        rear->next=ptr;
        rear=ptr;
     }
     return;
}
void dequeue(){
    queue*ptr;
    if(front==NULL && rear==NULL){
        printf("\n queue is empty");
        return;
    }
    ptr=front;
    front=ptr->next;
    printf("\n %d element is deleted",ptr->info);
    free(ptr);
    return;
}
void peek(){
    queue *ptr;
    if(front==NULL && rear==NULL){
        printf("\n queue is empty");
        return;
    }
    ptr=front;
    printf("\n %d",ptr->info);
    return;
}
void display(){
    queue *ptr;
    if(front==NULL && rear==NULL){
        printf("\n queue is empty");
        return;
    }
    ptr=front;
    while(ptr!=NULL){
        printf("\n %d=",ptr->info);
        ptr=ptr->next;
    }
    return;
}
void main(){
    int ch,ele;
    empty();
    while(1){
        printf("\n 1 inqueue");
        printf("\n 2 dequeue");
        printf("\n 3 peek");
        printf("\n 4 display");
        printf("\n 5 exit");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch){ 

            case 1:
                printf("\n enter the element for the inqueue:");
                scanf("%d",&ele);
                inqueue(ele);
                break;

            case 2:
                dequeue();
                break;
            case 3:

               peek();
               break;

            case 4:
                display();
                break;

            case 5:
               exit(0);
               break;
               
            default:
                printf("\n invalid choice");
        }
    }
}