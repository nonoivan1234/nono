#include<iostream>

using namespace std;
int main()
{
    int n,q,t,a,b;
    cin>>n;
    int arr[n][n],que[q][2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[0][i]; //arr[0] = [5 2 4 8 1 3]
    }
    cin>>q;
    for(int i=1;i<n;i++) //1-4
    {
        for(int k=0;k<n;k++)
        {
            arr[i][k]=arr[i-1][k];
        }
        for(int j=i-1;j>=0;j--)
        {
            if(arr[i][j+1]<arr[i][j]){
                t = arr[i][j+1];
                arr[i][j+1]=arr[i][j];
                arr[i][j]=t;
            }
        }
    }
    for(int i=0;i<q;i++)
    {
        cin>>a>>b;
        cout<<arr[a-1][b-1]<<endl;
    }
}
