#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int i, j, n, sum, size;
	char name[1000];
	cin>>n;
	for(i=0;i<n;i++)
	{
		sum=0;
		cin>>name;
		size = strlen(name);
		for(j=0;j<size;j++)
		{
			sum=sum+name[j];
		}
		cout<<sum<<"\n";
	}
	return 0;
}
