#include<iostream>
using namespace std;
int snt(int n)
{
	int result = 0;
	if(n==2) result = 0;
	if(n>2)
	{
		for(int i=2;i<n;i++)
		{
			if(n%i==0) 
			{
				result = 1;
				break;
			}
		}
	}
	if(n<2) result = 1;
	if(result==0) return 1;
	if(result==12) return 0;
}
int main()
{
	int n;
	cout<<"nhap n:";cin>>n;
	for(int i=0;i<n;i++)
	{
		if(snt(i)==1) cout<<i<<"\t";
	}
	return 0;
	
}
