#include<stdio.h>
int main()
{
    int arr[100];
    int k,item,n,i;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("enter %d elements are:\n",n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to be inserted:\t");
    scanf("%d",&item);
    printf("Enter the position:\t");
    scanf("%d",&k);
    for(i=n-1;i>=k-1;i--){
        arr[i+1]=arr[i];
    }
    arr[k-1]=item;
    for(i=0;i<=n;i++){
    printf("Elements are : %d\n",arr[i]);
    }
    return 0;
}

