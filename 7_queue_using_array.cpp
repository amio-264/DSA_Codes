#include <bits/stdc++.h>
using namespace std;

class Queue
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
            v.erase(v.begin());
        }
        else
        {
            cout << "Queue is empty! Cannot pop.\n";
        }
    }
    int front()
    {
        if (!v.empty())
        {
            return v.front();
        }
        else
        {
            cout << "Queue is empty! No front element.\n";
            return -1;
        }
    }
    int back()
    {
        if (!v.empty())
        {
            return v.back();
        }
        else
        {
            cout << "Queue is empty! No back element.\n";
            return -1;
        }
    }
    void display()
    {
        if (v.empty())
        {
            cout << "Queue is empty!\n";
            return;
        }
        cout << "Queue elements (front to back): ";
        for (int x : v)
            cout << x << " ";
        cout << endl;
    }
};
int main()
{
    Queue q;
    q.push(10);
    q.push(20);
    q.push(30);
    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
    q.display();
    q.pop();
    cout << "After pop:\n";
    q.display();
    return 0;
}
