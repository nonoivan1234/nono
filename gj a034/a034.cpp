#include<iostream>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    double x1,x2,y1,y2,ans;
    cin>>x1>>y1>>x2>>y2;
    ans = sqrt(pow((x2-x1),2)+pow((y1-y2),2));
	printf("%.3f",ans);
	return 0;
}
