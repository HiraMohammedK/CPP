#include<iostream>
#include<cmath>
using namespace std ;
class student
{
    string Name ;
    int Roll_no ;
    float m1,m2,m3;
    public:
        void input(void);
        void calcGrade(void);
        void display(void);
};

void student::input(void)
{
    cout << "Enter the name of the student : "  ;
    cin >> Name ;
    cout << "Enter the roll no : ";
    cin >> Roll_no ;
    cout << "Enter marks scored in subject 1 ";
    cin >> m1 ;
    cout << "Enter marks scored in subject 2 " ;
    cin >> m2 ;
    cout << "Enter marks scored  in subject 3 ";
    cin >> m3 ;
    cout  << "\n";
    cout<<"\n";
}

void student::calcGrade(void)
{
    float average = (m1 + m2 + m3) / 3;
    if (average >= 95 )
    {
       cout <<"A1" <<endl;
    }
    else if(average <= 95 && average > 90)
    {
        cout <<"A2" <<endl;
    }
    else if(average <= 90 && average > 85)
    {
        cout <<"B1" <<endl;
    }
    else if(average <= 85 && average > 80)
    {
      cout <<"B2" <<endl;
    }
    else if(average <= 80 &&average> 75)
    {
        cout <<"C1" <<endl;
    }
    else if(average <= 75 && average> 70)
    {
       cout <<"C2" <<endl;
    }
    else if(average >= 70 && average<60)
    {
        cout <<"D1" <<endl;
    }
    else if(average <= 60 && average> 50)
    {
       cout <<"D2" <<endl;
    }
    
   else
   {
       cout <<"F" <<endl;
   }
    
}

void student::display(void)
{
    
    cout << "Name    :" << Name <<endl;
    cout << "Roll No :" << Roll_no <<endl ;
    cout<<"Mark attained in subject 1: " << m1 <<endl;
    cout<<"Mark attained in subject 2: " << m2 <<endl;
    cout<<"Mark attained in subject 3: " << m3 <<endl;
    cout << "Grade attained   :" ;
    calcGrade();
    cout << "\n" ;
}

int main()
{
    student A , B , C ; 
    A.input();
    B.input();
    C.input();
    cout << "Student details :" << "\n" ;
    A.display();
    B.display();
    C.display();
    return 0 ;
} 
