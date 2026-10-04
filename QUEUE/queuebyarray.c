// QUEUE IMPLEMENTATION USING ARRAY

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue[MAX];
int front , rear;
void empty(){
    front =-1;
    rear=-1;
    return;
}
void inqueue(int ele){
    if (rear==MAX-1){
        printf("\n queue is full");
        return;
    }
    if(front==-1 && rear==-1){
        front=rear=0;
    }else{
        rear++;
    }
    queue[rear]=ele;
    return;
}
void dequeue(){
    if(front==-1 && rear==-1 || front>rear){
        printf("\n queue is empty");
        return;
    }
    printf("\n  %d element is deleted",queue[front]);
    front++;
    if(front>rear){
        front=rear=-1;
    }
    return;
}
void peek(){
    if(front==-1 && rear==-1){
        printf("\n queue is empty");
        return;
    }
    printf("\n %d",queue[front]);
}
void display(){
    int i;
    if(front==-1 && rear==-1){
        printf("\n queue is empty");
        return;
    }
    for(i=front; i<=rear; i++){
        printf("\n %d=",queue[i]);
    }
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
            printf("\n enter the element to be inserted:");
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

        default:
            printf("\n invalid choice");
        }
    }
}