#include <iostream>
#include <cstring>
using namespace std;

class String
{
	
		char *name;
		int length;
	public:
		String()	
		{
			length = 0;
			name = new char[length + 1];			
		}

		void getstring();
		void show(void);
	        void add(String &a, String &b);
		void compare(String &a,String &b);
	        void stringlength(void);
		
};
void String::getstring()
{
	
   cin >> name;

}
void String::show()
{
	cout  << name;
}
void String :: add(String &a, String &b)
{
	length = a.length + b.length;
	delete name;
	name = new char[length + 1];
	
	strcpy(name, a.name);
	strcat(name, b.name);	
};
void String:: compare(String &a,String &b)
{
  int m = strlen(a.name);
  int n = strlen(b.name);
  if (m < n)
  {
	  cout << "String 1 smaller than string 2";
  }
  else if(m > n)
  {
	  cout << "String 2 is smaller than string 1";
  }
  else
  {
	  cout <<"Both strings have equal lengths";
  }
}
 void String::stringlength()
 {
	 cout<< strlen(name) << endl;
 }
int main()
{
	String s1,s2,s3;
         int ch,choice;
         int option;
        cout<<"Do you want to continue? " <<endl;
        cout<<"If yes press 1 if no press 0" << endl;
        cin>>choice;
	  if(choice==0)
	   {
	     return 0;
	   }
do
  {
       
	cout <<"Enter string 1: ";
	 s1.getstring();
	 cout <<"Enter string 2: ";
	 s2.getstring();
	 cout <<"\n";
	 cout <<"\n\n";
	 cout << "string 1:" ;
	 s1.show();
         cout<<endl;
	 cout<<"string 2: ";
	 s2.show();
	 cout<<endl;
         cout << "\n";
        do
          {
		 cout<<"Which of the following operations you want to perform?"<<endl;
		 cout<<"1:Concatenation of strings" <<endl;
		 cout<<"2:Comparing strings" <<endl;
		 cout<<"3:Length of strings" <<endl;
		 cout<<"4:Exit" <<endl;
                 cin>>ch;
		 switch(ch)
		       {
			case 1: cout<<"\n";
				 cout <<"The concatenation give ";
				 s3.add(s1,s2);
				 s3.show();
                                 cout<<"\n\n";
		                 break;
			case 2:
				 cout<<"\n";
				 cout<<"Comparing both strings ";
				 s3.compare(s1,s2);
				 cout<<"\n\n";
		                 break;
			case 3:
				 cout<<"Length of string 1 is ";
				 s1.stringlength();
				 cout<<"\n\n";
				 cout<<"Length of string 2 is ";
				 s2.stringlength();
				 cout<<"\n";
		 		 break;
			case 4:break;
			}

	}while(ch!=4);
     cout<<"\n\n";
     cout<<"Do you want to continue? " <<endl;
         cout <<"If yes enter 1 or else enter 0" <<endl;
         cin >>option;
}while(option);


	return 0;
}
