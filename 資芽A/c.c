#include<stdio.h>

int main()
{
    long int to_give_n,action_n,i,j,number,action;
    scanf("%d %d",&to_give_n,&action_n);
    long int to_give_data[to_give_n+action_n],temp=to_give_n,to_give_count=to_give_n;
    for (i=0;i<to_give_n;i++)
    {
        scanf("%d ",&to_give_data[i]);
    }
    for(i=0;i<action_n;i++)
    {
        scanf("%d %d",&action,&number);
        if(action==1){
            to_give_data[temp++]=number;
        }
        else{
            for(j=temp;j>=0;j--)
            {
                if (to_give_data[j]==number){
                    to_give_data[j]=0;
                    if(j<to_give_n)
                        to_give_count--;
                    return 0;
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
    return 0;
}
