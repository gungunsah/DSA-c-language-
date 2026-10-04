// DOUBLY CIRCULAR LINKED LIST

#include<stdio.h>
#include<stdlib.h>
typedef struct dclink
{
    struct dclink *prev;
    int info;
    struct dclink *next;
}node;

node *head, *tail;
void empty(){
    head=NULL;
    tail=NULL;
    return;
}

// ADD NODE AT BEGINING
void AddNodeAtBeg(int ele){
    node*ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=ele;
    if(head==NULL){
        ptr->prev=ptr;
        ptr->next=ptr;
        head=ptr;
        tail=ptr;
        return;
    }
    ptr->next=head;
    ptr->prev=tail;
    head->prev=ptr;
    tail->next=ptr;
    head=ptr;
}

// ADD NODE AT LAST
void AddNodeAtLast(int ele){
    node*ptr;
    ptr=(node*)malloc(sizeof(node));
    ptr->info=ele;
    if(head==NULL){
        ptr->prev=ptr;
        ptr->next=ptr;
        head=ptr;
        tail=ptr;
        return;
    }
    ptr->prev=tail;
    ptr->next=head;
    head->prev=ptr;
    tail->next=ptr;
    tail=ptr;
    return;
}

// ADD NODE AFTER AN ELEMENT
void AddNodeAfterAnElement(int ele,int after){
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
        if(ptr1->info==after){
            ptr->next=ptr1->next;
            ptr->next->prev=ptr;
            ptr->prev=ptr1;
            ptr1->next=ptr;
            return;
        }
        ptr1=ptr1->next;
    }
    if(ptr1->info==after){
        ptr->next=ptr1->next;
        ptr->next->prev=ptr;
        ptr->prev=ptr1;
        ptr1->next=ptr;
        return;
    }
    printf("\n %d element is not found",after);
    free(ptr);
    return;
}

// ADD PARTICULAR NODE
void AddParticularNode(int ele,int no){
    node *ptr,*ptr1;
    int i=1;
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
            ptr->next->prev=ptr;
            ptr->prev=ptr1;
            ptr1->next=ptr;
            return;
        }
        ptr1=ptr1->next;
        i++;
    }
    if(i==no){
        ptr->next=ptr1->next;
        ptr->next->prev=ptr;
        ptr->prev=ptr1;
        ptr1->next=ptr;
        return;
    }
    printf("\n position %d is not found",no);
    free(ptr);
    return;
}

