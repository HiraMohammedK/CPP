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
{
	cout<<c.x<<" + "<<c.y<<" j " <<"\n";
}

int main()
{
	complex A, B, C;
	cout<<"Complex number 1 "<<endl;
	A.input();
	cout<<"Complex number 2 "<<endl;
	B.input();
	
	C = sum(A, B);	
	
	cout<< "A = ";A.show(A);
	cout<< "B = ";B.show(B);
	cout<< "C = ";C.show(C);
	
	return 0;
}