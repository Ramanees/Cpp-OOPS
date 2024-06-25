#include<iostream>
using namespace std;
class Ram{
	public:
		int n;
		int digit;
		
		void rev(int n){
			int rev=0;
		while(n!=0){
		digit=n%10;
		rev=rev*10+digit;
		n/=10;
	}
	cout<<rev;
	}
	
};

int main(){
	int n=123;
	Ram r;
	r.rev(n);
}