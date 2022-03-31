#include <iostream>
#include <cmath>
using namespace std;

class Vector
{
	float i,j,k,magnitude;
public:
	void get_data();
	void display_vector();
	void vector_magnitude();
	void operator==(const Vector&);
	void operator!=(const Vector&);
	void operator<(const Vector&);
	void operator<=(const Vector&);
	void operator>(const Vector&);
	void operator>=(const Vector&);
};

void Vector::get_data(){
	cout<<"Enter the i,j,k components of the vector"<<endl;
	cin>>i>>j>>k;
	
}

void Vector::display_vector()
{
	
		cout<<i<<"i + "<<j<<"j + "<<k<<"k"<<endl;
	
}


void Vector::vector_magnitude()
{
	magnitude = (i*i)+(j*j)+(k*k);
	magnitude = sqrtf(magnitude);
    cout<<"Magnitude of the vector is "<<magnitude<<endl;
}


void Vector::operator==(const Vector &V)
{
	if (magnitude == V.magnitude)
	{
		cout<<"The vectors are equal"<<endl;
	}
	else
	{
		cout<<"The vectors are not equal"<<endl;
	}
}

void Vector::operator!=(const Vector &V)
{
	if (magnitude != V.magnitude)
	{
		cout<<"Unequal vectors "<<endl;
	}
	else
	{
		cout<<"Equal vectors"<<endl;
	}
}

void Vector::operator<(const Vector &V)
{
	if (magnitude < V.magnitude) {
		cout<<"Vector 2  greater than vector 1\n";
	}
	else {
		cout<<"Vector 1 greater than vector 2\n";
	}
}

void Vector::operator<=(const Vector &V)
{
	if (magnitude < V.magnitude) 
	{
		cout<<"Vector 2  greater than vector 1"<<endl;
	}
	else if(magnitude == V.magnitude)
	{
		cout<<"The vectors are equal"<<endl;
	}
	else 
	{
		cout<<"Vector 1 greater than vector 2"<<endl;
	}
}

void Vector::operator>(const Vector &V)
{
	if (magnitude > V.magnitude) {
		cout<<"Vector 1  greater than vector 2"<<endl;
	}
	else 
	{
		cout<<"Vector 2 is greater than vector 1"<<endl;
	}
}
void Vector::operator>=(const Vector &V)
{
	if (magnitude > V.magnitude) 
	{
		cout<<"Vector 1 is greater than Vector 2"<<endl;
	}
	else if(magnitude == V.magnitude)
	{
		cout<<"The vectors are equal"<<endl;
	}
	else 
	{
		cout<<"Vector 2 is greater than Vector 1"<<endl;
	}
}

int main()
{ 
  int option;
	cout<<"\tWELCOME\t"<<endl;
	cout<<"Do you want to proceed?"<<endl;
	cout<<"1:Yes" <<endl;
	cout<<"2:No" <<endl;
	cin>>option;

	if (option==2) 
	{
		
		return 0;
	}

	Vector V1,V2;
	int choice,ch;
	cout<<"Vector V1"<<endl;
	V1.get_data();
	cout<<"\nVector V2"<<endl;
	V2.get_data();
	cout<<"Vector 1:"<<endl;
	V1.display_vector();
	V1.vector_magnitude();
	cout<<"Vector 2:"<<endl;
	V2.display_vector();
	V2.vector_magnitude();

	do {
		cout<<"\nChoose any one of the following operations \n1.V1 == V2\n2.V1 != V2\n3.V1 <  V2\n4.V1 <= V2\n5.V1 >  V2\n6.V1 >= V2\n7.Quit"<<endl;
		cin>>choice;
		switch (choice) {
			case 1:
				V1== V2;
				break;
			case 2:
				V1!= V2;
				break;
			case 3:
				V1< V2;
				break;
			case 4:
				V1<= V2;
				break;
			case 5:
				V1> V2;
				break;
			case 6:
				V1>= V2;
				break;
			case 7:break;
		}
		cout<<"Do you want to Continue ?"<<endl;
		cout <<"If yes enter 1 or if no enter 0"<<endl;
		cin>>ch;
	} while (ch!=0);
	
	return 0;
}
	
