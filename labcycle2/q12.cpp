#include<iostream>
using namespace std;

class complex
{
	float x;
	float y;
	
	public:
		void input();
		friend complex sum(complex, complex);
		void show(complex);	
};
void complex::input()
{
	cout<<"Enter the real part: ";
	cin>>x;
	cout<<"Enter the imaginary part: ";
	cin>>y;
}
complex sum(complex c1, complex c2)
{
	complex c3;	
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return(c3);	
}

void complex :: show(complex c)
{       if(c.y>=0)
     {
	cout<<c.x<<" + "<<c.y<<" i " <<"\n";
     }
      else
      {
          cout<<c.x << " " << c.y << "i" << endl;
      }
}

int main()
{
	complex A, B, C;
        int option,choice;
	       
	  cout<<"Do you want to continue? " <<endl;
	  cout<<"If yes press 1 if no press 0" << endl;
	  cin>>choice;
		  if(choice==0)
		   {
		     return 0;
		   }
        do
        {
		cout<<"Complex number 1 "<<endl;
		A.input();
		cout<<"Complex number 2 "<<endl;
		B.input();
		
		C = sum(A, B);	
		
		cout<< "A = ";A.show(A);
		cout<< "B = ";B.show(B);
		cout<< "C = ";C.show(C);
                cout <<"Do you want to continue?" <<endl;
                cout <<"If yes press 1 or if no press 0";
                cin>>option;
         }while(option);
       
		
	return 0;
}
