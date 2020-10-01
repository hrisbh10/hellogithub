// CPP program to illustrate 
// working of Virtual Functions 
#include <iostream> 
using namespace std; 

class base { 
	int x;
	int y;
 public :
 	base() {

 	}
 	base(int a,int b) : x(a),y(b){

 	}

 	base operator+ (base p){
 		base temp;
 		temp.x = x*100 ;
 		temp.y = y*100 ;
 		return temp;
 	}

 	void display(){
 		cout << x << " " << y <<endl;
 	}

 	void f(double t){
 		cout<<"double"<<endl;
 	}

 	void f(int t){
 		cout<<"int"<<endl;
 	}
  
}; 


int main() 
{ 	
	base b1(10,20),b2(100,200);
	base b3 = b2 + b1;
	b3.display();

	float it;
	cin>>it;

	b3.f(it);


} 
