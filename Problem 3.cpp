#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
	int cas, num, n, i, count, len;
	char line[1000];

	cin>>n;

	gets(line);

	for(cas=1;cas<=n;cas++)
	{
		count=0;
		gets(line);
		len=strlen(line);
		for(i=0;i<len;i++)
			if(line[i]>='0'&&line[i]<='9')
			{
				count++;
				while(line[i]>='0'&&line[i]<='9'&&i<len)
					i++;
			}
		cout<<count<<endl;
	}
	return 0;
}
