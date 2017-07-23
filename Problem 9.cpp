#include<iostream>
#include<cstdio>
using namespace std;

int main()
{
	int cas, i, num, mark;
	float sum,avg;

	cin>>cas;

	while(cas--)
	{
		sum = 0;
		cin>>num;

		for(i=0; i<num; i++)
		{
			cin>>mark;
			sum += mark;
		}
		avg = sum/num;

		printf("%.2f\n",avg);
	}
	return 0;
}
