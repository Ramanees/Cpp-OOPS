#include<iostream>
using namespace std;
int main(){
int s1=0,s2=0,n=1234,rem,rem1;
while(n!=0){
	rem=n%10;
	s1+=rem;
	n/=10;
}
cout<<"sum of digit\n"<<s1;
while(s1!=0){
    rem1=s1%10;
	s2+=rem1;
	s1/=10;	
}
cout<<"sum of 2nd digit\n"<<s2;
return 0;
}