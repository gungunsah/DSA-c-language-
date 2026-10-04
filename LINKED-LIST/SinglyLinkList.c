#include<stdio.h>
#include<stdlib.h>
typedef struct slink
{
    int info;
    struct slink *next;
}node;
   node*head;
   void empty()
{
    head = NULL;
    return;
}

void AddNodeAtBeg(int ele)
{
    node*ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=ele;
    if(head==NULL)
    {
        ptr->next=NULL;
        head=ptr;
        return;
    }
    ptr->next=head;
    head=ptr;
    return;
}

void AddNodeAtEnd(int ele)
{
    node*ptr,*ptr1;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=ele;
    ptr->next=NULL;
    if(head==NULL)
    {
        head=ptr;
        return;
    }
    ptr1=head;
    while(ptr1->next!=NULL)
    {
        ptr1=ptr1->next;
    }
    ptr1->next=ptr;
    return;
}

void AddAfterAnElement(int ele,int after)
{
    node*ptr,*ptr1;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=ele;
    if(head==NULL)
    {
        printf("\n linked list is empty");
        free(ptr);
        return;
    }
    ptr1=head;
    while(ptr1->next!=NULL)
    {
        if(ptr1->info==after)
        {
            ptr->next=ptr1->next;
            ptr1->next=ptr;
            return;
        }
        ptr1=ptr1->next;
    }
    {
        if(ptr1->info==after)
        {
            ptr->next=ptr1->next;
            ptr1->next=ptr;
            return;
        }
        else{
            printf("\n %d element is not found",after);
            free(ptr);
            return;
        }
    }
}

