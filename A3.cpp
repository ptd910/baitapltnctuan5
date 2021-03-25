#include<iostream>
using namespace std;
void tong(int n)
{
	int s = 2+n;
	cout<<s<<endl;
	cout<<"dia chi doi so n la:"<<&n<<endl;
}
void swap(int &x,int &y)
{
	int temp = x;
	x = y;
	y= temp;
	cout<<"dia chi khi truyen theo tham chieu:"<<&x<<" "<<&y<<endl;
}
int main()
{
	int n;
	cout<<"nhap n:";cin>>n;
	tong(n);
	cout<<"dia chi bien n la:"<<&n<<endl;
	int x;cin>>x;
	cout<<"dia chi cua x la:"<<&x<<endl;
	swap(x, n);
}
