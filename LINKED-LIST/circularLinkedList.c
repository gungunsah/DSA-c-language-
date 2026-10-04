// CIRCULAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>
typedef struct clink
{
    int info;
    struct clink *next;
}node;

node *head;
void empty(){
    head=NULL;
}

// ADD NODE AT BEGINING
void addNodeAtBeg(int ele){
    node *ptr,*ptr1;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=ele;
    if(head==NULL)
    {
      ptr->next=ptr;
      head=ptr;
      return;
    }
    ptr1=head;
    while(ptr1->next!=head){
        ptr1=ptr1->next;
    }
    ptr->next=head;
    ptr1->next=ptr;
    head=ptr;
    return;
}

// ADD NODE AT LAST
void AddNodeAtLast(int ele){
    node*ptr,*ptr1;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=ele;
    if(head==NULL)
    {
        ptr->next=ptr;
        head=ptr;
        return;
    }
    ptr1=head;
    while(ptr1->next!=head){
      ptr1=ptr1->next;
    }
    ptr->next=head;
    ptr1->next=ptr;
    return;
}

// ADD NODE AFTER AN ELEMENT
void AddNodeAfterElement(int ele,int after){
    node *ptr,*ptr1;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=ele;
    if(head==NULL){
        printf("\n linked lis is empty");
        free(ptr);
        return ;
    }
    ptr1=head;
    while(ptr1->next!=head){
        if(ptr1->info==after){
            ptr->next=ptr1->next;
            ptr1->next=ptr;
            return;
        }
        ptr1=ptr1->next;
    }
    if(ptr1->info==after){
        ptr->next=ptr1->next;
        ptr1->next=ptr;
        return;
    }else{
        printf("\n %d element is not found in linked list",after);
        free(ptr);
        return;
    }
}

// ADD PARTICULAR NODE
void ADDParticularNode(int ele,int no){
    int i=1;
    node *ptr,*ptr1;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=ele;
    if(head==NULL){
        printf("\n linked list is empty");
        free(ptr);
        return;
    }
    ptr1=head;
    while(ptr1->next!=head){
        if(i==no){
            ptr->next=ptr1->next;
            ptr1->next=ptr;
            return;
        }
        ptr1=ptr1->next;
        i++;
    }
    if(i==no){
        ptr->next=ptr1->next;
        ptr1->next=ptr;
        return;
    }else{
        printf("\n %d element is not found",no);
        free(ptr);
        return;
    }
}

