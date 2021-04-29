#include<iostream>
#include<conio.h>
using namespace std;
 
float monthly(float rain[]);
float dtotal(float rain[]);
float average(float rain[]);
float dhighest(float rain[]);
float dlowest(float rain[]);
int month,i;
 
float highest,lowest,total;
int main()
{
 float rain[36];
 int n,i;
 for(i=0; i<36;i++)
 {
 cout<<"Enter Rainfall for month "<<(i+1)<<" : ";
 cin>>rain[i];
 }
 while (1)
 {
 cout<<"\nPress 1 for Display monthly amounts.\n";
 cout<<"Press 2 for Display total amount.\n";
 cout<<"Press 3 for Display average amount.\n";
 cout<<"Press 4 for Display highest amount.\n";
 cout<<"Press 5 for Display lowest amount.\n";
 cout<<"Press 6 for End Program.\n";
 cout<<"Enter your choice here: ";
 cin>>n;
 switch (n)
 {
 case 1: 
 monthly(rain);
 break;
 case 2:
 cout<<"\n\nThe total rainfall amounts for the entire year: "<<dtotal(rain);
 break;
 case 3:
 cout<<"\n\nThe average rainfall amounts during the year: "<<average(rain);
 break;
 case 4:
 dhighest(rain);
 break;
 case 5:
 dlowest(rain);
 break;
 case 6:
 cout<<"End program...";
 exit(0);
 break;
 default:
 cout<<"Invalid! selection Please Select given Options!!";
 break;
 }
 }
 
 getch();
}
float monthly(float rain[])
{
 int i;
 for(i=0; i<36; i++)
 {
 cout<<"Rainfall for month "<<(i+1)<<" : "<<rain[i]<<endl;
 }
 cout<<endl;
 return 0;
}
float dtotal(float rain[])
{
 total=0;
 for(i=0; i<36; i++)
 {
 total+=rain[i];
 }
 return total;
}
float average(float rain[])
{
 float avg;
 avg = dtotal(rain)/36.0;
 return avg;
 
}
float dhighest(float rain[])
{
 month=0;
 highest=rain[0];
 for(i=1; i<36; i++)
 {
 if(rain[i] > highest)
 {
 highest = rain[i];
 month = i;
 }
 }
 cout<<"\n\nThe month "<<(month+1)<<" has the highest rainfall amount "<<highest<<endl;
}
float dlowest(float rain[])
{
 month=0;
 lowest = rain[0];
 for(i=1; i<36; i++)
 {
 if(rain[i] < lowest)
 {
 lowest=rain[i];
 month = i;
 }
 }
 cout<<"\n\nThe month "<<(month+1)<<" has the lowest rainfall amount "<<lowest<<endl;
}
