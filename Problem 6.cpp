#include<iostream>
using namespace std;
int main()
{
	int j, n, max, min;
	cin>>n;

	while(n--)
	{
	    cin>>n;
	    max = min = n;

		for(j=1; j<5; j++)
		{
			cin>>n;
			if(n < min)
                min = n;

            if(n > max)
                max = n;
		}

		cout<<max<<" "<<min<<"\n";
	}
	return 0;
}
