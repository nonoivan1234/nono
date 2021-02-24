#include<iostream>
#include<math.h>
using namespace std;

int check_prime(int x)
{
    for (int i=2;i<=sqrt(x);i++)
    {
        if (x%i==0){
            return false;
        }
    }
    return true;
}


int main()
{
    int n;
    cin>>n;
    if(check_prime(n)){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
	return 0;
}
