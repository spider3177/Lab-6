//first include the library
#include<iostream>
using namespace std;

//write a program with a func. that takes two int parameters, finds the maximum, then gives the maximum value of these.asks the user. call the function with the numbersas arguments,and tell the user the maximum

int maxis(int a,int b){
	int max;
	if(a>b){
	max = a;
	}
	else if(a==b){
	cout<<"both are same"<<endl;
	}
	else{
	max = b;
	}
return max;
}


int main(){
	int a,b;
	cout<<"Finding the greatest integer"<<endl;
	cout<<"Give me two numbers"<<endl;
	cin>>a>>b;
	int max = maxis(a,b);
	
	cout<<max<<endl;
return 0;
}
