//author: OM PATEL

#include<iostream>
using namespace std;


//base class
class student
{
   //private members
   int marks;
   char name[20];

   public:
   //public variables
   int rollno;

   //getdata method
   void getdata()
   {
      cout << "Enter rollno: ";
      cin >> rollno;
      cout << "Enter name: ";
      cin >> name;
      cout << "Enter marks: ";
      cin >> marks; 
   }

   //printdata method
   void printdata()
   {
      cout << "Roll no.: " << rollno << "\nName: " << name << "\nMarks: " << marks << endl;
   }
};

//derived class
class monitor : public student
{
   
};

int main()
{
   //creating obj of base class
   student s1;
   //creating pointer of derived class
   monitor *ptr;
   //assign value of base class obj to derived class pointer
   ptr = (monitor*)&s1;

   //calling member functions of base class using derived class pointer
   for(int i=0;i<3;i++)
   {
      ptr->getdata();
      //incrementing pointer to increment address of next obj
      ptr++;
   }

   cout << "\nEmployee information\n" << endl;

    //set pointer to starting point of array
   ptr = (monitor*)&s1;

//calling member functions of base class using derived class pointer
   for(int i=0;i<3;i++)
   {
      ptr->printdata();
      ptr++;
   }
   return 0;
}