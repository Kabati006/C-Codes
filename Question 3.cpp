#include<iostream>
using namespace std;

int main() {
	float weight;
	float height;
	int bmi;
	
	cout<<"Enter weight (kg): "<<endl;
	cin>>weight;
	cout<<"Enter height (m): "endl;
	cin>>height;
	
	bmi=weight / (height*height);
	
	 cout << "\nBMI: " << bmi << endl;
	 if(bmi<18.5) {
	 	cout<<"Underweight"<<endl;
	 }
	 
	 else if(bmi>=18.5 && bmi<24.9) {
	 	cout<<"Normal weight"<<endl;
	 }
	 
	 else if(bmi>=25 && bmi<29.9) {
	 	cout<<"Overweight"<<endl;
	 }
  
     else{
     	cout<<"Obesity"<<endl;
	 }
}
	 
	 int main() {
	 	calculateBMI();
	 	return 0;
	 }
	
	
	
	
