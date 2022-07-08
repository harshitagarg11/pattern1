#include <iostream>
using namespace std;
int main(){
	void pattern(int a,int b);
	pattern(4,8);
	return 0;
}
void count(int b){
	if(b>0){
	cout<<"*";
	count(b-1);		
	}
}
void pattern(int a,int b){
	if(a>0){
	cout<<endl;
	a--;
	count(b);
	pattern(a,b);
	}
}
