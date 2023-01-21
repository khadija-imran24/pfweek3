#include<iostream>
using namespace std;
main()
{
string studentName;
float matricMarks;
float interMarks;
float ecatMarks;
float matricPercent;
float interPercent;
float ecatPercent;
float total;
cout<<"enter your name:";
cin>>studentName;
cout<<"enter your Matric marks:";
cin>>matricMarks;
cout<<"enter your Inter Marks:";
cin>>interMarks;
cout<<"enter your ECAT marks:";
cin>>ecatMarks;
matricPercent=matricMarks/1100.0*100*0.10;
interPercent=interMarks/1100*100*0.40;
ecatPercent=ecatMarks/400*100*0.50;
total=matricPercent+interPercent+ecatPercent;
cout<<"Aggregate:"<<total;
}