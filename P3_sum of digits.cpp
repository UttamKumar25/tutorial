#include <iostream>
using namespace std;
int main()
{
	int n;
	int sum;
	cin>>n;
	while(n>0)
	{
		
	    int a;
		a=n%10;
		sum+=a;
		n=n/10;

	}
	cout<<sum;

}