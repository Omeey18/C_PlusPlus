#include <iostream>
#include<fstream>
using namespace std;

class student{
    public:
    int roll;
    char name[25];
    float marks;

    void getData(){
        cout<<"Enter roll no and name"<<endl;
        cin>>roll>>name;
        cout<<"marks:\n";
        cin>>marks;
    }
    void addRecord(){
        fstream f;
        student stu;
        f.open("student.dat",ios::app);
        stu.getData();
        f.write((char *)&stu, sizeof(stu));
        cout<<"Updated\n";
        f.close();
    }
};

int main()
{
    student s1;
    //s1.getData();
    s1.addRecord();
    return 0;
}