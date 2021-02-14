#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t,i;
    cin>>n;
    int score[n];
    for (i=0;i<n;i++)
    {
        cin>>score[i];
    }
    sort(score,score+n);
    for (i=0;i<n;i++)
    {
        cout<<score[i]<<" ";
    }
    cout<<"\n";
    for (i=0;i<n;i++)
    {
        if (score[i]>=60){
            if (i==0)
                cout<<"best case"<<endl;
            else if(i>0)
                cout<<score[i-1]<<endl;
                cout<<score[i]<<endl;
            break;
        }
        else if(i==n-1&&score[i]<60){
            cout<<score[i]<<endl;
        }
        if(i==n-1)
            cout<<"worst case"<<endl;
    }
}

