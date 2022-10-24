#include<stdio.h>
void bubsrt(int a[],int n);
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
    bubsrt(a,n);
    printf("\narray after sorting...");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void bubsrt(int a[],int n){
    int i,j,t;
    for(i=0;i<n;i++){
        for(j=0;j<n-1;j++){
            if(a[j]>a[j+1]){
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }

}