#include<stdio.h>
void heapsrt(int a[],int n){
    int i;
    for(i=n/2-1;i>=0;i--)
    heapify(a,n,i);
    for(i=n-1;i>=0;i--){
        swap(&a[0],&a[i]);
        heapify(a,i,0);
    }
}
void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
void heapify(int a[],int n,int i){
    int l,left,right;
    l=i;
    left=2*i+1;
    right=2*i+2;
    if(left<n&&a[left]>a[l])
    l=left;
    if(right<n&&a[right]>a[l])
    l=right;
    if(l!=i){
        swap(&a[i],&a[l]);
        heapify(a,n,l);

    }
}


main(){
    int i,j,n,a[20];
    printf("size of array");
    scanf("%d",&n);
    printf("array elements ");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("array before sorting...");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    heapsrt(a,n);
    printf("\narray after sorting...");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}