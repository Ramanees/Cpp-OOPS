#include<iostream>
using namespace std;
class ram{
	public:
	int n;
	int c;
	void fib(int n){
		int a=0;
		int b=1;
		cout<<a<<",";
		cout<<b<<",";
		for(int i=2;i<n;i++){
			c=a+b;
			cout<<c<<",";
			a=b;
			b=c;
			
		}
	}
};
int main(){
	int n=10;
	ram r;
	r.fib(n);
}