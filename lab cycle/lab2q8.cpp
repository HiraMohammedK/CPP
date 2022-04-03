#include<iostream>
using namespace std;

class Shape
{
    protected:
        float area;
    public:
        virtual void get_area(){};
        virtual void show_area(){};
};

class Circle : public Shape
{
    float r;
    public:
        void get_area()
        {
            cout<<"Enter the radius of circle:";
            cin >>r;
            area = 3.14*r*r;
        }
        void show_area()
        {
            cout<<"Area of the circle = "<<area<<endl;
        }
};

class Square : public Shape
{
    float a;
    public:
    void get_area()
    {
        cout << "Enter the length of side of square:";
        cin >> a ;
        area = a*a;
        cout<<"\n";
    }
    void show_area()
    {
        cout<<"Area of square = " << area <<endl;
    }
};

class Rectangle : public Shape
{
    float l,b;
    public:
    void get_area()
    {
        cout << "Enter length of the rectangle: ";
        cin >> l ;
        cout << "Enter breadth of the rectangle: ";
        cin >> b ;
        cout <<"\n";
        area = l*b;
    }
    void show_area()
    {
        cout<<"Area of the rectangle  = "<<area<< endl;
        cout<<"\n";
    }
};

class Ellipse : public Shape
{
    float major_axis,minor_axis;
    public:
    void get_area()
    {
        cout << "Enter length of major axis of ellipse: ";
        cin >>major_axis ;
        cout << "Enter length of minor axis of ellipse: ";
        cin >> minor_axis ;
        cout<<"\n";
        area = 3.14* major_axis*minor_axis;
    }
    void show_area()
    {
        cout<<"Area of ellipse = "<< area <<endl;
        cout<<"\n";
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
        cout << "Select an option : \n 1:Area of Circle\n 2:Area of Square\n 3:Area of Ellipse\n 4:Area of Rectangle\n 5:Quit\n" <<endl;
        cin >> choice;
        switch (choice)
        {
            case 1 :
            {
                shapeptr = new Circle;
                shapeptr ->get_area();
                shapeptr ->show_area();
                break;
            }
            case 2 :
            {
                shapeptr = new Square;
                shapeptr ->get_area();
                shapeptr ->show_area();
                break;
            }
            case 3 :
            {
                shapeptr = new Ellipse;
                shapeptr ->get_area();
                shapeptr ->show_area();
                break;
            }
            case 4 :
            {
                shapeptr = new Rectangle;
                shapeptr ->get_area();
                shapeptr ->show_area();
                break;
            }
            case 5 :
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