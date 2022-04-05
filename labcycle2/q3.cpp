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
    void acc_balance();
    void display(int);
   
};

void bank::details()

{   
    cout << "Enter your name: ";
    cin >> cust_name;
    cout << "Enter type of account(s/c): ";
    cin >> acc_type;
    cout << "Enter amount of money want to deposit: ";
    cin >> balance;
    cout<<"Account created successfully: " <<endl;
   
    
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
void bank::acc_balance()
{
  cout <<"Balance is " << balance <<endl;

}
void bank::display(int x)
{  
    cout <<"Name : " << cust_name <<endl;
    cout <<"Account number: "<< x <<endl;
    cout <<"Account type : " << acc_type <<endl;
    cout <<"Balance : " << balance << endl;
}

int main()
{
 
 int option;
 

 bank  *customer=new bank[100];
int ch;
 int i=0;
 int acc_no;
int count;
 

  do
    {
      
        cout <<"\tWELCOME\t" << endl;
        cout <<"Enter your choice"<<endl;
        cout <<"1:Add an account " << endl;
        cout <<"2:Deposit amount" <<endl;
        cout <<"3:Withdraw amount" <<endl;
        cout<<"4:Balance Enquiry" <<endl;
        cout <<"5:Account statement" <<endl;
       
        cin >> ch;
       
            if(ch==1)
            {   
                customer[i].details();
                cout <<"Account number: " << i <<endl;
                i=i+1;
               
            }
            else
            {
                cout <<"Enter account number:  " <<endl;
                cin >> acc_no;
                if(acc_no>i-1)
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
                        case 4:customer[acc_no].acc_balance();break;
                        case 5:customer[acc_no].display(acc_no);break;
                    }
                }
            }
      cout<<"Do you want to continue? " <<endl;
      cout<<"1:Continue" <<endl;
      cout<<"0:Exit" <<endl;
      cin >>option;
    }while(option);
                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                             
    
   
   return 0;

}
