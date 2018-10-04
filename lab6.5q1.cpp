//library
#include<iostream>
//namespace
using namespace std;
//main function
int main()
{
	//declaring variables
	int a,b,c,d;
	float costApple, costMango, costBanana,e;
	costApple=1.00;
	costMango=3.00;
	costBanana=0.50;
	//increment for a
	for(a=0;a<100;a++)
	{
		//increment of b
		for(b=0;b<100;b++)
		{
			//increment of c
			for(c=0;c<100;c++)
			{
				//defining d and e
				d=a+b+c;
				e=(costApple*a)+(costMango*b)+(costBanana*c);
				//using condition
				if(d==100 && e==100.00)
				cout<<"The number of apples is"<<a<<",the number of mangoes is"<<b<<"and the number of bananas is"<<c<<endl;
			}
		}
	}
	return 0;
}
