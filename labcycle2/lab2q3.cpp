#include <iostream>
using namespace std;

class Vector
{
	float i,j,k;
    float vector_product;
public:
	void operator*(Vector&);
	friend istream & operator>>(istream&,Vector&);
        friend ostream & operator<<(ostream&,Vector&);

};


istream & operator>>(istream&din,Vector&a){
	cout<<"Enter i,j,k components of vector"<<endl;
         cin>>a.i>>a.j>>a.k;
	return (din);
}

ostream & operator<<(ostream&dout,Vector&a)
{
		dout<<a.i<<"i + "<<a.j<<"j + "<<a.k<<"k"<<endl;
        return dout;
}


void Vector::operator*( Vector&a)
{
	float vector_product;
	vector_product = (i*a.i)+(j*a.j)+(k*a.k);
	cout<<"Dot product of two vectors:  "<<vector_product<<endl;
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
    do
    {
        Vector V1,V2,V3;    
        cout<<"Vector 1"<<endl;
        cin>>V1;
        cout<<"Vector 2"<<endl;
        cin>>V2;
        cout<<"Vector 1: ";
        cout<<V1 <<endl;
        cout<<"Vector 2: ";
        cout<<V2 <<endl;

	
		cout<<"Enter your choice "<<endl;
		cout<<"1:Product of vectors" <<endl;
		cout<<"2:Exit" <<endl;
		cin>>choice;
		switch (choice) 
        {
			case 1:
				V1*V2;
                
			
			case 2:
				break;
		}
		cout<<"Do you want to continue ? "<<endl;
		cout<<"If yes enter 1 ,if no enter 0"<<endl;
		cin>>ch;
	} while (ch);
	
	return 0;
}
