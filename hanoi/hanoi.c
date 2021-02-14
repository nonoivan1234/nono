#include<stdio.h>
#include<conio.h>

void hanoi(int,int,int,int);
void move(int,int,int);

int pie[20][3];
int sp[3],N;

void main()
{
    int i;
    printf("圓盤的數量？");
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        pie[i][0]=N-i;
    }
    sp[0]=N;sp[1]=0;sp[2]=0;

    hanoi(N,0,1,2);
}

void hanoi(int n,int a, int b, int c)
{
    if(n>0)
    {
        hanoi(n-1,a,c,b);
        move(n,a,b);
        hanoi(n-1,c,b,a);
    }
}
void move(int n,int s,int d)
{
    int i,j;
    pie[sp[d]][d]=pie[sp[s]-1][s];
    sp[d]++;
    sp[s]--;

    printf("\n 第 %d 個圓盤 %c --> %c 移動\n\n",n,'a'+s,'a'+d);
    for(i=N-1;i>=0;i--)
    {
        for(j=0;j<3;j++)
        {
            if(i<sp[j])
                printf("%8d",pie[i][j]);
            else
                printf("        ");
        }
        printf("\n");
    }
    printf("\n       a       b       c\n");
}
