#include<iostream.h>
#include<conio.h>
int main()
{
	clrscr();
	int p,r,t,interest;
	cout<<"enter the p:"<<"\n";
	cin>>p;
	cout<<"enter the r:"<<"\n";
	cin>>r;
	cout<<"enter the t:"<<"\n";
	cin>>t;
	interest=(p*r*t)/100;
	cout<<"simple interest:"<<interest;
	getch();
	return 0;
}