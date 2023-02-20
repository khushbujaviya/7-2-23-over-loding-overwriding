/*2. WAP to implement method overriding by following
below mentioned criteria:
- Class Cricket -> Class T20Match
- Class Cricket -> Class TestMatch
- override getTotalOvers() method in both classes*/

#include<iostream>
using namespace std;
class cricket{
	public:
		getTotalOver(){
			cout<<"cricket total over 20";
			}
};
class T20match:public cricket{
	public:
	getTotalOver(){
		
		cout<<"T20match over 30";
	}
	
};
class Testmatch:public T20match{
	public:
	getTotalOver(){
		cout<<"Test match over 10";
	}
};
main(){
	T20match  T;
		T.getTotalOver();
}
	
