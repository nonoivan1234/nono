#include<iostream>

using namespace std;

int combination(int,int);

int main()
{
    int n,m;
    scanf("%d %d",&m,&n);
    cout<<combination(m,n)<<endl;
}

int combination(int a,int b)
{
    if(b==0 || b==a){
        return 1;
    }
    else{
        return (combination(a-1,b-1)+combination(a-1,b));
    }
}
