#include<iostream>
using namespace std;
int main(){
	
	const float PI = 3.14;
	int radius;
	float area;
	
	cout<<"Enter radius:"<< endl;
	cin>> radius;
	
	area = PI*radius*radius;
	
	//Display value
	
	cout<<"The area of circle is "<<area<< endl;
	
	
	
return 0;
}
