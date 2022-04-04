#include <iostream>
using namespace std;

class Shape 
{
   protected:
    float dimension;

   public:
    void getDimension() 
    {
        cin >> dimension;
    }

    virtual void calculateArea() = 0;
};

class Square : public Shape 
{
   protected:
    float areaSquare;

   public:
    void calculateArea() 
    {
        areaSquare=dimension * dimension;
        cout<<"Area of square = " << areaSquare <<endl;
    }
};

class Circle : public Shape 
{
   protected:
    float areaCircle;
   public:
    void calculateArea() 
    {
        areaCircle = 3.14 * dimension * dimension;
        cout<<"Area of circle = " << areaCircle <<endl;
    }
};

int main() 

{
     int option,choice,ch;
    cout<<"\tWELCOME\t" <<endl;
    cout<<"Do you want to continue?" <<endl;
    cout<<"If yes enter 1 if no enter 0" <<endl;
    cin>>option;
    if(option==0)
    {
        cout<<"THANK YOU" <<endl;
        return 0;
    }
    
    
    Shape *shapeptr;
   
    do
    {
        cout << "Select an option : \n 1:Area of Circle\n 2:Area of Square\n 3:Quit\n" <<endl;
        cin >> choice;
        switch (choice)
        {
            case 1 :
            {
                shapeptr = new Circle;
                cout << "\nEnter radius of the circle: ";
                shapeptr ->getDimension();
                shapeptr ->calculateArea();
                break;
            }
            case 2 :
            {
                shapeptr = new Square;
                cout << "Enter the length of the square: ";
                shapeptr ->getDimension();
                shapeptr ->calculateArea();
                break;
            }
            case 3 :
            {
                break;
            }
            default :
            cout << "Try Again" <<endl;
            break;
        }
        cout<<"Do you want to continue?" <<endl;
        cout<<"If yes enter 1 if no enter 0" <<endl;
        cin>>ch;
    }while(ch);
    
    if(ch==0)
    {
        cout<<"THANK YOU" <<endl;
        return 0;

    
    }
    

}
