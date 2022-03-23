#include <iostream>
#include<list>
using namespace std;

int main()
{
   list<char> lst1;
   list<char>lst2;
   int i;
   for(int i=0;i<10;i++){
       lst1.push_back('a'+ i);
   }
   cout<<"Size = "<<lst1.size()<<endl;
   cout<<"Contents: ";
   list<char>::iterator p = lst1.begin();
   while (p!=lst1.end())
   {
       /* code */
       cout<< *p << " ";
       p++;
   }

   for(int i=0;i<10;i++){
       lst2.push_back('k'+ i);
   }
   cout<<"\nSize = "<<lst2.size()<<endl;
   cout<<"Contents: ";
   //list<char>::iterator 
   p = lst2.begin();
   while (p!=lst2.end())
   {
       /* code */
       cout<< *p << " ";
       p++;
   }
    cout<<"\nAfter merge:\n";
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
//    cout<<"\n\n";
//    p = lst1.begin();
//    while ( p!= lst1.end())
//    {
//        /* code */
//        *p = *p + 100;
//        p++;
//    }
//    cout<<"Contents modified: ";
//    p = lst1.begin();
//    while (p!= lst1.end())
//    {
//        /* code */
//        cout<<*p<<" ";
//        p++;
//    }
//    cout<<endl;
//    p = lst1.end();
//    while (p!= lst1.begin())
//    {
//        /* code */
//        p--;
//        cout<<*p<<" ";
//    }
    return 0;
}