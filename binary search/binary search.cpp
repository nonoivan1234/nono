#include<iostream>
#include<string.h>

using namespace std;

int main()
{
    int target,n,temp,c=0,sum=0;
    cin>>target>>n;
    int arr[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    temp=n/2;
    while(temp>=0&&temp<=n)
    {
        if(arr[temp]==target){
            printf("%d �b %d ����m �Bmid������ %d",target,temp,sum/c);
            break;
        }
        else if (arr[temp]<target){
            if (temp==n){
                printf("�䤣�� %d �Bmid������ %d",target,sum/c);
                temp=-1;
            }
            else {
                temp=(n+temp+1)/2;
            }
        }
        else if(arr[temp]>target){
            if(temp==0){
                temp=-1;
                printf("�䤣�� %d �Bmid������ %d",target,sum/c);
            }
            else {
                temp/=2;
            }
        }
        c++;
        sum+=arr[temp];
    }

}
