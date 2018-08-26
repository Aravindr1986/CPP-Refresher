#include<iostream>
using namespace std;
int main()
{
    cout<<"For Loop\n--------\n";
    for(int i=0;i<10;i++)
        cout<<"\nToday is going to be a Great day!!";
    cout<<"\nWhile Loop\n----------\n";
    int i=0;
    while(i<10)
    {
        cout<<"\nCarpe Diem!!";
        i++;
    }
    cout<<"\nDo-While Loop\n--------------\n";
   label1: i=0;
    do
    {
        cout<<"\nMake Today yours!!";
        i++;
    }while(i<10);
    if(i>=10)
    {
        cout<<"\n If statement executes!!";
        
    }
    else
    {
        goto label1;
    }
    
    
}