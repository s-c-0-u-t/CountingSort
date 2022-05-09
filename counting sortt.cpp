#include<iostream>
using namespace std;
long int count=0;
void countingsort(int *a,int k,int n)
{  int *c;
   int *b;
   c=new int[k+1];
   b=new int[n+1];
	for(int i=0;i<=k;i++)
	{   count++;
		c[i]=0;
	}
	for(int i=1;i<=n;i++)
	{   count++;
		c[a[i]]=c[a[i]]+1;
	}
	for(int i=1;i<=k;i++)
	{   count++;
		c[i]=c[i]+c[i-1];
	}
	for(int i=n;i>=1;i--)
	{   count++;
		b[c[a[i]]]=a[i];
		c[a[i]]=c[a[i]]-1;
	}
	for(int i=1;i<=n;i++)
	  {
	  	a[i]=b[i];
	  }
	  delete(b);
	  delete(c);
}
int main()
{   int n;
	cout<<"enter numbers";
	cin>>n;
	int *a;
	a=new int[n+1];
	for(int i=1;i<=n;i++)
	cin>>a[i];
	countingsort(a,5,n);
	for(int i=1;i<=n;i++)
	{
		cout<<a[i];
	}
	cout<<"\nno of comparsion is "<<count;
	
}
