#include<iostream>
using namespace std;

class class_2;

class class_1
{
	int value1;
	
	public:
		void indata()
		{       cout<<"Enter value 1: ";
                        cin>>value1;
			
		}
		void display(void)
		{
		   cout << value1 << "\n";
		}
		friend void exchange(class_1 &, class_2 &);
};

class class_2
{
	int value2;
	
	public:
		void indata()
		{
			cout<<"Enter value 2: ";
                        cin>>value2;
			
		}
		void display(void)
		{
			cout << value2 << "\n";
		}
		friend void exchange(class_1 &, class_2 &);
};

void exchange(class_1 &x, class_2 &y)
{
	int temp = x.value1;
	x.value1 = y.value2;
	y.value2 = temp;
}

int main()
{
	class_1 C1;
	class_2 C2;
        int option,choice;
	       
  cout<<"Do you want to continue? " <<endl;
  cout<<"If yes press 1 if no press 0" << endl;
  cin>>choice;
	  if(choice==0)
	   {
	     return 0;
	   }
	do{
		C1.indata();	
		C2.indata();
		
		cout<<"Values Before Exchanging" << "\n";
		C1.display();
		C2.display();
		
		exchange(C1, C2);
		
		cout<<"Values After Exchanging" << "\n";
		C1.display();
		C2.display();
                cout <<"Do you want to continue?" <<endl;
                cout <<"If yes press 1 or if no press 0"<<endl;
                cin>>option;
           }while(option);
  	
		
	return 0;
}
