#include<bits/stdc++.h>
#define nono_is_handsome ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
//fail
int main()
{
	nono_is_handsome
    int a,b;
    cin>>a>>b;
    int arr[a][b];

    for (int i=a-1;a>=0;i--){
        string str;
        cin>>str;
        for (int j=0;j<b;j++){
            if (str[j]!='.'){
                arr[i][j]==-1;
            }
        }
    }
    for (int i=0;i<a;i++){
        for (int j=0;j<b;j++){
            if (i==0 && arr[0][j]!=-1){
                arr[0][j]=1;
            }
            else if (j==0 && arr[i][0]!=-1){
                arr[i][0]=1;
            }
            else if (arr[i][j]!=-1){
                arr[i][j] = max(arr[i-1][j]+arr[i][j-1],max(arr[i-1][j],arr[i][j-1]));
            }
        }
    }
    printf("%d",arr[b-1][a-1]);
	return 0;
}
