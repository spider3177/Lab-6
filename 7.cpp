//first include the library
#include<iostream>
using namespace std;
//upp function
int toUpper(int a){
	int s;
	s=a-32;
return s;
}

//low function
int toLower(int a){
	int s;
	s=a+32;
return s;
}

//doing the main function
int main(){
	char a,sp,ke;
	cout<<"Gimme an alphabet"<<endl;
	cin>>a;
	if(a>96 and a<123){
	sp=toUpper(a);
	cout<<sp<<endl;
	}
	if(a>64 and a<91){
	ke=toLower(a);
	cout<<ke<<endl;
	}
	
	 
return 0;
} 
