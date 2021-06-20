#include<iostream>
using namespace std;

int main()
{
	// This video is about data types and variables (single line comment)
	/* this is a multi
	line 
	comment
	in c++  (multiline comment)*/ 
	
	int age = 21;
	
	cout<<"The age is "<<age<<endl;
	
	// sizeof() - tells size of a variable in bytes
	
	cout<<"The memory taken by age = "<<sizeof(age);
	
	cout<<"\n\n\n";
	
	int roll = 75;
	int age1 = 18;
	float percentage = 92.11;
	char grade = 'A';
	
	cout<<"The roll no is "<<roll<<endl;
	cout<<"The age  is "<<age1<<endl;
	cout<<"The percentage  is "<<percentage<<endl;
	cout<<"The grade is "<<grade<<endl;
	
	cout<<sizeof(percentage)<<" bytes";
	
	
}