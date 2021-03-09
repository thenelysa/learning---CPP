#include<iostream>
using namespace std;
int main (){
	
	int num1 = 10, num2 = 5 ;
	int sum , mul, diff, div, mod;
	
	//Calculate
	
	sum = num1 + num2 ;
	diff= num1 - num2 ;
	mul = num1 * num2 ;
	div = num1 / num2 ;
	mod = num1 % num2 ;
	
	//Display value
	
	cout<< "The sum is ="<<sum<< endl;
	cout<<"The difference is ="<<diff<< endl;
	cout<<"The multiplication is="<<mul<< endl;
	cout<<"The dividend is ="<<div<< endl;
	cout<<"The modulus is ="<<mod <<endl;
	
	
	
	

	return 0;
}
