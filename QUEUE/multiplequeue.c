// MULTIPLE QUEUE

#include<stdio.h>
#define MAX 10
int QUEUE[MAX];
int rearA=-1, frontA=-1;
int rearB=MAX, frontB=MAX;

void insertA(int val){
    if(rearA==rearB-1){
        printf("\n overflow");
    }
    else{
        if(rearA==-1 && frontA==-1){
            rearA=frontA=0;
            QUEUE[rearA]=val;
        }else{
            QUEUE[++rearA]=val;
        }
    }
}

int deleteA(){
    int val;
    if(frontA==-1){
        printf("\n underflow");
        return -1;
    }else{
        val=QUEUE[frontA];
        frontA++;
        if(frontA>rearA)
            frontA=rearA=-1;
        return val;
    }
}

void display_queueA(){
    int i;
    if(frontA==-1)
        printf("\n QUEUE A IS EMPTY");
    else{
        printf("\n QUEUE A elements:");
        for(i=frontA; i<=rearA; i++)
            printf("\t %d",QUEUE[i]);
    }
}

void insertB(int val){
    if(rearA==rearB-1){
        printf("\n overflow");
    }
    else{
        if(rearB==MAX && frontB==MAX){
            rearB=frontB=MAX-1;
            QUEUE[rearB]=val;
        }else{
            QUEUE[--rearB]=val;
        }
    }
}

int deleteB(){
    int val;
    if(frontB==MAX){
        printf("\n underflow");
        return -1;
    }
    else{
        val=QUEUE[frontB];
        frontB--;
        if(frontB<rearB)
            frontB=rearB=MAX;
        return val;
    }
}

void display_queueB(){
    int i;
    if(frontB==MAX)
        printf("\n QUEUE B IS EMPTY");
    else{
        printf("\n QUEUE B elements:");
        for(i=frontB; i>=rearB; i--)
            printf("\t %d",QUEUE[i]);
    }
}

int main(){
    int choice, val;

    while(1){
        printf("\n\n ---- DOUBLE QUEUE (2 QUEUES IN 1 ARRAY) MENU ----");
        printf("\n 1. Insert in Queue A");
        printf("\n 2. Delete from Queue A");
        printf("\n 3. Display Queue A");
        printf("\n 4. Insert in Queue B");
        printf("\n 5. Delete from Queue B");
        printf("\n 6. Display Queue B");
        printf("\n 7. Exit");
        printf("\n Enter your choice: ");
        scanf("%d", &choice);

        switch(choice){
            case 1:
                printf("\n enter value to insert in Queue A: ");
                scanf("%d", &val);
                insertA(val);
                break;
            case 2:
                val = deleteA();
                if(val != -1)
                    printf("\n deleted value from Queue A: %d", val);
                break;
            case 3:
                display_queueA();
                break;
            case 4:
                printf("\n enter value to insert in Queue B: ");
                scanf("%d", &val);
                insertB(val);
                break;
            case 5:
                val = deleteB();
                if(val != -1)
                    printf("\n deleted value from Queue B: %d", val);
                break;
            case 6:
                display_queueB();
                break;
            case 7:
                return 0;
            default:
                printf("\n wrong choice");
        }
    }

    return 0;
}