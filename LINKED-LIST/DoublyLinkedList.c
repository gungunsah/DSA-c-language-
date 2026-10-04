#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef struct DLink
{
    struct DLink *prev;
    int info;
    struct DLink *next;
}node;

node *head ,*tail;
void empty()
{
    head=NULL;
    tail=NULL;
    return;
}

void insert_at_first(int ele)
{
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=ele;

    if(head==NULL)
    {
        ptr->next=NULL;
        ptr->prev=NULL;
        head=ptr;
        tail=ptr;
        return;
    }
    ptr->prev=NULL;
    ptr->next=head;
    head->prev=ptr;
    head=ptr;
    return;
}


void insert_at_last(int ele)
{
    node *ptr;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=ele;
    ptr->next=NULL;
    
    if(head==NULL)
    {
        ptr->prev=NULL;
        head=ptr;
        tail=ptr;
        return;
    }
    ptr->prev=tail;
    tail->next=ptr;
    tail=ptr;
    return;
}


void insert_after_ele(int ele,int search)
{
    node *ptr, *ptr1;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=ele;

    if(head==NULL)
    {
        printf("\n List is Empty!");
        free(ptr);
        return;
    }

    ptr1=head;
    while(ptr1->next!=NULL)
    {
        if(ptr1->info==search)
        {
            ptr->next=ptr1->next;
            ptr1->next->prev=ptr;
            ptr->prev=ptr1;
            ptr1->next=ptr;
            return;
        }
        ptr1=ptr1->next;
    }
    if(ptr1->info==search)
    {
        ptr->next=ptr1->next;
        ptr->prev=ptr1;
        ptr1->next=ptr;
        tail=ptr;
        return;
    }
    printf("%d element not found",ele);
    free(ptr);
    return;
}




void insert_after_particular_node_no(int ele,int no)
{
    int i=0;
    node *ptr, *ptr1;
    ptr=(node *)malloc(sizeof(node));
    ptr->info=ele;

    if(head==NULL)
    {
        printf("\n List is Empty!");
        free(ptr);
        return;
    }

    ptr1=head;
    while(ptr1->next!=NULL)
    {
        ++i;
        if(i==no)
        {
            ptr->next=ptr1->next;
            ptr1->next->prev=ptr;
            ptr->prev=ptr1;
            ptr1->next=ptr;
            return;
        }
        ptr1=ptr1->next;
    }
    i++;
    if(i==no)
    {
        ptr->next=ptr1->next;
        ptr->prev=ptr1;
        ptr1->next=ptr;
        tail=ptr;
        return;
    }
    printf("%d node no not found",no);
    free(ptr);
    return;
}


void delete_from_first()
{
    node *ptr;
    if(head==NULL && tail==NULL)
    {
        printf("\n list is empty!");
        return;
    }

    ptr=head;
    if(head==tail)
    {
        head=NULL;
        tail=NULL;
    }
    else
    {
        ptr->next->prev=NULL;
        head=ptr->next;
    }
    printf("\n %d deleted",ptr->info);
    free(ptr);
    return;
}


void delete_from_last()
{
    node *ptr;
    if(head==NULL)
    {
        printf("\n list is empty!");
        return;
    }

    ptr=tail;
    if(head==tail)
    {
        head=NULL;
        tail=NULL;
    }
    else
    {
        ptr->prev->next=NULL;
        tail=ptr->prev;
    }
    printf("\n %d deleted",ptr->info);
    free(ptr);
    return;
}



void delete_given_element(int ele)
{
    node *ptr, *ptr1;
    if(head==NULL)
    {
        printf("\n list is empty!");
        return;
    }
    
    ptr=head;
    if(ptr->info==ele)
    {
       if(head==tail)
       {
          head=NULL;
          tail=NULL;
       }
       else
       {
          ptr->next->prev=NULL;
          head=ptr->next;
       } 
       printf("\n %d deleted",ptr->info);
       free(ptr);
       return;
    }
    while(ptr->next->next!=NULL)
    {
        if(ptr->next->info==ele)
        {
           ptr1=ptr->next;
           ptr->next=ptr1->next;
           ptr1->next->prev=ptr;
           printf("\n %d deleted",ptr1->info);
           free(ptr1);
           return; 
        }
        ptr=ptr->next;
    }
    if(ptr->info==ele)
    {
        ptr1=ptr->next;
        ptr->next=NULL;
        tail=ptr;
        printf("\n %d deleted",ptr1->info);
        free(ptr1);
        return;
    }
    printf("\n %d Element not found",ele);
    return;
}
void delete_particular_node_no(int no)
{
    int i=1;
    node *ptr, *ptr1;
    if(head==NULL && tail==NULL)
    {
        printf("\n list is empty!");
        return;
    }

    ptr=head;
    if(i==no)
    {
       if(head==tail)
       {
          head=NULL;
          tail=NULL;
       }
       else
       {
          ptr->next->prev=NULL;
          head=ptr->next;
       } 
       printf("\n %d deleted",ptr->info);
       free(ptr);
       return;
    }
    while(ptr->next!=NULL)
    {
        i++;
        if(i==no)
        {
           ptr1=ptr->next;
           ptr->next=ptr1->next;
           ptr1->next->prev=ptr;
           printf("\n %d deleted",ptr1->info);
           free(ptr1);
           return; 
        }
        ptr=ptr->next;
    }
    i++;
    if(i==no)
    {
        ptr1=ptr->next;
        ptr->next=NULL;
        tail=ptr;
        printf("\n %d deleted",ptr1->info);
        free(ptr1);
        return;
    }
    printf("\n %d node number not found",no);
    return;
}



