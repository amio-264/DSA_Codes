#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    vector<int> v;
    void push(int val)
    {
        v.push_back(val);
    }
    void pop()
    {
        if (v.empty())
            cout << "Stack is empty";
        else
            v.pop_back();
    }
    int top()
    {
        if (!v.empty())
            return v.back();
        else
            cout << "Stack Empty.";
        return -1;
    }
    void display()
    {
        if (!v.empty())
        {
            cout << "Stack: ";
            for (int i = v.size() - 1; i >= 0; i--)
            {
                cout << v[i] << " ";
            }
        }
        else
        {
            cout << "Stack is empty.";
        }
    }
};
int main()
{
    Stack s;
    s.push(0);
    s.push(4);
    s.push(6);
    cout << "Top: " << s.top() << endl;
    cout << "After pushing: \n";
    s.display();
    s.pop();
    cout << "\nAfter popping: \n";
    s.display();
    return 0;
}