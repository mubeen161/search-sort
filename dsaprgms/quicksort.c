#include<stdio.h>
void quksrt(int a[],int l,int j);
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
    quksrt(a,0,n-1);
    printf("\narray after sorting...");
    for(i=0;i<n;i++)
    printf("%d\t",a[i]);
}
void quksrt(int a[],int l,int h){
    int piv,i,j,t;
    piv=l;
    i=l;
    j=h;
    if(l<h){
       while(i<j){
          while(a[i]<=a[piv]&&i<h)
          i++;
          while(a[j]>a[piv])
          j++;
          if(i<j){
                t=a[i];
                a[i]=a[j];
                a[j]=t;
          }
       }
          
        t=a[j];
        a[j]=a[piv];
        a[piv]=t;
        quksrt(a,l,j-i);
        quksrt(a,j+1,h);
    }
       
    
    
            
    

}