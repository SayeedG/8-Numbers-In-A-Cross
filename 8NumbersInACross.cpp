//Sayeed Gulmahamad
#include <iostream>
#include<cmath>
#include<cstdlib>
#include<stdlib.h>
using namespace std;

void print(int a[]) {
	for(int i=0;i<8;i++){
	cout<< a[i]<< " ";
	}
	   cout << endl<<endl;
}

void backtrack(int& b){
	b--;
	if(b==-1){
		exit(0);
}
}

bool check( int a[], int b) {
	int refer[8][5] = {{-1},{0,-1},{0,1,-1},{0,2,-1},{1,2-1},{1,2,3,4,-1},{2,3,5,-1},{4,5,6,-1}};
		if(b!=0){
		for(int j=0; j<b;j++){
			if(a[b]==a[j]) return false;
}
}

	if(b!=0) {
	for(int col=0; refer[b][col]!=-1 && col<5; col++){
		int k=refer[b][col];
		if(a[b]-1==a[k] || a[b]+1==a[k]) return false;
	}
}
	return true;

}

int main() {

	int refer[8][5]={{-1},{0,-1},{0,1,-1},{0,2,-1},{1,2,-1},{1,2,3,4,-1},{2,3,5,-1},{4,5,6,-1}};
	for(int w=0;w<8;w++) {
	   for(int q=0; refer[w][q]!=-1 && q<5; q++){
		cout << refer[w][q] << " ";
	}
		cout << endl;
}
cout << endl;

int a[8];
int b=0;
   a[b]=0;
   
	bool frombacktrack=false;

	while(true){
	while(b<8){
		if(!frombacktrack)
		a[b]=0;
			frombacktrack=false;

	while(true){
		if(a[b]==8){
			a[b]=0;
				backtrack(b);
}
	else if(check(a,b))
	break;
	a[b]++;
}
	b++;
}
}

	print(a);
	b--;
	a[b]=0;
	backtrack(b);
	a[b]++;
	frombacktrack=true;
	}