// DELETE FROM BEGINING
void DeleteFromBeg()
{
    node *ptr,*ptr1;
    if(head==NULL){
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    if(ptr->next==ptr){
        printf("\n %d node is delete",ptr->info);
        head=NULL;
        free(ptr);
        return;
    }
    ptr1=head;
    while(ptr1->next!=head){
        ptr1=ptr1->next;
    }
    ptr1->next=ptr->next;
    head=ptr->next;
    printf("\n %d node is deleted",ptr->info);
    free(ptr);
    return;
}

// DELETE FROM LAST
void DeleteFromLast(){
    node *ptr,*ptr1;
    if(head==NULL){
        printf("\n linked list empty");
        return ;
    }
    ptr=head;
    if(ptr->next==ptr){
        printf("\n %d node is deleted",ptr->info);
        head=NULL;
        free(ptr);
        return;
    }
    while(ptr->next->next!=head){
        ptr=ptr->next;
    }
    ptr1=ptr->next;
    ptr->next=head;
    printf("\n %d node is deleted",ptr1->info);
    free(ptr1);
    return;
}

// SEARCH NODE
void SearchNode(int ele){
    node *ptr;
    if(head==NULL){
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    while(ptr->next!=head){
        if(ptr->info==ele){
            printf("\n %d is found in the list",ele);
            return;
        }
        ptr=ptr->next;
    }
    if(ptr->info==ele){
        printf("\n %d is found in the list",ele);
        return;
    }else{
        printf("\n %d element is not found",ele);
        return;
    }
}

// DISPLAY ALL THE NODE
void Display(){
    node *ptr;
    if(head==NULL){
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    while(ptr->next!=head){
        printf("\n %d=",ptr->info);
        ptr=ptr->next;
    }
    printf("\n %d",ptr->info);
    return;
}

// COUNT THE NODE NUMBER
void CountNode(){
    node *ptr;
    int i=0;
    if(head==NULL){
        printf("\n total number of node=%d",i);
        return;
    }
    ptr=head;
    i++;
    while(ptr->next!=head){
        i++;
        ptr=ptr->next;
    }
    printf("\n total number of node=%d",i);
    return;
}

// DELETE PARTICULAR NODE
void DeleteParticularNode(int ele){
    node *ptr,*ptr1;
    if(head==NULL){
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    if(ptr->info==ele){
        if(ptr->next==head){
            head=NULL;
        }else{
            ptr1=head;
            while(ptr1->next!=head){
                ptr1=ptr1->next;
            }
            ptr1->next=ptr->next;
            head=ptr->next;
        }
        printf("\n %d element is deleted",ptr->info);
        free(ptr);
        return;
    }
    while(ptr->next->next!=head){
        if(ptr->next->info==ele){
            ptr1=ptr->next;
            ptr->next=ptr1->next;
            printf("\n %d element is deleted",ptr1->info);
            free(ptr1);
            return;
        }
        ptr=ptr->next;
    }
    if(ptr->next->info==ele){
        ptr1=ptr->next;
        ptr->next=ptr1->next;
        printf("\n %d element is deleted",ptr1->info);
        free(ptr1);
        return;
    }
    printf("\n %d element is not found",ele);
    return;
}

// DELETE PARTICULAR NODE NUMBER
void DeleteParticularNodeNumber(int ele, int no){
    node *ptr, *ptr1;
    int i = 1;
    if(head==NULL){
        printf("\n linked list is empty");
        return;
    }
    ptr = head;
    if(ptr->info == ele){
        if(i == no){
            if(ptr->next==head){
                head = NULL;
            } else {
                ptr1 = head;
                while(ptr1->next != head){
                    ptr1 = ptr1->next;
                }
                head = ptr->next;
                ptr1->next = head;
            }
            printf("\n %d of element %d is deleted", no, ptr->info);
            free(ptr);
            return;
        }
        i++;
    }
    while(ptr->next->next != head){
        if(ptr->next->info == ele){
            if(i == no){
                ptr1 = ptr->next;
                ptr->next = ptr1->next;
                printf("\n %d of element %d is deleted", no, ptr1->info);
                free(ptr1);
                return;
            }
            i++;
        }
        ptr = ptr->next;
    }
    if(ptr->next->info == ele){
        if(i == no){
            ptr1 = ptr->next;
            ptr->next = ptr1->next;
            printf("\n %d of element %d is deleted", no, ptr1->info);
            free(ptr1);
            return;
        }
        i++;
    }
    printf("\n %d of element %d not found", no, ele);
    return;
}

int main(){
    int choice, ele, after, no;
    empty();

    while(1){
        printf("\n\n ---- CIRCULAR LINKED LIST MENU ----");
        printf("\n 1. Add node at beginning");
        printf("\n 2. Add node at last");
        printf("\n 3. Add node after an element");
        printf("\n 4. Add node at particular position");
        printf("\n 5. Delete from beginning");
        printf("\n 6. Delete from last");
        printf("\n 7. Search node");
        printf("\n 8. Display all nodes");
        printf("\n 9. Count nodes");
        printf("\n 10. Delete particular node (by value)");
        printf("\n 11. Delete particular occurrence of a node");
        printf("\n 12. Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("\n enter value: ");
                scanf("%d",&ele);
                addNodeAtBeg(ele);
                break;
            case 2:
                printf("\n enter value: ");
                scanf("%d",&ele);
                AddNodeAtLast(ele);
                break;
            case 3:
                printf("\n enter value and after which element: ");
                scanf("%d%d",&ele,&after);
                AddNodeAfterElement(ele,after);
                break;
            case 4:
                printf("\n enter value and position: ");
                scanf("%d%d",&ele,&no);
                ADDParticularNode(ele,no);
                break;
            case 5:
                DeleteFromBeg();
                break;
            case 6:
                DeleteFromLast();
                break;
            case 7:
                printf("\n enter value to search: ");
                scanf("%d",&ele);
                SearchNode(ele);
                break;
            case 8:
                Display();
                break;
            case 9:
                CountNode();
                break;
            case 10:
                printf("\n enter value to delete: ");
                scanf("%d",&ele);
                DeleteParticularNode(ele);
                break;
            case 11:
                printf("\n enter value and occurrence number: ");
                scanf("%d%d",&ele,&no);
                DeleteParticularNodeNumber(ele,no);
                break;
            case 12:
                return 0;
            default:
                printf("\n wrong choice");
        }
    }

    return 0;
}