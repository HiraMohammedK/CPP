#include <iostream>
using namespace std;

template <class T>
class Calculator
{
  T num1,num2;
public:
	Calculator(T n1,T n2)
    {
		num1=n1;num2=n2;	
	}
	T add()
    {
	  return(num1+num2);
	}
	T subtract()
    {
       return(num1-num2);
	}
	T multiply()
    {
	   return(num1*num2);
	}
	T divide()
    {
		return(num1/num2);
	}
};
int main() 
{
	int choice,option,ch;
    cout<<"\tWELCOME\t" <<endl;
    cout<<"Do you want to continue?" <<endl;
    cout<<"If yes enter 1 if no enter 0" <<endl;
    cin>>option;
    if(option==0)
    {
        cout<<"THANK YOU" <<endl;
        return 0;
    }
	
	
	
	  float num1,num2;
		cout<<"Enter two numbers"<<endl;
		cin>>num1>>num2;
		Calculator <float> obj(num1,num2);
		do {
			cout<<"\nWhich operation would you like to perform?\n1:Addition\n2:Subtraction\n3:Multiplication\n4:Division\n5:Quit"<<endl;
			int key;
			cin>>key;
			switch (key) {
				case 1:
					cout<<"Sum = "<<obj.add()<<endl;
					break;
				case 2:
					cout<<"Difference = "<<obj.subtract()<<endl;
					break;
				case 3:
					cout<<"Product = "<<obj.multiply()<<endl;
					break;
				case 4:
					cout<<"Quotient = "<<obj.divide()<<endl;
					break;
				case 5:
					break;
			}
			 cout<<"Do you want to continue?" <<endl;
            cout<<"If yes enter 1 if no enter 0" <<endl;
        
			cin>>choice;
		} while (choice);
	
	return 0;
}