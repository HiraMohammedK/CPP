#include <iostream>
using namespace std;

class complex
{
	private:
		float x,y;
	public:
		complex(){}	

		complex(float a)	
		{
			x = y = a;
		}

		complex(float real, float imag)	
		{
			x = real;
			y = imag;
                        cout << "Enter the real part: " ;
                        cin >>x;
                        cout << "Enter the imaginary part: ";
                        cin >> y;
		}

		friend complex sum(complex, complex);
		friend void show(complex);
};

complex sum(complex c1, complex c2)	
{
	complex c3;
	c3.x = c1.x + c2.x;
	c3.y = c1.y + c2.y;
	return c3;
}

void show(complex c)	
{
       if(c.y>=0)
     {
	cout<<c.x<<" + "<<c.y<<" i " <<"\n";
     }
      else
      {
          cout<<c.x << " " << c.y << "i" << endl;
      }


}

int main()
{       float x,y;
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
        cout << "Complex number 1: " <<endl;
	complex A(x,y);
        cout << "Complex number 2: " <<endl;	
	complex B(x,y);		
	complex C;			

	C = sum(A,B);			
	cout << "A = ";show(A);	
	cout << "B = ";show(B);
	cout << "C = ";show(C);
       
         cout <<"Do you want to continue?" <<endl;
         cout <<"If yes press 1 or if no press 0";
         cin>>option;
         }while(option);
       

	

	return 0;
}
