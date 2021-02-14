#include<iostream>

using namespace std;
int main()
{
    int c[2][3],cou=0;
    int a[][3] = {{1,2,3},{4,5,6}};
    int b[][3] = {{1,2,0},{2,1,3}};
    printf("Matrix A\n");
    for (int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
            cou+=a[i][j];
            printf("%4d",a[i][j]);
        }
        printf("\n");
    }
    cout<<"The sum of Matrix A = "<<cou<<endl;
    printf("Matrix B\n");
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
            printf("%4d",b[i][j]);
        }
        printf("\n");
    }
    printf("Matrix C\n");
    for(int i=0;i<2;i++)
    {
        for (int j=0;j<3;j++)
        {
            printf("%4d",c[i][j]);
        }
        printf("\n");
    }
}
