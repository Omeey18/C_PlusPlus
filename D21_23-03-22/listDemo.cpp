#include <iostream>
#include<list>
using namespace std;

int main()
{
   list<int> lst;
   int i;
   for(int i=1;i<=10;i++){
       lst.push_back(i);
   }
   cout<<"Size = "<<lst.size()<<endl;
   cout<<"Contents: ";
   list<int>::iterator p = lst.begin();
   while (p!=lst.end())
   {
       /* code */
       cout<< *p << " ";
       p++;
   }
   cout<<"\n\n";
   p = lst.begin();
   while ( p!= lst.end())
   {
       /* code */
       *p = *p + 100;
       p++;
   }
   cout<<"Contents modified: ";
   p = lst.begin();
   while (p!= lst.end())
   {
       /* code */
       cout<<*p<<" ";
       p++;
   }
   cout<<endl;
   p = lst.end();
   while (p!= lst.begin())
   {
       /* code */
       p--;
       cout<<*p<<" ";
   }
    return 0;
}