//write a program to find the maximum number
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
       int a,b,c;
       cout<<"enter the first number:"<<"\n";
       cout<<"enter the second number:"<<"\n";
       cout<<"enter the third number:"<<"\n";
       cin>>a>>b>>c;
       if(a>b && a>c)
	cout<<a<<"\n a is maximum number";
       else if(b>a && b>c)
	cout<<b<<"\n b is maximum number";
       else
	cout<<c<<"\n c is maximum number";
       getch();
}