#include <iostream>
using namespace std;
double zeroDivision(int x, int y) 
{

	if (y == 0) 
    {
		throw "Division by Zero!";
	}
	return (x / y);
}

int main() 
{   int ch;
    do
    {
        
        int a,b;
        cout<<"Enter divident: ";
        cin>>a;
        cout<<"Enter divisor: ";
        cin>>b;
        double c = 0;

        try 
        {
            c = zeroDivision(a, b);
            cout << "Quotient is " << c << endl;
        }
        catch (const char* message) 
        {

            cerr << message << endl;
        }
        cout<<"Do you want to continue?" <<endl;
        cout<<"If yes enter 1 if no enter 0" <<endl;
        cin>>ch;
    }while(ch);
	
	return 0;
}