

// DEQUE 

#include <stdio.h>
#define MAX 5
int deque[MAX];
int left = -1, right = -1;
void insert_right(){
    int val;
    printf("\n enter the value to be inserted:");
    scanf("%d", &val);

    if((left==0 && right==MAX-1) || (left==right+1)){
        printf("\n overflow");
        return;
    }

    if(left==-1){
        left=0;
        right=0;
    } else {
        if(right==MAX-1){
            right=0;
        } else {
            right=right+1;
        }
    }

    deque[right]=val;   
}

void insert_left(){
    int val;
    printf("\n enter the value to be inserted:");
    scanf("\n %d",&val);
    if((left==0 && right==MAX-1) || (left==right+1)){
        printf("\n overflow");
        return;
    }
    if(left==-1){
        left=0;
        right=0;
    }else{
        if(left==0)
            left=MAX-1;
        else
            left=left-1;
    }
    deque[left]=val;

}
void delete_left(){
    if(left==-1){
        printf("\n underflow");
        return ;
    }
    printf("\n the deleted element is %d",deque[left]);
    if(left==right){
        left=-1;
        right=-1;
    }
    else{
        if(left==MAX-1)
        left=0;
        else
        left=left+1;
    }
}
void delete_right(){
    if(left==-1){
        printf("\n underflow");
        return;
    }
    printf("\n the element deleted is %d",deque[right]);
    if(left==right){
        left=-1;
        right=-1;
    }
    else{
        if(right==0)
        right=MAX-1;
        else
        right=right-1;
    }
}
void display(){
    int front= left,rear=right;
    if(front==-1){
        printf("\n queue is empty");
        return;
    }
    printf("\n the elements of the queue are:\n");
    if(front<=rear){
        while(front<=rear){
            printf("%d",deque[front]);
            front++;
        }
    }
    else
{
    while(front<=MAX-1){
        printf("\n %d",deque[front]);
        front++;
    }
    front=0;
    while(front<=rear){
        printf("\n %d",deque[front]);
        front++;
    }
}
printf("\n");
}

int main(){
    int choice;

    while(1){
        printf("\n\n ---- DEQUE MENU ----");
        printf("\n 1. Insert from right");
        printf("\n 2. Insert from left");
        printf("\n 3. Delete from left");
        printf("\n 4. Delete from right");
        printf("\n 5. Display");
        printf("\n 6. Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                insert_right();
                break;
            case 2:
                insert_left();
                break;
            case 3:
                delete_left();
                break;
            case 4:
                delete_right();
                break;
            case 5:
                display();
                break;
            case 6:
                return 0;
            default:
                printf("\n wrong choice");
        }
    }

    return 0;
}