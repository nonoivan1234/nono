#include<bits/stdc++.h>
#include<math.h>
using namespace std;

int main()
{
    long long int d=1;
    int c=0;
    while (true){
        d=5*d-4*c+1;
        if (d%31==0){
            printf("%llld",c);
            break;
        }
        printf("n = %d ®É %llld\n",c,d);
        c++;
    }
	return 0;
}
