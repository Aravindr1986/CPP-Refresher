#include<iostream>
using namespace std;
/* Function overloading*/
int operations(int a,int b);
int operations(int a);
void operations(int *a,int *b); //pass by pointer
//void operations(int &a,int &b); //pass by reference
void operations(int &a,int &b,int z); //pass by reference

int main()
{
    cout<<"Enter the number:";
    int x,y;
    int z=44;
    cin>>x;
    cin>>y;
    cout<<"\nMultiplication x*y : "<<operations(x,y)<<"\nSquare X^2:"<<operations(x);
    operations(&x,&y);      //passing address of x and y
    cout<<"\n Passing by pointer : "<<x<<" "<<y;
   // operations(x,y); //will cause error with function overloading
    operations(x,y,z); //pass by reference
    cout<<"\nPassing by referecne: "<<x<<" "<<y;
    cout<<"\nUsing Default"<<
}
void operations(int &a,int &b,int z)
{
    a+=z;
    b+=z;
}
void operations(int *x,int *y)
{
    *x+=1;
    *y+=1;
}
int operations(int c,int d)
{
    return(c*d);
}
int operations(int v)
{
    return(v*v);
}
