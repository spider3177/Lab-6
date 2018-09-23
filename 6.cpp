//first include the library
#include<iostream>
using namespace std;
//seven function
int sumEvenNumbers(int a,int b){
	int se=0;
	for(int i=a+1;i<b;i++){
		if((i%2)==0){
		se+=i;
		}
	}
return se;
}

//sodd function
int sumOddNumbers(int a,int b){
	int so=0;
	for(int i=a+1;i<b;i++){
		if((i%2)==1){
		so+=i;
		}
	}
return so;
}
	
//ssqeven function
int sumSquareEvenNumbers(int a,int b){
	int ssqe=0;
	while(a<b){
		a++;
		if((a%2)==0){
		ssqe+=(a*a);
		}
	}
return ssqe;
}

//ssqodd function
int sumSquareOddNumbers(int a,int b){
	int ssqo=0;
	while(a<(b-1)){
		a++;
		if((a%2)==1){
		ssqo+=(a*a);
		}
	}
return ssqo;
}
//doing the main function
int main(){
	int a,b,sumEven,sumOdd,sumSquareOdd,sumSquareEven;
	cout<<"Gimme the first number"<<endl;
	cin>>a;
	cout<<"Gimme the second number"<<endl;
	cin>>b;
	sumEven=sumEvenNumbers(a,b);
	sumOdd=sumOddNumbers(a,b);
	sumSquareEven=sumSquareEvenNumbers(a,b);
	sumSquareOdd=sumSquareOddNumbers(a,b);
	cout<<"Sum of all even numbers between these two numbers is "<<sumEven<<endl;
	cout<<"Sum of all odd numbers between these two numbers is "<<sumOdd<<endl;
	cout<<"Sum of the squares of all odd numbers between these two numbers is "<<sumSquareOdd<<endl;
	cout<<"Sum of the squares of all even numbers between these two numbers is "<<sumSquareEven<<endl; 
return 0;
} 
