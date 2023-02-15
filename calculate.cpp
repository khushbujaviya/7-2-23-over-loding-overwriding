/* 1. WAP to perform all basic arithmetic operations such like +, -, *, and / operations by implementing method	overloading using total 2 classes.
	- use only one method named calculate() in childclass
	- if you pass 2 arguments, perform division
	- if you pass 3 arguments, perform subtraction
	- if you pass 4 arguments, perform multiplication
	- if you pass 5 arguments, perform addition*/
	
#include<iostream>
using namespace std;
class operarter{
	private:
		int div;
		int sub;
		int mul;
		int add;
	public:
		void calculate(int a,int b){
			div=a/b;
			cout<<"div:"<<div<<endl;
		}
		void calculate(int a,int b,int c){
			sub=a-b-c;
			cout<<"sub:"<<sub<<endl;
		}
		void calculate(int a,int b,int c,int d){
			mul=a*b*c*d;
			cout<<"mul:"<<mul<<endl;
		}
		void calculate(int a,int b,int c,int d,int e){
			add=a+b+c+d+e;
			cout<<"add:"<<add<<endl;
		}
};
main(){
	operarter o;
	o.calculate(12,2);
	o.calculate(30,20,5);
	o.calculate(2,3,4,5);
	o.calculate(10,20,30,40,50);

}
