#include<iostream>

using namespace std;


int main()
{
    int n;
    cin>>n;
    int len[n],left_temp=0,right_temp=n-1,cal,temp=0;
    for (int i=0;i<n;i++)
    {
        cin>>len[i];
    }
    while(right_temp-left_temp>0)
    {
        cal=(right_temp-left_temp)*min(len[right_temp],len[left_temp]);
        if(cal>temp)
        {
            temp=cal;
            if(min(len[right_temp],len[left_temp])==len[right_temp]){
                right_temp--;
            }
            else {
                left_temp++;
            }
        }
        else
        {
            if(min(len[right_temp],len[left_temp])==len[right_temp]){
                right_temp--;
            }
            else {
                left_temp++;
            }
        }
    }
    cout<<temp<<endl;
}
