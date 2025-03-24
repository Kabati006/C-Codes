//CYNTHIA KABATI
//BSCIT-05-0087
//Question 1 a
#include<iostream>
using namespace std;

int main() {
	double salary;
	int serviceyears;
	double bonus;
	
	cout<<"Enter salary: "<<endl;
	cin>>salary;
	cout<<"Enter years of service: "<<endl;
	cin>>serviceyears;
	
	if(serviceyears>10) {
		bonus=salary*0.12;
	}
	
	else if(serviceyears>=10 && serviceyears<=10) {
		bonus=salary*0.1
	}
	
	else{
		bonus=salary*0.08;
	}
		
		cout<<"Your net bonus is: "<<bonus<<endl;
		return 0,
}





//Question 1 b
#include<iostream>
using namespace std;

void checkloaneligibility() {
	int age;
	double income;
	
	cout<<"Enter your age: "<<endl;
	cin>>age;
	cout<<"Enter annual income: "<<endl;
	cin>>income;
	
	if(age>=21 && income>=21,000) {
		cout<<"Congratulations you qualify for a loan."<<endl;
	}
	
	else {
		cout<<"Unfortunately, we are unable to offer you a loan at this time."<<endl;
	}
}

int main() {
	checkloaneligibility();
	return 0;
}
		