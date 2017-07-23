#include<iostream>
using namespace std;
int main()
{
	int j, k, cas, num, counter;
	cin>>cas;

	while(cas--)
	{
		counter = 0;
		for(j=0; j<10; j++)
		{
			cin>>num;

			for(k=2; k<=num-1; k++)
			{
				if(num%k==0)
					break;
			}
			if(k == num)
				counter++;
		}
		cout<<counter<<endl;
	}
	return 0;
}
