#include<iostream>
using namespace std;
int main()
{
    int n=9;
    int i=0,j=(n+1)/2,key;
    int s[10][10];
    for(int key=0;key<=n*n;key++)
    {
        if(key%n==1){
            i++;
        }
        else{
            i--;
            j++;
        }
        if(i==0)
            i=n;
        if(j>n)
            j=1;
        s[i][j]=key;
    }
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++){
            printf("%3d",s[i][j]);
        }
        printf("\n");
    }
}
