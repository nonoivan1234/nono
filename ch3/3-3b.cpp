#include<iostream>

using namespace std;
int main()
{
    int arr[6][6] = {{1,50,60,70,0,0},{2,30,40,50,0,0},{3,70,80,90,0,0},{4,66,77,88,0,0},{5,22,33,44,0,0},{0,0,0,0,0,0}};
    for(int i=0;i<6;i++)
    {
        int c=0;
        for(int j=1;j<4;j++)
        {
            c+=arr[i][j];
            arr[5][j]+=arr[i][j];
            if(arr[i][j]<60){
                arr[i][5]++;
            }
        }
        arr[i][4]=c/3;
    }
    arr[5][4]/=5;
    for(int j=1;j<4;j++)
    {
        arr[5][j]/=10;
    }
    for(int i=0;i<5;i++)
    {
        arr[5][5]+=arr[i][5];
        if(i==4){
            arr[5][5]/=5;
        }
    }
    for(int i=0;i<6;i++)
    {
        for(int j=0;j<6;j++)
        {
            printf("%4d",arr[i][j]);
        }
        printf("\n");
    }
}
