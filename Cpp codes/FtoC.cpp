#include<iostream>
using namespace std;
int main(){
	int temp;
	char unit;
	cout<<"F-Farenheit";
	cout<<"C-Celsius";
	cout<<"Enter the unit you want to convert:";
	cin>>unit;
	cout<<"Enter the temperature";
	cin>>temp;
	if(unit=='C'||unit=='c'){
		temp=(1.8*temp)+32.0;
		cout<<temp;
		
	}
	else if(unit=='F'||unit=='f'){
		temp=(temp-32)/1.8;
		cout<<temp;
		
	}
}