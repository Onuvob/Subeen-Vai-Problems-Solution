#include<iostream>
using namespace std;

int main()
{
	int cas, num, sum, avg;
	cin>>cas;

	while(cas--)
	{
		sum=0;

		for(int i=0;i<5;i++)
		{
			cin>>num;
			sum += num;
		}

		avg = sum/5;
		cout<<avg<<endl;
	}
	return 0;
}
