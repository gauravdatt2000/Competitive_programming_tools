/*
test case 
7
1 2 3 4 56 78 9 
*/
#include <bits/stdc++.h>
#define ma 1000001
using namespace std;
int arr[ma];
class node{
    public :
        int data;
        node *next;
}*head;

void create(int arr[],int no){
    node *temp,*last;
    head = new node();
    head->data=arr[0];
    head->next=NULL;
    temp=head;
    
    for(int i=1;i<no;i++){
        last = new node();
        last->data= arr[i];
        last->next= NULL;
        temp->next=last;
        temp=last;
    }
    
}

void print(node *z){z=head;
    while(z!=NULL){
        printf("%d ",z->data);
        z=z->next;
    }    
    printf("\n");
}


void push(node *test,int ndata){
    node *temp1,*temp2;
    temp1 = new node();
    temp1->data = ndata;
    temp1->next = head;
    head = temp1;
}

int main(void)
{int no,ndata; cin>>no;
for(int i=0;i<no;i++){
    cin>>arr[i];
}
create(arr,no);
print(head);
push(head,2);
print(head);
}

