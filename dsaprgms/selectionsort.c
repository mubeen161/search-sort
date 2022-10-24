#include<stdio.h>
void selsrt(int a[],int n);
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
    selsrt(a,n);
    printf("\narray after sorting...");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void selsrt(int a[],int n){
    int i,j,t;
    for(i=0;i<n;i++){
        for(j=i;j<n;j++){
            if(a[i]>a[j]){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }

}