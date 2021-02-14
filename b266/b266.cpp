#include<bits/stdc++.h>
#define nono_is_handsome ios::sync_with_stdio(0);cin.tie(0);
using namespace std;

int r,c,m,n,k;

int arr[r][c];
int main()
{

    cin>>r>>c>>m;
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++)
    {
        cin>>n;
        if(n==1){
            for (int i=0;i<c/2;i++){
                for (int j=0;j<r;j++){
                    k = arr[i][j];
                    arr[i][j] = arr[r-i-1][j];
                    arr[r-i-1][j] = k;
                }
            }
        }
        else if (n==0){
            int arr_[100][100];
            for (int i=0;i<r;i++){
                for(int j=0;j<c;j++){
                    arr_[j][c-i-1] = arr[i][j];
                }
            }
            for (int i=0;i<c;i++){
                for (int j=0;j<r;j++){
                    arr[i][j] = arr_[i][j];
                }
            }
            k=r;
            r=c;
            c=k;
        }
    }

    cout<<r<<c<<endl;
    for (int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
	return 0;
}
