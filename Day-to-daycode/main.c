

#include<stdio.h>
int swap(int *a,int *b){
    int t=*a;
    *a=*b;
    *b=t;
}
int partition(int a[],int low,int high){
    int pivot=a[high];
    int j;
    int t;
    int i=(low-1);
    for(j=low;j<=high-1;j++){
        if(a[j]<=pivot){
            i++;
           swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return (i+1);

}

void quicksort(int a[],int low,int high){
if(low<high){
    int pi=partition(a,low,high);
    quicksort(a,low,pi-1);
    quicksort(a,pi+1,high);
}
}
int main(){
    int n,i;
    printf("Enter size of array:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    for(i=0;i<n;i++)
        printf("%d ",a[i]);
return 0;
}
