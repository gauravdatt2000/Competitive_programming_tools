#include <bits/stdc++.h>
#define in1(data) cin >>data
#define in2(data1,data2) cin >>data1>>data2
#define out1(data) cout << data << endl;
#define out1s(data) cout << data << ">> ";
#define out2(data1,data2) cout << data1 << " "<< data2 <<endl;
using namespace std;
int main(void)
{int V,E,temp1,temp2;
in2(V,E);
int arr[V][V];
for(int i=0;i<2*E;i++){
    in2(temp1,temp2);
    arr[temp1][temp2]=1;
}
for(int i=0;i<V;i++){
    out1s(i);
    for(int j=0;j<V;j++){
        if(arr[i][j]==1){
            cout<<j<<" ";
        }
    }
    cout<<endl;
}
}
/* <<test case>>
5 8
0 1
0 3
0 4
1 1
1 2
1 4
2 1
2 3
2 4
3 0
3 2
3 4
4 0
4 1
4 2
4 3
*/

/*output
0>> 1 3 4 
1>> 1 2 4 
2>> 1 3 4 
3>> 0 2 4 
4>> 0 1 2 3 
*/
