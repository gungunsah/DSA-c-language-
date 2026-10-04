//deletion
//#include<stdio.h>
//void main(){
//    int a[50],i,j,n,d;
//    printf("\n enter the element for array a:");
//    scanf("%d",&n);
//    for(i=0; i<n; i++)
//    {
//        printf("\n enter the element:");
//        scanf("%d",&a[i]);
//    }
//    printf("\n elements are:");
//    for(i=0; i<n; i++)
//    {
//        printf("%d \n",a[i]);
//    }
//    printf("\n enter the element for deletion:");
//    scanf("%d",&d);
//    for(i=0; i<n; i++)
//    {
//        if(a[i]==d)
//        {
//            for(j=i; j<n; j++)
//            a[j]=a[j+1];
//        }
//    }
//    --n;
//    printf("\n after the deletion");
//  for(i=0; i<n; i++)
//    {
//        printf(" %d \n",a[i]);
//    }

// }

//ADDITION
//#include<stdio.h>
//void main(){
//    int a[50],i,j,n,A,after;
//    printf("\n enter the element for array a:");
//    scanf("%d",&n);
//    for(i=0; i<n; i++)
//    {
//        printf("\n enter the element:");
//        scanf("%d",&a[i]);
//    }
//    printf("\n elements are:");
//    for(i=0; i<n; i++)
//    {
//        printf("%d \n",a[i]);
//    }
//    printf("\n enter the new element & after which elemet to insert:");
//    scanf("%d%d",&A,&after);
//    for(i=0; i<n; i++)
//    {
//        if (a[i]==after)
//        {
//            for(j=n; j>i+1; j--)
//            {
//               a[j]=a[j-1];
//            }
//             a[i+1]=A;
//        }
//    }
//    ++n;
//    printf("\n elements after the addition");
//    for(i=0; i<n; i++)
//    {
//        printf("%d \n",a[i]);
//    }    
// }

//merge+sorting
//#include<stdio.h>
//void main(){
//    int a[50],b[50],c[100],i,j,n,m,t;
//    printf("\n enter the element for array a:");
//    scanf("%d",&n);
//    for(i=0; i<n; i++)
//    {
//        printf("\n enter the elements:");
//        scanf("%d",&a[i]);
//    }
//    printf("\n enter the element for array b:");
//    scanf("%d",&m);
//    for(i=0; i<m; i++)
//    {
//        printf("\n enter the elements:");
//        scanf("%d",&b[i]);
//    }
//    for(i=0; i<n-1; i++)
//    {
//        for(j=i+1; j<n; j++)
//        {
//            if(a[i]>a[j]);
//            {
//                a[i]=t;
//                a[i]=a[j];
//                a[j]=t;
//            }
//        }
//    }
//    for(i=0; i<m-1; i++)
//    {
//        for(j=i+1; j<m; j++)
//        {
//            if(b[i]>b[j]);
//            {
//                b[i]=t;
//                b[i]=b[j];
//                b[j]=t;
//            }
//        }
//    }
//    i=0; 
//    j=0;
//    t=0;
//    while(i<n && j<m)
//    {
//        if (a[i]>b[j])
//        {
//            c[t++]=b[j++];
//        }else{
//               c[t++]=a[i++];
//        }
//    }
//    while (i<n)
//    {
//        c[t++]=a[i++];
//    }
//    while(j<m)
//    {
//        c[t++]=b[j++];
//    }
//    printf("\n first array");
//    for(i=0; i<n; i++)
//    printf("%d \n",a[i]);
//    {
//        printf("\n second array");
//        for(i=0; i<m; i++)
//        printf("%d \n",b[i]);
//    }
//    {
//        printf("\n third array");
//        for(i=0; i<t; i++)
//        printf("%d \n",c[i]);
//    }
// }

#include<stdio.h>
void main(){
    int a[50],n,i,max;
    printf("\n enter the element for array a:");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        printf("\n enter the elements:");
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=0; i<n; i++)
    {
        if (a[i]>max)
        max=a[i];
    }
    printf("\n elements are:");
    for(i=0; i<n; i++)
    printf("%d",a[i]);

    printf("\n max=%d",max);
}