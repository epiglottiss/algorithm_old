#include<iostream>
using namespace std;

int max(int a[],int number)
{
	int m_value=-1000000;
	for(int i=0;i<number;i++)
	{
		if(a[i]>m_value)
			m_value = a[i];
	}
	return m_value;
}

int min(int a[],int number)
{
	int m_value=1000000;
	for(int i=0;i<number;i++)
	{
		if(a[i]<m_value)
			m_value = a[i];
	}
	return m_value;
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
		{
		cin>>arr[i];
		}
	cout<<min(arr,n)<<" "<<max(arr,n);
	return 0;	
}
