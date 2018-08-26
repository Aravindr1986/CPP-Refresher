#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;
int main()
{
    cout<<"Square of 10000:"<<pow(10000,2);
    cout<<"\nTime:"<<time(NULL);
    cout<<"\nNot so Random numbers\n";
    for(int i=0;i<10;i++)
        cout<<"\n"<<rand();
    cout<<"\nSeeded random numbers\n";
    srand( (unsigned)time( NULL ) );
    for(int i=0;i<10;i++)
        cout<<"\n"<<rand();
}