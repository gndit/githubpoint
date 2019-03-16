#include<iostream>
using namespace std;

class stu
{
 char name[10],sex;
 int age;
public:
   void getdata();
   void showdata();
};
void stu::getdata()
{
 cout<<"Enter your name: ";cin>>name;
 cout<<"\nEnter your sex:";cin>>sex;
 cout<<"\nEnter your age :";cin>>age;
}
void stu::showdata()
{
 cout<<"your name is ="<<name<<"\nyour age is="<<age<<"\n sex is="<<sex;
}
class sub:public stu
{
 char subject[5];
 float mark;
 public:
  float total;
    void get();
    void show();
};
void sub::get()
{
int i,sum=0;
 for(i=0;i<5;i++)
{
 cout<<"Enter subject name :";cin>>subject;
 cout<<"\nEnter mark:";cin>>mark;
 sum=sum+mark;
 total=sum;
 }
}
void sub::show()
{
 cout<<"\n total marks is :"<<total;
}
class perc:public sub
{
 float per;
 public:
   void calculate();
   void calcper();
};
void perc::calculate()
{
 per=(float)(total*100)/500;
}
void perc::calcper()
{
 cout<<"\nPercentage is :"<<per;
}
int main()
{
 perc obj;
 obj.getdata();
 obj.get();
 obj.calculate();
 obj.showdata();
 obj.show();
 obj.calcper();
 return 0;
}

 
