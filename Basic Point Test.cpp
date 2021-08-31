/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <stdio.h>
#include <stack>
using namespace std;

//Initalize the structure
struct test
{
    int counter[5];
    char string[50];
};

int main()
{
    //==========Get function==============
    struct test a;
    printf("String: ");
    gets (a.string);
    cout<<a.string<<endl; 
    
    //==========Pop Function==============
    //Loop and show the counter value
    int k = 0;
    cout<<"All Counter Value:";
    for(int i = 0; i<5; i++)
    {
        k = k + 100;
        a.counter[i] = k;
        cout<<" "<<a.counter[i];
    }
    
    cout<<endl;
    
    //Apply Pop function to decrement the counter value to show
    cout<<"After Pop Function:";
    stack<int> pp; //Stack the counter value before apply Pop function
    pp.push(a.counter[0]);
    pp.push(a.counter[1]);
    pp.push(a.counter[2]);
    pp.push(a.counter[3]);
    pp.push(a.counter[4]);
    
    //Decremented the counter number and changed the Top value
    pp.pop();
    pp.pop();
    
    while (!pp.empty())
    {
        cout<<" "<<pp.top();
        pp.pop();
    }
    
}
