#include<iostream>
using namespace std;
int main()
{
	int i, j, n, num, area;
	cin>>n;
	for(i=0;i<n;i++)
	{
		area=1;
		for(j=0;j<3;j++)
		{
			cin>>num;
			area=area*num;
		}
		cout<<area<<"\n";
	}
	return 0;
}