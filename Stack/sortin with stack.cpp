#include <bits/stdc++.h>
using namespace std;

void sortedInsert(stack<int> &s, int num)
{
    if (s.empty() || (!s.empty() && s.top() < num))
    {
        s.push(num);
        return;
    }
    int n = s.top();
    s.pop();
    sortedInsert(s, num);
    s.push(n);
}
void solve(stack<int> &s)
{
    if (s.empty())
    {
        return;
    }
    int num = s.top();
    s.pop();
    solve(s);

    sortedInsert(s, num);
}
void sortStack(stack<int> &stack)
{
    solve(stack);
}

int main()
{
    stack<int> s;
    s.push(1);
    s.push(5);
    s.push(2);
    s.push(-2);
    s.push(10);

    sortStack(s);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;

    return 0;
}
