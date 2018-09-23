//first include the library
#include<iostream>
using namespace std;

//write a program with a func. that takes two int parameters, finds the minimum, then gives the minimum value of these.asks the user. call the function with the numbers as arguments,and tell the user the minimum
int minis(int a,int b){
	int min;
	if(a<b){
	min = a;
	}
	else if(a==b){
	min=a;
	cout<<"both are same"<<endl;
	}
	else{
	min = b;
	}
return min;
}


int main(){
	int a,b;
	cout<<"Finding the greatest integer"<<endl;
	cout<<"Give me two numbers"<<endl;
	cin>>a>>b;
	int min=minis(a,b);
	
	cout<<min<<endl;
return 0;
}
