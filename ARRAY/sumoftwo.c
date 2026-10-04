#include<stdio.h>
void main(){
    int a[50],i,j,n,target;
    printf("\n enter the element for array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&a[i]);
    }
    printf("\n enter the target: ");
    scanf("%d",&target);

    int found = 0;

    for(i=0; i<n; i++){
    for(j=i+1; j<n; j++){
        if(a[i]+a[j]==target){
            found=1;
            break;
        }

    }
    if (found==1) break;
}
if (found==1){
    printf("\n %d+%d=%d",a[i],a[j],target);
}
else{
    printf("\n no");
}

}