void AddNodeAfterAnNodeNumber(int ele,int no)
{
    node*ptr,*ptr1;
    int i=1;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=ele;
    if(head==NULL)
    {
        printf("\n linked list is empty");
        free(ptr);
        return;
    }
    ptr1=head;
    while(ptr1->next!=NULL)
    {
        if(i==no)
        {
            ptr->next=ptr1->next;
            ptr1->next=ptr;
            return;
        }
        ptr1=ptr1->next;
        i++;
    }
    if(i==no)
    {
        ptr->next=ptr1->next;
        ptr1->next=ptr;
        return;
    }
    else{
        printf("\n %d node number is not found",no);
        free(ptr);
        return;
    }
}
 void DeleteNodeFromBeg()
 {
    node*ptr;
    if(head==NULL)
    {
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    head=ptr->next;
    printf("\n %d element is deleted",ptr->info);
    free(ptr);
    return;
 }

 void DeleteNodeFromEnd()
 {
    node*ptr,*ptr1;
    if(head==NULL)
    {
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    if(ptr->next==NULL)
    {
        head=NULL;
        printf("\n %d element is deleted",ptr->info);
        free(ptr);
        return;
    }
    while(ptr->next->next!=NULL)
    {
        ptr=ptr->next;
    }
    ptr1=ptr->next;
    ptr->next=NULL;
    printf("\n %d element is deleted",ptr1->info);
    free(ptr1);
    return;
 }

 void DeleteParticularElement(int ele)
 {
    node*ptr,*ptr1;
    if(head==NULL)
    {
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    if(ptr->info==ele)
    {
        head=ptr->next;
        printf("\n %d element is deleted",ptr->info);
        free(ptr);
        return;
    }
    while(ptr->next->next!=NULL)
    {
        if(ptr->next->info==ele)
        {
            ptr1=ptr->next;
            ptr->next=ptr1->next;
            printf("\n %d element is deleted",ptr1->info);
            free(ptr1);
            return;
        }
        ptr=ptr->next;
    }
    if(ptr->next->info==ele)
     {
        ptr1=ptr->next;
        ptr->next=NULL;
        printf("\n %d element is deleted",ptr1->info);
        free(ptr1);
        return;
     }
     printf("\n %d element is not found",ele);
     return;
 }
 
 void DeleteParticularNodeNumber(int no)
 {
    int i=1;
    node*ptr,*ptr1;
    if(head==NULL)
    {
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    if(i==no)
    {
        head=ptr->next;
        printf("\n %d element is deleted",ptr->info);
        free(ptr);
        return;
    }
    while(ptr->next->next!=NULL)
    {
        i++;
        if(i==no)
        {
            ptr1=ptr->next;
            ptr->next=ptr1->next;
            printf("\n %d element is deleted",ptr1->info);
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
        printf("\n %d element is deleted",ptr1->info);
        free(ptr1);
        return;
     }
     printf("\n %d element is not found",no);
     return;
 }
 
 void Display()
 {
    node*ptr;
    if(head==NULL)
    {
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    printf("\n Linked List is :");
    while(ptr!=NULL)
    {
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
 }

 void Search(int ele)
 {
    node*ptr;
    if(head==NULL)
    {
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    while(ptr!=NULL)
    {
        if(ptr->info==ele)
        {
            printf("\n %d element is found",ele);
            return;
        }
        ptr=ptr->next;
    }
    printf("\n %d element is not found",ele);
    return;
 }
  void Count()
  {
    node*ptr;
    int i=0;
    if(head==NULL)
    {
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    while(ptr!=NULL)
    {
        i++;
        ptr=ptr->next;
    }
    printf("\n total node number is %d",i);
    return;
  }

  void Reverse()
  {
    node*ptr,*ptr1,*head1=NULL;
    if(head==NULL)
    {
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    while(ptr!=NULL)
    {
        ptr1=(node*)malloc(sizeof(node));
        ptr1->info=ptr->info;
        ptr1->next=head1;
        head1=ptr1;
        ptr=ptr->next;
    }
    printf("\n element is reversed order \n");
    ptr=head1;
    while(ptr!=NULL)
    {
        printf("%d = ",ptr->info);
        ptr=ptr->next;
    }
    return;
  }

  int main()
  {
    int ch,ele,n;
    empty();
    while(1)
    {
        printf("\n 1 AddNodeAtBeg ");
        printf("\n 2 AddNodeAtEnd ");
        printf("\n 3 AddAfterAnElement");
        printf("\n 4 AddNodeAfterAnNodeNumber");
        printf("\n 5 DeleteNodeFromBeg");
        printf("\n 6 DeleteNodeFromEnd");
        printf("\n 7 DeleteParticularElement");
        printf("\n 8 DeleteParticularNodeNumber");
        printf("\n 9  Display");
        printf("\n 10 Search");
        printf("\n 11 Count");
        printf("\n 12 Reverse");
        printf("\n 13 Exit");
        printf("\n 14 Enter your choice:");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            printf("\n Enter element:");
            scanf("%d",&ele);
            AddNodeAtBeg(ele);
            break;
            case 2:
            printf("\n Enter element:");
            scanf("%d",&ele);
            AddNodeAtEnd(ele);
            break;
            case 3:
            printf("\n enter elemet and search element:");
            scanf("%d%d",&ele,&n);
             AddAfterAnElement(ele,n);
             break;
             case 4:
             printf("\n enter element & Node No.");
             scanf("%d%d",&ele,&n);
             AddNodeAfterAnNodeNumber(ele,n);
             break;
             case 5:
             DeleteNodeFromBeg();
             break;
             case 6:
             DeleteNodeFromEnd();
             break;
             case 7:
             printf("\n enter elemet for deletion:");
             scanf("%d",&ele);
             DeleteParticularElement(ele);
             break;
             case 8:
             printf("\n enter Node No. for deletion:");
             scanf("%d",&n);
             DeleteParticularNodeNumber(n);
             break;
             case 9:
             Display();
             break;
             case 10:
             printf("\n Enter element for search:");
             scanf("%d",&ele);
             Search(ele);
             break;
             case 11:
             Count();
             break;
             case 12:
             Reverse();
             break;
             case 13:
             exit(0);
             break;
             default:
             printf("\n invalid choice");

        }
    }
    return 0;
  }