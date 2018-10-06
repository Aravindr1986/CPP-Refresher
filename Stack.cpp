#include<iostream>
#include<vector>
using namespace std;
void pop(vector<int> &stack);   //
void push(vector<int> &stack);
void displayStack(vector<int> &stack);
void peek(vector<int> &stack);
void printmenu()    //print the entire menu
{
    cout<<"\nStack Operations"<<"\n***************";
    cout<<"\n1.Push an element"<<"\n2.Pop an element\n3.Peek the stack\n4.Display the Stack\n5.Exit the program";
    cout<<"\n Enter your choice:";
}
int main()
{
    vector<int> stack;
    int ch=-1;
    do{
        printmenu();
        cin>>ch;
        switch (ch)
        {
            case 1: push(stack);
                break;
            case 2: pop(stack);
                break;
            case 3: peek(stack);
                break;
            case 4: displayStack(stack);;
                break;
            default:cout<<"\nBye bye!!";
        }
    }while(ch!=5);


}
void peek(vector<int> &stack)   //find the top most element in the stack
{
    int ele = stack.back();
    cout<<"The top of the stack is :";
    cout<<ele;    
}
void displayStack(vector<int> &stack)   //display the entire stack
{

    cout<<"The stack is :";
    for(vector<int>::iterator i=stack.begin();i!=stack.end();i++)
    {
        cout<<"\n"<<*i;
    }
}
void pop(vector<int> &stack)    //remove the top most element in the stack  
{
    int element=stack.back();
    cout<<"\nTop of the stack:"<<element;
    stack.pop_back();
}
void push(vector<int> &stack)   //enter an element in the stack
{
    int newelement;
    cout<<"Enter the element:";
    cin>>newelement;
    stack.push_back(newelement);
}
