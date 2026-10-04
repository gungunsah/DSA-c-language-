// STACK IMPLEMENTATION USING LINKED LIST

#include<stdio.h>
#include<stdlib.h>
typedef struct slink
{
    int info;
    struct slink *next;
}stack;

stack *top;
void empty()
{
    top=NULL;
    return;
}
void push(int ele)
{
    stack *ptr;
    ptr=(stack*)malloc(sizeof(stack));
    ptr->info=ele;
    if(top==NULL)
    {
        ptr->next=NULL;
        top=ptr;
        return;
    }
    ptr->next=top;
    top=ptr;
    return;
}
void pop(){
    stack *ptr;
    if(top==NULL)
    {
        printf("\n stcak is empty");
        return;
    }
    ptr=top;
    top=ptr->next;
    printf("\n %d element is deleted",ptr->info);
    free(ptr);
    return;
}
void display(){
    stack *ptr;
    if(top==NULL)
    {
        printf("\n stack is empty");
        return;
    }
    ptr=top;
    while(ptr!=NULL)
    {
        printf("\n %d=",ptr->info);
        ptr=ptr->next;
    }
    return ;
}
void peek(){
    stack *ptr;
    if(top==NULL)
    {
        printf("\n stack is empty");
        return ;
    }
    ptr=top;
    printf("\n %d=",ptr->info);
    return;
}
void main(){
    int ch, ele;
    empty();
    while (1){
        printf("\n 1 push");
        printf("\n 2 pop");
        printf("\n 3 peek");
        printf("\n 4 display");
        printf("\n 5 exit");
        printf("\n enter your choice: ");
        scanf("%d", &ch);
        switch (ch)
        {
            case 1:
                printf("\n enter the element: ");
                scanf("%d", &ele);
                push(ele);
                break;

            case 2:
                pop();
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