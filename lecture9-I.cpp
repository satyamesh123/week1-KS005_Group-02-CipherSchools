#include<iostream>
using namespace std;

int compare(int a, int b){
	if(a == 5){
		return 1;
	}
	return 0;
}

int main(){
	int a,b;
	a=1,b=5;
	cout<<compare(a,b);
	return 0;
}

//----------------------------------------------//

#include<iostream>
using namespace std;

int sum(int a,int b){
	return a+b;
}

int main(){
	int a,b;
	a=1,b=5;
	int c;
	c = sum(a,b);
	cout<<c;
	return 0;
}