void DisplayTopToBottom()
{
    node *ptr;
    if(head==NULL)
    {
        printf("\n list is empty!");
        return;
    }
    ptr=head;
    while(ptr!=NULL)
    {
        printf("\n %d= ",ptr->info);
        ptr=ptr->next;
    }
    return;
}



void DisplayBottomToTop()
{
    node *ptr;
    if(head==NULL)
    {
        printf("\n list is empty!");
        return;
    }
    ptr=tail;
    while(ptr!=NULL)
    {
        printf("\n %d= ",ptr->info);
        ptr=ptr->prev;
    }
    return;
}



void sum()
{
node *ptr;
int s=0;
if(head==NULL)
{
printf("\n Linkedlist is Empty");
return;
}
ptr=head;
while(ptr!=NULL)
{
 s=s+ptr->info;
 ptr=ptr->next;

}
 printf("\n sum of total element =%d",s);
 return;
}



void count()
{
node *ptr;
int i=0;
if(head==NULL)
{
 printf("\n Linkedlist is Empty");
 return;
}
ptr=head;
while(ptr!=NULL)
{
 i++;
 ptr=ptr->next;
}
printf("\n Total node no=%d",i);
}



void Search(int ele)
{
 node *ptr;
    if(head==NULL)
{
 printf("\n Linkedlist is Empty");
 return;
}
ptr=head;
while(ptr!=NULL) 
{
if(ptr->info==ele)
{
printf("\n %d element is found",ptr->info);
return;
}
ptr=ptr->next;
}
printf("\n %d element is not found",ele);
return;
}





int main()
{
int ch,ele,no,search;
empty();
while(1)
{
    printf("\n 1 insert at first");
printf("\n 2 insert at last");
printf("\n 3 insert after element");
printf("\n 4 insert after a node no");
printf("\n 5 delete from first");
printf("\n 6 delete from last");
printf("\n 7 delete given element");
printf("\n 8 delete particular node number");
printf("\n 9 Display top to bottom");
printf("\n 10 Display bottom to top");
printf("\n 11 Sum of all elements ");
printf("\n 12 Count");
printf("\n 13 Search");
printf("\n 14 Exit");
printf("\n Enter your choice");
scanf("%d",&ch);
switch(ch)
{
 case 1:
 printf("\n Enter Element");
 scanf("%d",&ele);
 insert_at_first(ele);
 break;

 case 2:
 printf("\n Enter Element");
 scanf("%d",&ele);
 insert_at_last(ele);
 break;

 case 3:
 printf("\n Enter Element and search element");
 scanf("%d%d",&ele,&search);
 insert_after_ele(ele,search);
 break;
 
 case 4:
 printf("\n Enter Element and Node Number");
 scanf("%d%d",&ele,&no);
 insert_after_particular_node_no(ele,no);
 break;

 case 5:
 delete_from_first();
 break;

 case 6:
 delete_from_last();
 break;

 case 7:
 printf("\n Enter Element");
 scanf("%d",&ele);
 delete_given_element(ele);
 break;

 case 8:
 printf("\n Enter node number");
 scanf("%d",&no);
 delete_particular_node_no(no);
 break;

 case 9:
 DisplayTopToBottom();
 break;

 case 10:
 DisplayBottomToTop();
 break;

 case 11:
 sum();
 break;


 case 12:
 count();
 break;

 case 13:
 printf("\n Enter Element");
 scanf("%d",&ele);
 Search(ele);
 break;

 case 14:
 exit(0);
 break;

 default:
 printf("\n Invalid choice");
}
}
return 0;
}