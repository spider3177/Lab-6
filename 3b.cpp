//first include the library
#include<iostream>
using namespace std;

//same as above the function that finds the maximum should be void, and takes a third, pass by reference parameter; then puts the maximum in that.
void maxis(int &a,int &b,int &c){
	if(a>b){
	c = a;
	}
	else if(a==b){
	c=a;
	cout<<"both are same"<<endl;
	}
	else{
	c = b;
	}
}


int main(){
	int a,b;
	cout<<"Finding the greatest integer"<<endl;
	cout<<"Give me two numbers"<<endl;
	cin>>a>>b;
	int max;
	maxis(a,b,max);
	
	cout<<max<<endl;
return 0;
}
