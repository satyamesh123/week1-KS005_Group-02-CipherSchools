#include<iostream>
using namespace std;

int main(){
	
// do while part
	int password;
	
	do{
		cin>>password;
	}while(password<999999);
	
// infinite loop part
	int password;
	int count=0;
	while(1){
		cout<<"choclates ";
		count++;
		if(count == 100){
			break;
		}
	}

    for(int i=0; ;i++){
    	cout<<"satyam"<<" ";
        cout<<i<<" ";
        if(i>100) break;
	}
	
// while loop part
	int password;
	
	cout<<"Enter the password:"<<endl;
	cin>>password;
	
	while(password<999999){
		cout<<"The password does not meet the required conditions, please enter the password again";
		cin>>password;
	}
	cout<<"The user entered the correct password"<<endl;
	
	return 0;
}


