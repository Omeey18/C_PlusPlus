#include <iostream>
#include <list>
using namespace std;

int main()
{
    list<int> lst1, lst2;
    int i;
    for (int i = 0; i < 10; i+=2)
        lst1.push_back(rand()%20);
    
    for(int i=1;i<11;i+=2)
        lst2.push_back(rand()%20);
    cout << "Size = " << lst1.size() << endl;
    cout << "Contents: ";
    list<int>::iterator p = lst1.begin();
    while (p != lst1.end())
    {
        /* code */
        cout << *p << " ";
        p++;
    }
    cout << "\n\n";
    cout << "Size = " << lst2.size() << endl;
    cout << "Contents: ";
    list<int>::iterator p2 = lst2.begin();
    while (p2 != lst2.end())
    {
        /* code */
        cout << *p2 << " ";
        p2++;
    }
    cout << "\n\n";
    // lst1.sort();
    // cout << "Contents modified list 1: ";
    // p = lst1.begin();
    // while (p != lst1.end())
    // {
    //     /* code */
    //     cout << *p << " ";
    //     p++;
    // }
    // //cout << endl;
    // cout << "\n\n";
    // lst2.sort();
    // cout << "Contents modified list 2: ";
    // p2 = lst2.begin();
    // while (p2 != lst2.end())
    // {
    //     /* code */
    //     cout << *p2 << " ";
    //     p2++;
    // }
    // cout << endl;

    cout<<"After merge:\n";
    lst1.merge(lst2);
    cout << "Contents modified list 1: ";
        p = lst1.begin();
        while (p != lst1.end())
        {
            /* code */
            cout << *p << " ";
            p++;
        }
        //cout << endl;
        cout << "\n\n";
    if(lst2.empty()){
        cout<<"List 2 is empty now..!\n";
    }
    
    // p = lst1.end();
    // while (p != lst1.begin())
    // {
    //     /* code */
    //     p--;
    //     cout << *p << " ";
    // }
    return 0;
}