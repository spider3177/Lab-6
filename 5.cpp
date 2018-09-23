//first include the library
#include<iostream>
using namespace std;


// Write a program with a func , that takes 2 int param, adds them together and returns the sum.

int func(int a, int b){
 int sum = a + b ;
 return sum;
}

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

// program asks the user for 2 numbers, then call the func with numbers as arguments and tell user theanswer of the required function.
int main(){

	int a,b;
	cout << "give me two numbers"<<endl;
	cin>>a>>b;
	int x;
	cout<<"what funtion do you want to perform?\n Sum?    press 1\n greater number of them?    press 2\n smaller number of them?    press 3\n";
	cin>>x;
	if(x==1){
	int sum = func(a,b);
	cout <<a<<"+"<<b<<"="<< sum<<endl;
	}
	else if(x==2){
	
	int max = maxis(a,b);
	
	cout<<max<<endl;
	}
	else if(x==3){
	
	int min=minis(a,b);
	
	cout<<min<<endl;
	}
	else{
	cout<<"command not identified"<<endl;
	}
return 0;	
}

