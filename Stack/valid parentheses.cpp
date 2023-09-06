#include <bits/stdc++.h>
#include<set>
using namespace std;
set<long long int> s;

bool isValidParentheses(string s)
{
    stack<char> c;
    for(int i=0; i<s.size(); i++)
    {
        //if we can find an opening bracket then we push it in stack.
        if(s[i]=='(' || s[i]=='{' ||s[i]=='[')
        {
            c.push(s[i]);
        }
        else if(c.empty()) return false;
        else //if we found an closing bracket then we check if the top element
            // is corsponding closing opening bracket is present then we pop the
            // top element.
        {
            if(s[i]==')' && c.top()=='(') c.pop();
            else if(s[i]=='}' && c.top()=='{') c.pop();
            else if(s[i]==']' && c.top()=='[') c.pop();
            else return false;
        }
    }
    if(c.size()==0) return true;
    else return false;
}

int main()
{
    string input;
    cout << "Enter a string with parentheses: ";
    cin >> input;

    if (isValidParentheses(input))
    {
        cout << "Parentheses are valid." << endl;
    }
    else
    {
        cout << "Parentheses are invalid." << endl;
    }

    return 0;
}




