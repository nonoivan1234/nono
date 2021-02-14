#include<iostream>

using namespace std;

int main()
{
    int to_give_n , action_n,i,j,number,action;
    cin>>to_give_n>>action_n;
    int to_give_data[to_give_n],to_give_count=to_give_n,to_throw_data[action_n],temp=1;
    for (i=0;i<to_give_n;i++)
    {
        scanf("%d ",&to_give_data[i]);
    }
    for(i=0;i<action_n;i++)
    {
        cin>>action>>number;
        bool c_bool=false;
        if(action==1){
            to_throw_data[temp++]=number;
        }
        else {
            for(j=0;j<temp;j++){
                if (to_throw_data[j]==number){
                    to_throw_data[j]=0;
                    break;
                }
                else if(j==temp-1)
                    c_bool=true;
            }
            if (c_bool){
                for(j=0;j<to_give_n;j++){
                    if (to_give_data[j]==number){
                        to_give_data[j]=0;
                        to_give_count--;
                        break;
                    }
                }
            }
        }
    }
    printf("%d\n",to_give_count);
    for(i=0;i<to_give_n;i++)
    {
        if(to_give_data[i]!=0){
            printf("%d ",to_give_data[i]);
        }
    }

}
