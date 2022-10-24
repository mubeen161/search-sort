#include<stdio.h>
int binary(int a[],int n,int k,int l,int h);
main(){
    int a[20],pos=-1,i,n,j,l,h,key;
    printf("enter the size of array ");
    scanf("%d",&n);
    printf("array elements ");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("key element ");
    scanf("%d",&key);
    l=0;
    h=n-1;
    pos=binary(a,n,key,l,h);
    if(pos==-1)
    printf("key element not found ");
    else
    printf("key element found at position %d",pos+1);

}
int binary(int a[],int n,int k,int l,int h)
{
    int mid,i;
    mid=(l+h)/2;
    while(l<=h){
        if(a[mid]==k)
        {
            return mid;
        }
        else if(a[mid]>k){
            return binary(a,n,k,l,mid-1);
        }
        else if(a[mid]<k){
            return binary(a,n,k,mid+1,h);

        }
        else
        return-1;
    }


}