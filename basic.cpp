#include<iostream>
using namespace std;
#define pi 3.14;
/**********************************************************************************
Author : Aravind
Date : 8/18/2018
Description : This program illustrates the bascis of C++
*/
int g; //Global variable that is intialized to 0
int main()
{

    cout<<"Hello World!!";
    cout<<"\n Size of various data types!!\n-----------------------";
    cout << "Size of char : " << sizeof(char) << endl;
    cout << "Size of int : " << sizeof(int) << endl;
    cout << "Size of short int : " << sizeof(short int) << endl;
    cout << "Size of long int : " << sizeof(long int) << endl;
    cout << "Size of float : " << sizeof(float) << endl;
    cout << "Size of double : " << sizeof(double) << endl;
    cout << "Size of wchar_t : " << sizeof(wchar_t) << endl;

    typedef int integer;
    integer x = 100;
    cout<<"\ncool I renamed int to integer : "<<x;

    enum cars {corolla=3,camry=4,altima =2} power;  //Enums can strictly be integer/bytes!!!
    power = corolla;
    cout<<"\nEnum time!! Power of corolla engine is "<<power<<"!!";
    cout<<"\nData Types\n**********\n";

    float fval=343.55;
    bool tof=false;
    cout<<"\nfloat value = "<<fval<<" bool value = "<<tof;
    cout<<"\nGlobal variable intialization : "<<g;

    const float pif= 3.14;
    cout<<"\nconstant using #define pi ="<<pi;
    cout<<" and const pi ="<<pif;
    /*Storage classess*/
    int auto inte=0;
    cout<<"\nAuto class:"<<inte;
    return 0;
}