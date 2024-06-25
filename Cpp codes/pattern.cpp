#include<iostream>
using namespace std;
class ram{
	public:
	int i,j,rows;
	string str;

void pattern(int rows,string str){
	for(i=0;i<=rows;i++){
		for(j=0;j<rows-i;j++){
			cout<<str[j];
		}
		cout<<"\n";
	}
}
};
int main(){
	string str="saveetha";
	int rows=str.length();
	ram r;
	r.pattern(rows,str);
}