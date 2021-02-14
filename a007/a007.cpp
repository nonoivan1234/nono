#include<bits/stdc++.h>
#define nono_is_handsome ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int isPrime(int num);

int list_[4792]={2};

int main(void) {
    nono_is_handsome
	int number;
	int listcount=1;
	for(int i=3;i<46338;i++) {
		if(isPrime(i)) {
			list_[listcount]=i;
			listcount++;
		}
	}

	while(scanf("%d", &number)!=EOF) {
		int i=0, in=1;
		while(i<4792) {
			if(number>list_[i]&&number%list_[i]==0) {
				in=0;
				break;
			}
			i++;
		}
		if(in) {
			printf("質數\n");
		} else {
			printf("非質數\n");
		}
	}

	return 0;
}

int isPrime(int num) {
	if(num==2) {
		return 1;
	} else if(num%2==0) {
		return 0;
	} else {
		for(int i=3;i*i<=num;i+=2) {
			if(num%i==0)
				return 0;
		}
	}
	return 1;
}
