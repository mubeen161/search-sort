#include<stdio.h>
void instsrt(int a[],int n);
main(){
    int i,j,n,a[20];
    //printf("size of array");
    //scanf("%d",&n);
    printf("array elements ");
    for (i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("array before sorting...");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
    instsrt(a,n);
    printf("\narray after sorting...");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void instsrt(int a[],int n){
    int i,j,t;
    for(i=0;i<n;i++){
        j=i;

        while(j>0&&a[j-i]>a[j]){
            
                t=a[j];
                a[j]=a[j-1];
                a[j-1]=t;
                j--;
            
        }
    }

}