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
        if (!v.empty())
        {
            v.pop_back();
        }
        else
        {
            cout << "Stack is empty! Cannot pop.\n";
        }
    }
    int top()
    {
        return v.back();
    }
    int size()
    {
        return v.size();
    }
    bool empty()
    {
        return v.empty();
    }
    void display()
    {
        if (v.empty())
        {
            cout << "Stack is empty!\n";
            return;
        }
        cout << "Stack elements (top to bottom): ";
        for (int i = v.size() - 1; i >= 0; i--)
        {
            cout << v[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Stack st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << "After pushing:\n";
    st.display();
    st.pop();
    cout << "After popping:\n";
    st.display();
    return 0;
}