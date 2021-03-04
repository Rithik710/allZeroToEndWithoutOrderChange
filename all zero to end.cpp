#include<iostream>
#include<climits>
using namespace std;

void get(int ary[], int n)
{
	for(int i=0; i<n; i++)
	{
		cout<<"Enter element : "<<i+1<<" : ";
		cin>>ary[i];
	}
	
}
void print(int ary[], int n)
{
	for(int i=0; i<n; i++)
	{
		
		cout<<ary[i];
	}
	cout<<endl;
	
}

void zeroToEnd(int ary[], int n)
{
	int i,k;
	
	for(i=0, k=0; i<n && k<n  ; i++)
	{  
		if(ary[i] !=  0)
		{
		
		int temp = ary[i];
		ary[i] = ary[k];
		ary[k] = temp;
		k++;
	    }
	}
}

int main()
{
	int ary[100];
	int n;
	cout<<"Enter size of array : ";
	cin>>n;
	cout<<endl;
	get(ary,n);
	
	print(ary,n);
	
	zeroToEnd(ary, n);
	
	print(ary,n);
	
	
	
}

