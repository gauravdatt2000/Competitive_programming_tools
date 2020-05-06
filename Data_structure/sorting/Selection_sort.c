//selsction sort
#include <stdio.h>
#define ma 100001
int arr[ma],n,min,min_index,temp;

int main(void)
{
scanf("%d",&n);

for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}

for(int i=0;i<n-1;i++){
    
    //logic for finding minimum
    for(int j=i;j<n;j++){
        if(j==i){
            min=arr[j];min_index=j;
        }
        else if(arr[j]<min){min=arr[j];min_index=j;}
        
    }
    //swap logic
    arr[min_index]=arr[i];
    arr[i]=min;
    
    printf("min %d pass %d >>",min,i+1);
    
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    
    printf("\n");
}
}