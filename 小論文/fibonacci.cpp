#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i,F[101];
	double ans=0;
	F[0]=0;
	F[1]=1;
	for (i=2;i<=100;i++){    //create fibonacci sequence table
        F[i]=F[i-1]+F[i-2];
	}

    for (i=1;i<=100;i++){
        ans+=F[i]/pow(10,i);//calculate the answer
    }
    printf("%.16f",ans);
	return 0;
}
