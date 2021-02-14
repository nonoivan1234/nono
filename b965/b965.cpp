#include<iostream>
#include<string.h>

using namespace std;


int main()
{
    int r,c,m,to_move;
    cin>>r>>c>>m;
    int arr[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j];
        }
    }
    for (int k=0;k<m;k++)
    {
        cin>>to_move;
        int arr_c[c][r];
        if (to_move==1){
            for(int i=0;i<c;i++)
            {
                for(int j=0;j<c;j++)
                {
                    arr_c[i][j]=arr[j][i];
                }
            }
        }
        else {

        }
    }
}
