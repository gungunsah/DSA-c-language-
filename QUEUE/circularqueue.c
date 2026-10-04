// CIRCULAR QUEUE

#include<stdio.h>
#include<stdlib.h>
#define MAX 10
int queue [MAX];
int val;
int front, rear;
void empty(){
    front = rear = -1;
}
void insert(int ele){
    if( front==0 && rear==MAX-1){
        printf("\n queue is full");
        return;
    }
    if(front==-1 && rear==-1){
        front=rear=0;
    }
    else if(rear==MAX-1 && front!=0){
        rear=0;
    }else{
        rear++;
    }
    queue[rear]=ele;
}
void delete(){
    if(front==-1){
        printf("\n queue is empty");
        return;
    }
    val=queue[front];
    if(front=rear){
        front=rear=-1;
    }else{
        if(front==MAX-1){
            front=0;
    }else{
        front=front+1;
    }
}
    printf("\n % element is deleted",val);
}
void peek(){
    if(front==-1 && rear==-1){
        printf("\n queue is empty");
        return;
    }
    printf("\n %d ",queue[front]);
}
void display(){
    int i;   // <-- declare karo
    if(front==-1 && rear==-1){
        printf("\n queue is empty");
        return;
    }
    if(front<=rear){
        for(i=front; i<=rear; i++){
            printf("\n %d",queue[i]);
        }
    }else{
        for(i=front; i<MAX; i++){
            printf("\n %d",queue[i]);
        }
        for(i=0; i<=rear; i++){
            printf("\n %d",queue[i]);
        }
    }
}
void main(){
    int ele,ch;
    empty();
    while(1){
        printf("\n 1 insert");
        printf("\n 2 delete");
        printf("\n 3 peek");
        printf("\n 4 display");
        printf("\n 5 exit");
        printf("\n enter your choice:");
        scanf("%d",&ch);
        switch(ch){
            case 1:
                printf("\n enter the element for insert:");
                scanf("%d",&ele);
                insert(ele);
                break;

            case 2:
                delete();
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