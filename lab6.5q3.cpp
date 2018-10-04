//library 
#include<iostream>
//name space
using namespace std;
//main function
int main()
{
	long sq=0,sum,k=0;
	//find perfect square
	for(long i=36;k<1;i++)
	{
		sq=i*i;
		sum=0;
		for(int j=0;sum<=sq;j++)
		{
			sum=sum+j;
			//find if sq is sum of natural numbers
			if(sum==sq)
			{
				k++;
				cout<<sq<<endl;
				break;
			}
		}
	}
	return 0;
}
