//Create a class student that stores roll_no,name.Create a class test that stores marks obtained in five subjects. Class result derived from student and test contains the total marks and percentage obtained in test. Input and display information of a student.//



#include<iostream>
using namespace std;



class student{
public:
void roll_no(){
int z;
cout<<"Enter the Roll Call of the Student:"<<endl;
cin>>z;

}

void name(){
int y;
cout<<"Enter the Name of the Student:"<<endl;
cin>>y;

}

};



class test{
public:
int a,b,c,d,e;
void marks(){
    
cout<<"Enter the Marks of Science"<<endl;
cin>>a;
cout<<"Enter the Marks of Social"<<endl;
cin>>b;
cout<<"Enter the Marks of Maths"<<endl;
cin>>c;
cout<<"Enter the Marks of English"<<endl;
cin>>d;
cout<<"Enter the Marks of Computer"<<endl;
cin>>e;
}

};



class result:public student,public test{
public:
int total;
void total_marks(){
total=a+b+c+d+e;
cout<<"Total:"<<total<<endl;
}

void percentage(){
float perc;
perc= (total/500)*100;
cout<<"Percentage is:"<<perc<<endl;

}

};
int main(){
student s;
s.roll_no();
s.name();
//test t;
result r;
r.marks();
cout<<"The result is:"<<endl;



return 0;
}