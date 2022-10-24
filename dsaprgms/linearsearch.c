#include<stdio.h>
int linear(int a[],int n,int k);
main(){
    int a[20],pos=-1,i,n,j,key;
    printf("enter the size of array ");
    scanf("%d",&n);
    printf("array elements ");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("key element ");
    scanf("%d",&key);
    pos=linear(a,n,key);
    if(pos==-1)
    printf("key element not found ");
    else
    printf("key element found at position %d",pos+1);

}
int linear(int a[],int n,int k){
    int i,j;
    for(i=0;i<n;i++){
    if(a[i]==k){
        return i;
    }
    }
    
}