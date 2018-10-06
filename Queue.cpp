#include<iostream>
#include<vector>
using namespace std;
void pop(vector<int> &queue);   //
void push(vector<int> &queue);
void displayqueue(vector<int> &queue);
void peek(vector<int> &queue);
void printmenu()    //print the entire menu
{
    cout<<"\nQueue Operations"<<"\n***************";
    cout<<"\n1.Push an element"<<"\n2.Pop an element\n3.Peek the queue\n4.Display the queue\n5.Exit the program";
    cout<<"\n Enter your choice:";
}
int main()
{
    vector<int> queue;
    int ch=-1;
    do{
        printmenu();
        cin>>ch;
        switch (ch)
        {
            case 1: push(queue);
                break;
            case 2: pop(queue);
                break;
            case 3: peek(queue);
                break;
            case 4: displayqueue(queue);;
                break;
            default:cout<<"\nBye bye!!";
        }
    }while(ch!=5);


}
void peek(vector<int> &queue)   //find the top most element in the queue
{
    int ele = queue.front();
     cout<<"The top of the queue is :";
    cout<<ele;    
}
void displayqueue(vector<int> &queue)   //display the entire queue
{

    cout<<"The queue is :";
    for(vector<int>::iterator i=queue.begin();i!=queue.end();i++)
    {
        cout<<"\n"<<*i;
    }
}
void pop(vector<int> &queue)    //remove the top most element in the queue  
{
    int element=queue.front();
    cout<<"\nTop of the queue:"<<element;
    queue.erase(queue.begin()); //delete the begining element of the queue
}
void push(vector<int> &queue)   //enter an element in the queue
{
    int newelement;
    cout<<"Enter the element:";
    cin>>newelement;
    queue.push_back(newelement);
}
