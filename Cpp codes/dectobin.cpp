#include<iostream>
using namespace std;
int main(){
	int d=16;
	int a[10];
	int j=0;
	while(d!=0){
		int rem=d%2;
		a[j]=rem;
		d/=2;
		j+=1;
	}
	for(int i=j-1;i>=0;i--){
		cout<<a[i];
	}
}