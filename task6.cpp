#include<iostream>
using namespace std;
main()
{
int MB;
int KB=1024;
int bytes=1024;
int bit=8;
int bits;
cout<<"enter MBs:";
cin>>MB;
bits=MB*KB*bytes*bit;
cout<<"bits is:"<<bits;
}