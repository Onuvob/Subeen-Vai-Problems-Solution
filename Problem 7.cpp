#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int cas, num, check;
	cin>>cas;

	while(cas--)
	{
		cin>>num;
		check=sqrt(num);

		if(check*check == num)
			cout<<"YES"<<endl;

		else
			cout<<"NO"<<endl;
	}
	return 0;
}
