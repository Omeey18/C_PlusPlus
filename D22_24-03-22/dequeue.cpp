#include <iostream>
#include <deque>
#include <bits/stdc++.h>
using namespace std;

void showdq(deque<int> q)
{
    deque<int>::iterator i;
    for (i = q.begin(); i != q.end(); ++i)
        cout << ' ' << *i;
    cout << '\n';
}

int main()
{
    deque<int> q1;
    deque<int>::iterator p;
    int n, val, s;
    cout<<"Enter size of queue: ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        q1.push_front(val);
    }
    cout<<"\nQueue data: ";
    showdq(q1);
    cout << "\nEnter value of subset size:";
    cin >> s;
    int check[s];
    int count = 1;
    cout<<endl;
    for (p = q1.begin(); p != q1.end();){
        int temp = s;
        cout<<"[ ";
        while(temp!=0){
            cout<<*p<<" ";
            check[temp-1]=*p;
            p++;
            temp--;
            if(p==q1.end())
                break;
        }   
        cout<<"]";
        int len = sizeof(check)/sizeof(check[0]);
        sort(check,check+len);
        cout<<"  :  ["<<check[0]<<", "<<check[s-1]<<"]\n";
        if(p==q1.end())
            break;
        p = q1.begin()+count;
        count++;
    }
    //cout<<"]\n";

   

    return 0;
}