// DISPLAY/TRAVERSAL
void Display(){
    node *ptr;
    if(head==NULL){
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    while(ptr->next!=head){
        printf("%d ",ptr->info);
        ptr=ptr->next;
    }
    printf("\n %d",ptr->info);
    return;
}

// SEARCH
void SearchNode(int ele){
    node *ptr;
    if(head==NULL){
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    while(ptr->next!=head){
        if(ptr->info==ele){
            printf("\n %d is found",ele);
            return;
        }
        ptr=ptr->next;
    }
    if(ptr->info==ele){
        printf("\n %d is found",ele);
        return;
    }else{
        printf("\n %d element is not found",ele);
        return;
    }
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
    printf("\n total number of nodes=%d",i);
    return;
}

// DELETE NODE FROM BEGINING
void DeleteNodeFromBeg(){
    node *ptr;
    if(head==NULL){
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    if(head==tail){
        head=NULL;
        tail=NULL;
    }else{
        ptr->next->prev=ptr->prev;
        head=head->next;
        tail->next=head;
    }
    printf("\n %d element is deleted",ptr->info);
    free(ptr);
    return;
}

// DELETE NODE FROM LAST
void DeleteNodeFromLast(){
    node *ptr;
    if(head==NULL){
        printf("\n linked list is empty");
        return;
    }
    ptr=tail;
    if(head==tail){
        head=NULL;
        tail=NULL;
    }else{
        ptr->prev->next=ptr->next;
        tail=tail->prev;
        head->prev=tail;
    }
    printf("%d element is deleted",ptr->info);
    free(ptr);
    return;
}

// DELETE PARTICULAR ELEMENT
void DeleteParticularElement(int ele){
    node *ptr,*ptr1;
    if(head==NULL){
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    if(ptr->info==ele){
        if(head==tail){
            head=NULL;
            tail=NULL;
        }else{
            ptr->next->prev=tail;
            tail->next=ptr->next;
            head=ptr->next;
        }
        printf("\n %d element is deleted",ptr->info);
        free(ptr);
        return;
    }

    while(ptr->next->next!=head){
        if(ptr->next->info==ele){
            ptr1=ptr->next;
            ptr1->next->prev=ptr;
            ptr->next=ptr1->next;
            printf("\n %d element is deleted",ptr1->info);
            free(ptr1);
            return;
        }
        ptr=ptr->next;
    }
    if(ptr->next->info==ele){
        ptr1=ptr->next;
        ptr1->prev->next=head;
        head->prev=ptr;
        tail=ptr;
        printf("\n %d element is deleted",ptr1->info);
        free(ptr1);
        return;
    }
    printf("\n %d element is not found",ele);
    return;
}

// DELETE PARTICULAR NODE
void DeleteParticularNode(int ele,int no){
    node *ptr,*ptr1;
    int i=1;
    if(head==NULL){
        printf("\n linked list is empty");
        return;
    }
    ptr=head;
    if(ptr->info==ele){
        if(i==no){
            if(head==tail){
                head=NULL;
                tail=NULL;
            }else{
                ptr->next->prev=tail;
                tail->next=ptr->next;
                head=ptr->next;
            }
            printf("\n occurrence %d of element %d is deleted",no,ptr->info);
            free(ptr);
            return;
        }
        i++;
    }
    while(ptr->next->next!=head){
        if(ptr->next->info==ele){
            if(i==no){
                ptr1=ptr->next;
                ptr1->next->prev=ptr;
                ptr->next=ptr1->next;
                printf("\n %d of element %d is deleted",no,ptr1->info);
                free(ptr1);
                return;
            }
            i++;
        }
        ptr=ptr->next;
    }
    if(ptr->next->info==ele){
        if(i==no){
            ptr1=ptr->next;
            ptr1->prev->next=head;
            head->prev=ptr;
            tail=ptr;
            printf("\n %d of element %d is deleted",no,ptr1->info);
            free(ptr1);
            return;
        }
        i++;
    }
    printf("\n %d of element %d not found",no,ele);
    return;
}

int main(){
    int choice, ele, after, no;
    empty();

    while(1){
        printf("\n\n ---- DOUBLY CIRCULAR LINKED LIST MENU ----");
        printf("\n 1. Add node at beginning");
        printf("\n 2. Add node at last");
        printf("\n 3. Add node after an element");
        printf("\n 4. Add node at particular position");
        printf("\n 5. Display");
        printf("\n 6. Search node");
        printf("\n 7. Count nodes");
        printf("\n 8. Delete from beginning");
        printf("\n 9. Delete from last");
        printf("\n 10. Delete particular element");
        printf("\n 11. Delete particular occurrence of a node");
        printf("\n 12. Exit");
        printf("\n Enter your choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                printf("\n enter value: ");
                scanf("%d",&ele);
                AddNodeAtBeg(ele);
                break;
            case 2:
                printf("\n enter value: ");
                scanf("%d",&ele);
                AddNodeAtLast(ele);
                break;
            case 3:
                printf("\n enter value and after which element: ");
                scanf("%d%d",&ele,&after);
                AddNodeAfterAnElement(ele,after);
                break;
            case 4:
                printf("\n enter value and position: ");
                scanf("%d%d",&ele,&no);
                AddParticularNode(ele,no);
                break;
            case 5:
                Display();
                break;
            case 6:
                printf("\n enter value to search: ");
                scanf("%d",&ele);
                SearchNode(ele);
                break;
            case 7:
                CountNode();
                break;
            case 8:
                DeleteNodeFromBeg();
                break;
            case 9:
                DeleteNodeFromLast();
                break;
            case 10:
                printf("\n enter value to delete: ");
                scanf("%d",&ele);
                DeleteParticularElement(ele);
                break;
            case 11:
                printf("\n enter value and occurrence number: ");
                scanf("%d%d",&ele,&no);
                DeleteParticularNode(ele,no);
                break;
            case 12:
                return 0;
            default:
                printf("\n wrong choice");
        }
    }

    return 0;
}