#include<iostream>
using namespace std;

class bank
{
    char cust_name[30];
    int acc_no;
    char acc_type[20];
    float balance;
    int count = 0;

    public:
    void details();
    void deposit();
    void withdraw();
    void display();
   
};

void bank::details()
{
    cout << "Enter your name ";
    cin >> cust_name;
    cout << "Enter account number " ;
    cin >> acc_no;
    cout << "Enter type of account ";
    cin >> acc_type;
    cout << "Enter amount of money want to deposit";
    cin >> balance;
}
void bank::deposit()
{
    float amount;
    cout<<"Enter account number" <<endl;
    cin >> acc_no;
    cout << "Enter amount to be deposited";
    cin >> amount;

    balance= balance+amount;
    cout <<"Amount credited successfully" <<endl;

}
void bank::withdraw()
{
    float amt;
    cout<<"Enter account number" <<endl;
    cin >> acc_no;
    cout <<"Enter balance "<<endl;
    cin >>balance;
    cout << "Enter amount to be withdrawn " << endl;
    cin >> amt;
    if((balance-amt) >=500)
    {
        balance=balance-amt;
        cout <<"Amount debited successfully" << endl;
    }
    else
    {
       cout << "Insufficient balance " << endl;
    }


}
void bank::display()
{
    cout <<"Name : " << cust_name <<endl;
    cout <<"Account number: "<< acc_no <<endl;
    cout <<"Account type : " << acc_type <<endl;
    cout <<"Balance : " << balance << endl;
}

int main()
{
 bank customer[50];
int ch,n;
cout<<"Enter number of customers ";
cin >> n;
 for(int i=1;i<=n;i++)
 {    
       
     do
      { 
        cout<<"Customer " <<i+1 <<endl;
        cout <<"WELCOME" << endl;
        cout <<"Enter appropraite number"<<endl;
        cout <<"1:Add an account " << endl;
        cout <<"2:Deposit amount" <<endl;
        cout <<"3:Withdraw amount" <<endl;
        cout <<"4:Account statement" <<endl;
        cout <<"5:Quit" <<endl;
        cin >> ch;
        switch(ch)
         {
           
           case 1: customer[i].details();break;
           case 2: customer[i].deposit();break;
           case 3: customer[i].withdraw();break;
           case 4: customer[i].details();break;
           case 5: break;
          }
      }
      
      while(ch!=5);
       
 }   

   return 0;

}
