#include<iostream>
using namespace std;
int main(){
	char str[100];
	cout<<"enter a string";
	cin>>str;
	for(char &i:str){
		i=tolower(i);
	}
	cout<<str;
}