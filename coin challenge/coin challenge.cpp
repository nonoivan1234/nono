#include<iostream>
#include<vector>
#include<math.h>

using namespace std;

int coinChange(vector<int> , int);

int main()
{
    int amount,a,ans;
    vector<int> vec;
    for(int i=0;i<3;i++)
    {
        cin>>a;
        vec.push_back(a);
    }
    cin>>amount;
    ans = coinChange(vector<int> vec,amount);
    cout<<ans<<endl;
}


int coinChange(vector<int> &coins, int amount) {
    double f[amount+1];
    int n;
    n = coins.size();
    int i,j;
    for(i=1;i<=amount;i++){
        f[i]=INFINITY;
        for(j=0;j<n;j++){
            if(i>=coins[j])
                f[i]=min(f[i-coins[j]]+1,f[i]);
        }
    }

    if(f[amount]==INFINITY){
        f[amount] = -1;
    }

    return f[amount];
}
