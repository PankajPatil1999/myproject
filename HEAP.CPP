#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int a[2000],n;
class Heap
{
	int i,j,k;
	public:
	void get();
	void heapsort(int [],int);
	void heapify(int [],int);
	void adjust(int [],int,int);
	void dis();
};
void Heap::get()
{
	cout<<"\nEnter the number of nodes in a tree : ";
	cin>>n;
	for(i=1;i<=n;i++)
	a[i]=random(1000);
	cout<<"\nBefore sort: ";
	dis();
}
void Heap::heapsort(int a[],int n)
{
	heapify(a,n);
	for(i=n;i>=1;i--)
	{
		int t;
		t=a[i];
		a[i]=a[1];
		a[1]=t;
		adjust(a,1,i-1);
	}
}
void Heap::heapify(int a[],int n)
{
	for(i=n/2;i>=1;i--)
	{
		adjust(a,i,n);
	}
}
void Heap::adjust(int a[],int i,int n)
{
	int item;
	j=2*i;
	item=a[i];
	while(j<=n)
	{
		if((j<n)&&(a[j]<a[j+1]))
			j=j+1;
		if(item>=a[j])
			break;
		a[j/2]=a[j];
		j=2*j;
	}
	a[j/2]=item;
}
void Heap::dis()
{
	for(i=1;i<=n;i++)
	cout<<a[i]<<"\t";
}
void main()
{
	int s,e;
	clrscr();
	Heap p;
	s=clock();
	p.get();
   //	s=clock();
	p.heapsort(a,n);
	e=clock();
	cout<<"\nAfter sort: ";
	p.dis();
	cout<<"\nExecution time for the heapsort is : "<<(e-s)/CLK_TCK;
	getch();
}