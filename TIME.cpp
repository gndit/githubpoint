#include<iostream>
using namespace std;
 
 class TIME
{
   private:
    int h,m,s;
  public:
       void gettime(int,int,int);
	void display();
	void sumtime(TIME,TIME);
};

void TIME::gettime(int x,int y,int z)
{
  h=x;m=y;s=z;
}
 void TIME::display()
{
 cout<<"sum of time is "<<h<<":"<<m<<":"<<s<<"\n";
}
  
 void TIME::sumtime(TIME t1,TIME t2)
 {
  s=s.t1+s.t2;
  m=s/60;
  s=s%60;
  m=m+m.t1+m.t2;
  h=m/60;
  m=m%60;
  h=h+h.t1+h.t2;
}

int main()
{
 TIME t1,t2,t3;
 t1.gettime();
 t1.display();
 t2.gettime();
 t2.display();
 t3.sumtime(t1,t2);
 t3.display();
 return 0;
}
 	
