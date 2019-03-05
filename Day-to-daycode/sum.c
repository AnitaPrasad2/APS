#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j,m,n;
    int a[16];
    memset(a,0,16*sizeof(int));
    a[i]=1;
         printf("After comparing with 3 array values are : ");
    for(i=0;i<16;i++){
        if((i%3)==0){
            a[i]=1;
           }
     printf("%d ",a[i]);
    }
    printf("\n\n");
printf("After comparing with 5 array values are : ");
    for(i=0,j=5;i<=10,j<=15;i++,j++){
           if(a[i]!=0)
                a[j]=a[j]+1;
        printf("%d ",a[i]);
    }
    printf("\n\n");
    printf("After comparing with 10 array values are : ");
     for(i=0,j=10;i<=9,j<=15;i++,j++){
           if(a[i]!=0)
                a[j]=a[j]+1;
       printf("%d ",a[i]);
    }

printf("\n There are %d ways to get sum 0f 15 using 3,5,10",a[15]);

    return 0;
}
