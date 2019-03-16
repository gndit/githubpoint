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
  int initialbal=0;
  cout<<"Enter the name of depositor :";
  cin>>depositor_name;
  cout<<"Enter account no of depositor :";
  cin>>ac_no;
  cout<<"Enter type of account :";
  cin>>ac_type;
  cout<<"\n Initial balance is :"<<initialbal;
  cout<<"\nEnter ammount of balance :";
  cin>>balance;
 }

//depositing ammount
void bank::deposit()
{
 cout<<"\nAdd ammount to your account :";
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
 cout<<"\nEnter the ammount that you want to withdraw :";
 cin>>balsub;
 balance = balance - balsub;
 if(balance<balsub)
{
 cout<<"\n Insufficient balance :";
}
}

//show all detail related to account

/*void bank::show_detail()
{
 cout<<"\n name of depositor is = "<<depositor_name;
 cout<<"\n account balance is = "<<balance;
 cout<<"\n account type is = "<<ac_type;
 cout<<"\n account no is = "<<ac_no;
 cout<<"\n deposited ammount = "<<baladd;
 cout<<"\n withdraw ammount is = "<<balsub;
}*/
// main program to use this class
 int main()
 {
  int i;
  bank obj[10];
for(i=0;i<10;i++)
{
  obj[i].getdata();
   obj[i].check();
  obj[i].deposit();
  obj[i].check();
  obj[i].withdraw();
  //obj[i].show_detail();
  cout<<"\nEnter the details of another depositor \n";
}
  return 0;
 }
