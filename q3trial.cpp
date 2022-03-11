#include<iostream>
using namespace std;

class bank
{
    char cust_name[30];
    int acc_no;
    char acc_type[20];
    float balance;
   

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
    cout << "Enter type of account(s/c) ";
    cin >> acc_type;
    cout << "Enter amount of money want to deposit";
    cin >> balance;
    cout<<"Account created successfully" <<endl;
   
    
}
void bank::deposit()
{
    float amount;
   
    cout << "Enter amount to be deposited";
    cin >> amount;

    balance= balance+amount;
    cout <<"Amount credited successfully" <<endl;

}
void bank::withdraw()
{
    float amt;

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
 const int cust_num=100;
 int option;
 

 bank* customer=new bank[100];
int ch;
 int i;
 int acc_no;
 
 for (int i = 0; i < cust_num; ++i)
 {  do
    {
       cout<<"Customer" << i+1 <<endl;
        cout <<"WELCOME" << endl;
        cout <<"Enter appropraite number"<<endl;
        cout <<"1:Add an account " << endl;
        cout <<"2:Deposit amount" <<endl;
        cout <<"3:Withdraw amount" <<endl;
        cout <<"4:Account statement" <<endl;
       
        cin >> ch;
       
            if(ch==1)
            {   
                customer[i].details();
                cout <<"Account number: " << i <<endl;
               
            }
            else
            {
                cout <<"Enter account number:  " <<endl;
                cin >> acc_no;
                if(acc_no>i)
                {
                    cout<<"This account number does not exist" <<endl;
                    cout<<"Try again" <<endl;
                }
                else
                {
                    switch(ch)
                    {
                        case 2:customer[acc_no].deposit();break;
                        case 3:customer[acc_no].withdraw();break;
                        case 4:customer[acc_no].display();break;
                    }
                }
            }
      cout<<"Do you want to continue? " <<endl;
      cout<<"1:Continue" <<endl;
      cout<<"2:Next customer" <<endl;
      cout<<"3:Exit" <<endl;
      cin >>option;
    }while(option==1);
    if(option == 3)
    {
        break;
    }
 
     
 }                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                            
    
   
   return 0;

}
