#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,i,j,max=0;
    scanf("%d",&n);
    int arr[n],ind[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
    ind[i]=1;
   // printf(" %d\t %d \n",arr[i],ind[i]);

    }
     for(i=0;i<n;i++){
             for(j=0;j<i;j++){
                 if(arr[i]>arr[j] && ind[i]<(ind[j]+1))
                    ind[i]=ind[i]+1;
                   // printf("index value for %d : %d\n",j,ind[i]);
             }
    }
     for(i=0;i<n;i++){
            if(ind[i]>max)
              max=ind[i];
            printf("%d ",ind[i]);
     }

    printf("\nMax: %d",max);
    return 0;
}
