//first include the library
#include <iostream>
using namespace std;

// Write a program with a func , that takes 2 int param, adds them together and returns the sum.

int func(int a, int b){
 int sum = a + b ;
 return sum;
}
// Same stuff, func should be void, takes a third passed by ref, push the sum in that.

void funcR(int &a, int &b, int &c){  
	c = a + b;
  //return sum;
}


// program asks the user for 2 numbers, then call the func with numbers as arguments and tell user the sum.
int main(){

	int a,b;
	cout << "give me two numbers"<<endl;
	cin>>a>>b;
	int sum = func(a,b); // y = f(x)
	cout << sum<<endl;
	int total;
	funcR(a,b,total);
	cout << total<<endl;	
}

/*


void pi(int i1,int i2){
	cout<<i1<<endl;
	cout<<i2<<endl;
}
void sumR(int &a,int &b){
	sum = a+b;
}






//driving formula
int main(){
int a,b;
cout << "give me two numbers"<<endl;
cin>>a>>b;
pi(a,b);
cout<<"break";
sumR(a,b);
cout<<sum<<endl;

return 0;
}
*/
