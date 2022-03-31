#include <iostream>
using namespace std;

class Complex
{
	float real;
	float imag;
public:
	void get_number();
	void display_complex();
	friend Complex operator+(Complex,Complex);
	friend Complex operator*(Complex,Complex);
};

void Complex::get_number()
{
	cout<<"Enter the real part"<<endl;
	cin>>real;
	cout<<"Enter the image part"<<endl;
	cin>>imag;
}

void Complex::display_complex()
{
	if (imag<0) 
	{
		cout<<real<<" "<<imag<<"i"<<endl;
	}
	else 
	{
		cout<<real<<" + "<<imag<<"i"<<endl;
	}
}

Complex operator+(Complex A,Complex B){
	Complex temp;
	temp.real = A.real+B.real;
	temp.imag = A.imag+B.imag;
	return temp;
}

Complex operator*(Complex A,Complex B){
	Complex temp;
	temp.real = (A.real*B.real)-(A.imag*B.imag);
	temp.imag = (A.imag*B.real) + (A.real*B.imag);
	return temp;
}
int main() 
{
	int option;
	cout<<"\tWELCOME\t"<<endl;
	cout<<"Do you want to proceed?"<<endl;
	cout<<"1:Yes"<<endl;
	cout<<"2:No"<<endl;


	cin>>option;

	if (option==2) 
	{
		
		return 0;
	}
	int choice,ch;
	Complex C1,C2,C3,C4;
	cout<<"Complex Number 1: "<<endl;
	C1.get_number();
	cout<<"Complex Number 2: "<<endl;
	C2.get_number();
	cout<<"Complex Number 1: ";
	C1.display_complex();
	cout<<"Complex Number 2: ";
	C2.display_complex();
	do {
		cout<<"Enter your choice "<<endl;
		cout<<"1:Add two complex numbers" <<endl;
		cout<<"2:Multiply two complex numbers"<<endl;
		cout<<"3:Exit" <<endl;
		cin>>choice;
		switch (choice) {
			case 1:
				C3=C1+C2;
				cout<<"Sum of the two complex numbers is ";
				C3.display_complex();
				break;
			case 2:
				C4=C1*C2;
				cout<<"Product of the two complex numbers is ";
				C4.display_complex();
				break;
			case 3:
				break;
		}
		cout<<"Do you want to continue ? "<<endl;
		cout<<"If yes enter 1 ,if no enter 0"<<endl;
		cin>>ch;
	} while (ch);
	
	return 0;
}