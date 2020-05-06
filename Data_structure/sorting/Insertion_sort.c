//Insertion sort
/*
Test case
5
5 4 3 2 1
*/
#include <stdio.h>
#define ma 100001
int arr[ma];
int main(void)
{int n,key,in;scanf("%d",&n);
for(int i=0;i<n;i++){scanf("%d",&arr[i]);}
//insertion logic
for(int i=1;i<n;i++){
    key=arr[i];
    in=i-1;
    while(in>=0  && arr[in]>key){
        arr[in+1]=arr[in];
        in--;
    }
    arr[in+1]=key;
}

for(int i=0;i<n;i++){
    printf("%d ",arr[i]);
}
}