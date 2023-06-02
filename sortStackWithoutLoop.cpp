#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; stack <int> s;
    cout<<"enter size of stack";
    cin>>n;
    cout<<"Enter numbers in stack";
    for(int i=1;i<=n;i++)
    {
        cin>>m;
        s.push(m);
    }
    void sort(stack<int> &stack)
    {
        if(stack.empty())
           return;
        int num=stack.top();
        stack.pop();
        sort(stack);
        sortedInsert(stack,num);
    }
   void sortedInsert(stack<int> &stack,int num)
    {
    if(stack.empty()||(!stack.empty()&&stack.top<num))
        stack.push(num);
    int n=stack.top();
    stack.pop();
    sortedInsert(stack,num);
}
