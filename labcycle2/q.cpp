#include <iostream>
#include <string>
using namespace std ;

class Person
{
    protected:
        string name;
        int age;
        string gender;
    public:
        Person(string n,int a,string g)
        {
            name = n;
            age = a;
            gender = g;
        }
        void show()
        {
            cout << "Name : " << name << endl;
            cout << "Age  : " << age  << endl;
            cout<<"Gender: "  << gender <<endl;
        }
};
class Patient:Person
{
    protected:
     string disease;
     string doctor;

    public:
        Patient(string na,int ag,string ge,string d,string doc):Person(na,ag,ge)
        {
            disease = d;
            doctor = doc;
                
                
        }
        void show()
        {
            Person::show();
            cout<<"Disease: " << disease << endl;
            cout<<"Doctor: "  <<doctor<<endl;
                
        }
};
class IPD
//Inpatient Department details
{
    protected:
    int ward_no;
    int bed_no;   
    int charge_per_day;
    
public:
    IPD(int w,int b,int ch)
    {
        ward_no = w;
        bed_no = b;
        charge_per_day = ch;
    }
    
      
        void show()
        {
            cout<<"Ward No.:  "<<ward_no<<endl;
            cout<<"Bed No.:  "<<bed_no<<endl;
            cout<<"Charge Per Day:  "<<charge_per_day<<endl;
        }
};
class Bill:public Patient,public IPD
{
    protected:
    int no_of_days_admitted;
    
    public:
    Bill(string na,int ag,string ge,string d,string doc,
    int w,int b,int ch,int no):IPD(w,b,ch),Patient(na,ag,ge,d,doc)
    {
        no_of_days_admitted = no;
    }
    void show()
    {
        float total=charge_per_day*no_of_days_admitted;
        Patient::show();
        IPD::show();
        cout<<"No of days admitted: "<<no_of_days_admitted<<endl;
        cout<<"Amount:"<<total<<endl;
    }
};
int main()
{
    string Nm,gen,dis,doct;
    int ag,wa,be,cha,day;
    cout << "Welcome\n\n";
    cout << "Enter the Details : \n\n";
    cout << "Name  : " ;
    cin >> Nm;
    cout << "Age : ";
    cin >> ag;
    cout << "Gender : " ;
    cin >> gen ;
    cout << "Disease : ";
    cin >> dis ;
    cout<<"Name of Doctor : ";
    cin>>doct;
    cout << "Ward number and bed number :";
    cin >>wa  >>be ;
    cout << "Charge per day : ";
    cin >> cha;
    cout << "No of days admitted :";
    cin >> day;
    cout << "\n\n";
    Bill B1(Nm,ag,gen,dis,doct,wa,be,cha,day);
    cout<<"PATIENT DETAILS"<<endl;
    cout<<"\n";
    B1.show();
    return 0;
}
