#include<iostream>
using namespace std;
class Shape{
	protected:
	int height;
	int width;
	
	public:
		void setheight(int h){
			height=h;
			
		}
		void setwidth(int w){
			width=w;
		}
		virtual void area() {
        cout << "Area from Shape" << endl;
    }

    
    virtual void perimeter() {
        cout << "Perimeter from Shape" << endl;
    }
};

class Rectangle:public Shape{
	public:
		void area() override{
			cout<<"rectangle area:"<< height*width <<endl;
		}
		void perimeter() override{
			cout<<"rectangle perimeter:"<<2*(height+width)<<endl;
		}
};

class Triangle:public Shape{
	public:
	void area() override{
			cout<< 0.5 * height * width <<endl;
		}
	void perimeter() override{
			cout<<3 * width<<endl;
		}
};

int main(){
	Rectangle r;
	Triangle t;
	r.setheight(10);
	r.setwidth(5);
	r.area();
	r.perimeter();
	t.setheight(20);
	t.setwidth(25);
	t.area();
	t.perimeter();
	
	
	
	
}