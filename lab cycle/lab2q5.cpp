#include <iostream>
#include <cstring>
using namespace std ;

class student
{
    protected:
        string name;
        int roll_no;
    public:
        student(string n,int a)
        {
            name = n;
            roll_no = a;
        }
        void show()
        {
            cout << "Name : " << name << endl;
            cout << "Roll No  : " << roll_no  << endl;
        }
};

class test : public student
{
    protected:
        float sub1,sub2;
    public:
       test(string n,int rn,float x,float y) : student(n,rn)
        {
            sub1 = x;
            sub2 = y;
        }
        void show()
        { 
            cout<<"Marks obtained " << endl;
            cout << "Subject 1 : " << sub1 << endl;
            cout << "Subject 2 : " << sub2 << endl;
        }
};

class sports
{
    protected:
        float score;
    public:
        sports(float s)
        {
           score = s;
        }
        void show()
        {
            cout << "Sports score : " <<score << "\n";
        }
};

class result : public test,public sports
{
    protected:
       float total;
    public:
        result(string na,int rn,float x,float y,float s)
            :sports(s),test(na,rn,x,y)
        {
           total=sub1+sub2+score;
        }
        void show()
        {
            
            cout<<"Total Score: " << total << endl;
        }
};

int main()
{
    string n;
    int rn;
    int ch;
    float x ,y,s,t ;
    cout << "\tWELCOME\t"<<endl;
    cout<<"Do you want to continue?" <<endl;
    cout<<"If yes enter 1 if no enter 0" <<endl;
    cin>>ch;
    if(ch==0)
    {
        return 0;
    }
    cout << "Enter Student Details : \n\n";
    cout << "Name  : " ;
    cin >> n;
    cout << "Enter roll no : ";
    cin >> rn;
    cout << "Enter marks in sub1 and sub2 : ";
    cin >> x >> y ;
    cout << "Enter score : ";
    cin >> s ;
    cout << "\n\n";
    result r(n,rn,x,y,s);
    r.show();
    return 0;
}