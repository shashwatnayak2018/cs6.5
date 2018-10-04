//library
#include<iostream>
//name space
using namespace std;
//function for the fixed salary option
int fixsalary(int a)
{
	float salary=600.00;
	return salary;
}
//function for the salary per hour option
int salaryperhr(int a)
{
	float salary=(7*40)+((a*225)*0.1);
	return salary;
}
//function for the zero salary option
int zerosalary(int a)
{
	float salary=(a*20)+((a*225)*0.2);
	return salary;
}
//function to choose the best choicce
float greatestsalary( float a, float b, float c)
{
	if(a>b && a>c)
	{
		cout<<"The salary of 600 rupees is the best choice."<<endl;
	}
	if(b>a && b>c)
	{
		cout<<"The salary of 7 rupees per hour with 10 percent commission is the best option."<<endl;
	}
	if(c>b && c>a)
	{
		cout<<"The salary of 20 percent commission and 20 rupees per shoe is the best option."<<endl;
	}
	else
	{
		cout<<"Any two options have the same profit."<<endl;
	}
}
//write main function
int main()
{
	float b,c,d;
	int a,z;
	//ask for the number of shoes sold
	cout<<"Enter the number of shoes sold:"<<endl;
	cin>>a;
	b=fixsalary(a);
	c=salaryperhr(a);
	d=zerosalary(a);
	z=greatestsalary(b,c,d);
	cout<<z;
	return 0;
}	
