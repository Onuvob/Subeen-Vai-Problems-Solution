#include<iostream>
using namespace std;
int main()
{
	int cas,n,num,count;
	cin>>n;
	for(cas=1;cas<=n;cas++)
	{
		count=0;
		cin>>num;
		if(num==0)
		{
			count++;
		}
		while(num)
		{
			num=num/10;
			count++;
		}
		cout<<count<<endl;
	}
	return 0;
}