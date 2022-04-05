#include <iostream>
#include <cstring>
using namespace std;

class student 
{
    string Name;
    int rollno ;
    public:
        void get_studentdata()
        {
            cout<<"Enter name of student: ";
            cin >>Name;
            cout<<"Enter roll number: ";
            cin >>rollno;
            cout<<"\n";
        }
        void display_data(void)
        {
            cout<<"Name: " <<Name <<endl;
            cout<<"Roll No: " << rollno <<endl;

        }
};

class test : virtual public student 
{
    protected:
        float Sub1,Sub2,Sub3 ;
    public:
        void get_marks()
        {
            cout<<"Enter marks obtained in subject 1: ";
            cin>>Sub1;
            cout<<"\n";
            cout<<"Enter marks obtained in subject 2: ";
            cin>>Sub2;
            cout<<"\n";
            cout<<"Enter marks obtained in subject 3: ";
            cin>>Sub3;
            cout<<"\n";
        }
        void put_marks(void)
        {
            cout<<"\tMarks obtained\t " <<endl;
            cout<<"Subject 1: " << Sub1 <<endl;
            cout<<"Subject 2: " << Sub2 <<endl;
            cout<<"Subject 3: " << Sub3 <<endl;
        }
};

class sports : virtual public student
{
    protected:
        float score ;
    public:
        void get_score()
        {
           cout <<"Enter score obtained: ";
           cin >>score;
           cout<<"\n";

        }
        void put_score(void)
        {
            cout<<"Score: " << score <<endl;
        }
};

class Result : public test , public sports
{
    float total;
public:
	void total_marks()
    {
		total = Sub1 + Sub2 + score;
	}
	void displayResult()
    {
		cout<<endl;
		display_data();
		put_marks();
		put_score();
		total_marks();
		cout<<"Total:  "<<total<<endl;
	}
};


int main() 
{
	int option,ch;
    
            cout<<"\tWELCOME\t" <<endl;
            cout<<"Do you want to continue?" <<endl;
            cout<<"If yes enter 1" <<endl;
            cout<<"If no enter 0" <<endl;

            cin>>option;
            if(option==0)
            {
                return 0;
            }
            do
            {
               Result R;
                R.get_studentdata();
                R.get_marks();
                R.get_score();
                R.displayResult();
                cout<<"Do you want to continue" <<endl;
                cout<<"1:Yes" <<endl;
                cout<<"2:No" <<endl;
                cin>>ch;

            }while(ch!=2);
            
			
			
	
	return 0;
}