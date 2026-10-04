// STACK IMPLEMENTATION USING ARRAY

#include<stdio.h>
#include<stdlib.h>
#define MAX 20
int stack[MAX],top;
void empty()
{
    top=-1;
    return;
};
void push(int ele)
{
  if(top==MAX-1)
  {
    printf("\n stack is overflow");
    return;
  }
  top++;
  stack[top]=ele;
  return;
}
void pop()
{
    if(top==-1)
    {
        printf("\n stack is overflow");
        return;
    }
    printf("\n %d elemnet is deleted",stack[top--]);
    return;
}
void peek()
{
    if(top==-1)
    {
        printf("\n stack is underflow");
        return;
    }
}
void display()
{
    int i;
    if(top==-1)
    {
        printf("\n stack is empty");
        return;
    }
    for(i=0; i<=top; i++)
    {
        printf("=%d",stack[i]);
    }
    return ;
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

