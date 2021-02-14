#include<iostream>

using namespace std;

int factorial(int a)
{
    if(a==0 || a==1){
        return 1;
    }
    else{
        return factorial(a-1)*a;
    }
}


int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
}
