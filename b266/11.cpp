#include<iostream>
#define nono_is_handsome ios::sync_with_stdio(0);cin.tie(0);
using namespace std;
int a[10][10],b[10][10];
void rotate(int r,int c){//�V������
	for(int i=c-1;i>=0;i--){
		for(int j=0;j<r;j++){
			b[(c-1)-i][j]=a[j][i];
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			a[i][j]=b[i][j];
		}
	}
}
void mirror(int r,int c){  //�W�U����
	for(int i=r-1;i>=0;i--){
		for(int j=0;j<c;j++){
			b[(r-1)-i][j]=a[i][j];
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j]=b[i][j];
		}
	}
}
int main(){
    nono_is_handsome
	int op[10],R,C,M;
	while (cin >> R >> C >> M){
		for(int i=0;i<R;i++){
			for(int j=0;j<C;j++){
				cin >> a[i][j];
			}
		}
		for(int i=0;i<M;i++) cin >> op[i];
		for(int i=M-1;i>=0;i--){
			if (op[i] == 1) {
				mirror(R,C);
			}else{
				rotate(R,C);
				int tmp=R;
				R=C;
				C=tmp;
			}
		}
		cout << R << " " << C << endl;
	    for(int i=0;i<R;i++){
		    cout << a[i][0];
		    for(int j=1;j<C;j++){
			    cout << " " << a[i][j];
	    	}
		    cout << endl;
	    }
	}
}
