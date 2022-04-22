#include <iostream>
using namespace std;

class complex
{
	float real,image;
public:
	complex(){}
	complex(float a)
	{
	  real=image=a;
	}
	complex(float x,float y)
	{
	real=x;
	image=y;
	}
	friend complex sum(complex,complex);
	friend void display(complex);
};

complex sum(complex A,complex B)
{
	complex result;
	result.real=A.real+B.real;
	result.image=A.image+B.image;
	return result;
}

void display(complex number)
{
	if (number.image<0) 
	{
		cout<<number.real<<" "<<number.image<<"i"<<endl;
	} 
	else 
	{
		cout<<number.real<<" + "<<number.image<<"i"<<endl;
	}
}
int main() 
{
	int option;
	float num1,num2,num3;
	cout<<"\tWELCOME\t"<<endl;
	cout<<"\n";
	do {
		cout<<"Complex number 1"<<endl;
		cout<<"Enter real part: ";
		cin>>num1;
		cout<<"Enter imaginary part: ";
		cin>>num2;
		complex A(num1,num2);
		cout<<"\n";
		cout<<"Complex number 1: ";
		display(A);
		cout<<"\n";
		cout<<"Complex number 2"<<endl;
		cout<<"Enter the same real and image part: ";
		cin>>num3;
		complex B(num3);
		cout<<"\n";
		cout<<"Complex number 2: ";
		display(B);
		cout<<"\n";
		complex C;
		C=sum(A,B);
		cout<<"Sum: ";
		display(C);
		cout<<"\n";
		cout<<"Do you want to continue ?"<<endl;
		cout<<"If yes enter 1 if no enter 0"<<endl;
		cout<<"Enter your choice: ";
		cin>>option;
	} while (option);
	return 0;
}
