#include<iostream>
using namespace std;
int main()
{
	int cas, num, count1=0, count2=0;
	cin>>cas;
	while(cas--)
	{
		cin>>num;
		if(num>=0)
		{
			count1++;
		}
		else
		{
			count2++;
		}
	}
	cout<<count1<<" "<<count2<<endl;
	return 0;
}
