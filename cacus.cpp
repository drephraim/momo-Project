#include <iostream>
using namespace std;

int main(){
	
	char op;
	double num1, num2, results;
	
	cout<<"*********** CALCULATOR ***********\n";
	cout<<"Enter operator (+, -, *, /): ";
	cin>>op;
	cout<<"Enter NUM1: ";
	cin>>num1;
	cout<<"Enter NUM2: ";
	cin>>num2;
	
	switch(op){
		case '+':
			results = num1 + num2;
			cout<<"Results: "<<results;
			break;
			
		case '-':
		    results = num1 - num2;
			cout<<"Results: "<<results;
			break;
			
		case '*':
		    results = num1 * num2;
			cout<<"Results: "<<results;
			break;	
			
		case '/':
		    results = num1 / num2;
			cout<<"Results: "<<results;
			break;
		
		default:
		cout<<"Enter a valid operator"	;
	}
	return 0;
}
