//this is my first c++ project
//manage bank account
#include<iostream>
using namespace std;

class bank
	{
	 private:
		int ac_no;
		char depositor_name[20],ac_type[20];
		float balance,baladd,balsub;
	public:
		void getdata();
		void check();
		void deposit();
		void withdraw();
		void show_detail();
	};
//input all data related to depositor
void bank::getdata()
 {
  cout<<"enter the name of depositor :";
  cin>>depositor_name;
  cout<<"enter account no of depositor :";
  cin>>ac_no;
  cout<<"enter type of account :";
  cin>>ac_type;
  cout<<"enter ammount of balance :";
  cin>>balance;
 }

//depositing ammount
void bank::deposit()
{
 cout<<"\nadd ammount to your account :";
 cin>>baladd;
 balance = balance + baladd;
}
//check ammount of balance
void bank::check()
{
 cout<<depositor_name<<" your account balance is :"<<balance;
}
//withdraw ammount

void bank::withdraw()
{
 cout<<"\nenter the ammount that you want to withdraw :";
 cin>>balsub;
 balance = balance - balsub;
}

//show all detail related to account

void bank::show_detail()
{
 cout<<"\n name of depositor is = "<<depositor_name;
 cout<<"\n account balance is = "<<balance;
 cout<<"\n account type is = "<<ac_type;
 cout<<"\n account no is = "<<ac_no;
 cout<<"\n deposited ammount = "<<baladd;
 cout<<"\n withdraw ammount is = "<<balsub;
}
// main program to use this class
 int main()
 {
  bank obj;
  obj.getdata();
  obj.deposit();
  obj.check();
  obj.withdraw();
  obj.show_detail();
  return 0;
 }
