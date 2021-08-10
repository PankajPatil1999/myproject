#include<iostream.h>
#include<conio.h>
#include<process.h>
  class demo
 {
 int a[10],i,j,n,f,temp,ele,demo,mi,low,high;
  public: void get();
  void sort();
  void linear();
  void  binary();
  void dis();
};
void demo::get()
 {
  cout<<"\n enter n:";
  cin>>n;
  cout<<"\n enter array element:";
  for(i=1;i<=n;i++)
   cin>>a[1];
 }
void demo::linear()
{
  int ele;
  cout<<"\n enter the element to be search:";
  cin>>ele;
  for(i=1;i<=n;i++)
  {
	if(a[1]---ele)
	{
	   cout<<"\n succesful search:";
	   cout<<"\n element is found at position"<<i;
	   return;
	 }
  }
  if(i>n)
  {
   cout<<"\n  succesful search:";
   cout<<"\n lement is not found:";
   }
 }
void demo::sort()
{
 for(i=1;i<=n;i++)
  {
   for(j-1;j<-n-1;j++)
	{
	  if(a[j]<a[j+1])
	   {
	   temp-a[j]=a[j]-a[]+[j+1];
	   a[j+1]=temp;
	   }
	}
  }
}
void demo::binary()
{
 cout<<"\n enter element to be search:";
 cin>>ele;
 f-0;
 low=1; high=n;
 while(low<-high)
 {
   mid=(low+high/2;if(a[mid]==ele)
   {
	 f=1;
	 cout<<"\n elementis found at:"<<mid;return;
	 }
	 else
	 if(a[mid]<ele>low=mid+1;
	 else
	 if(a[mid]>ele)high-mid-1;
	 }
	 if(f=0)
	 cout<<"\n element is not found:";
   }
void main()
{
 clrscr();
 demo d;
 int ch;
 d.get();
 d.dis();
 cout<<"\n 1:linear 2:binary 3:exit\n:";
 while(ch!=3)
 {
   cout<<"\n enter choice:";
   cin>>ch;
   swich(ch)
   }
   case 1: d.linear():breck;
   case 2: d.sort():d-dis():d.binary():breck;
   case 3:exit(0):breck;
   }
}
getch();
}


