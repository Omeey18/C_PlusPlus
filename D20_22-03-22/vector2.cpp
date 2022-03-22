#include <iostream>
#include<vector>
using namespace std;

int main()
{
    vector<char> v(10);
    vector<char>::iterator p;//create an iterator
    int i;

    //assign elements in ventor a value
    p = v.begin();
    i=0;
    while(p!= v.end()){
        *p = i + 'a';
        p++;
        i++;
    }
    cout<<"Original content:\n";
    p = v.begin();
    while(p!=v.end()){
        cout<<*p << " ";
        p++;
    }
    //change contents of vector
    p = v.begin();
    while (p != v.end())
    {
        /* code */
        *p = toupper(*p);
        p++;
    }
    p = v.begin();
    p++;
    v.insert(p,3,'z');

    cout<<"\nModified Contents:\n";
    p = v.begin();
    while (p!= v.end())
    {
        /* code */
        cout<<*p<<" ";
        p++;
    }
    p = v.begin()+3;
    v.erase(p,v.end());
    //v.clear();
    cout<<v.empty();
    p = v.begin();
    cout<<endl;
    while (p!= v.end())
    {
        /* code */
        cout<<*p<<" ";
        p++;
    }

        return 0;
}