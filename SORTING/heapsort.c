#include<stdio.h>
int arr[20],n;

void display();
void create_heap();
void insert(int num,int loc);
void heap_sort();
void del_root(int last);

int main(){
    int i;
    printf("\n enter the number of elements:\n");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("\n enter the element %d:",i+1);
        scanf("%d",&arr[i]);
    }
    printf("\n enter the list is:\n");
    display();
    create_heap();
    printf("\n heap is:\n");
    display();
    heap_sort();
    printf("\n sorted list is:\n");
    display();
    return 0;
}

void display(){
    int i;
    for(i=0; i<n; i++){
        printf("%d\t",arr[i]);
        printf("\n");
    }
}

void create_heap(){
    int i;
    for(i=0; i<n; i++){
        insert(arr[i],i);
    }
}

void insert(int num,int loc){
    int par;
    while(loc>0){
        par=(loc-1)/2;
        if(num<=arr[par]){
            arr[loc]=num;
            return;
        }
        arr[loc]=arr[par];
        loc=par;
    }
    arr[0]=num;
}

void heap_sort(){
    int last;
    for(last=n-1; last>0; last--){
        del_root(last);
    }
}

void del_root(int last){
    int left,right,i,temp;
    i=0;

    temp=arr[i];
    arr[i]=arr[last];
    arr[last]=temp;
    left=2*i+1;
    right=2*i+2;
    while(right<last){
        if(arr[i]>=arr[left] && arr[i]>=arr[right])
        return;
        if(arr[right]<=arr[left]){
            temp=arr[i];
            arr[i]=arr[left];
            arr[left]=temp;
            i=left;
        }
        else{
            temp=arr[i];
            arr[i]=arr[right];
            arr[right]=temp;
            i=right;
        }
        left=2*i+1;
        right=2*i+2;
    }
    if(left==last-1 && arr[i]<arr[left]){
        temp=arr[i];
        arr[i]=arr[left];
        arr[left]=temp;
    }
}