#include<iostream>
using namespace std;
class Sse{
	public:
		void cust(string name,int age,int discount){
			cout<<"customer details"<<endl;
			cout<<"Customer Name:"<<name<<endl;
			cout<<"Age:"<<age<<endl;
			cout<<"Discount:"<<discount<<endl<<endl;
		}
		void cust(string name,int age,string date,string loan){
			cout<<"Loan details"<<endl;
			cout<<"Customer name:"<<name<<endl;
			cout<<"age:"<<age<<endl;
			cout<<"date:"<<date<<endl;
			cout<<"loan type:"<<loan<<endl;
			
		}
};

int main(){
	Sse s;
	s.cust("Ramanees",19,10);
	s.cust("Ram",20,"22/06/24","Education");
	
}