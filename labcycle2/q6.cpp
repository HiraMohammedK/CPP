#include<iostream>
using namespace std;

class Time
{
	private:
		int hours;
		int minutes;
                int seconds;
	public:
		void gettime()
		{
		
                        cout <<"Hours : " ;
                        cin >>hours;
                        cout <<"Minutes : " ;
                        cin >> minutes;
                        cout<<"Seconds : " ;
                        cin >> seconds;

		}
		void puttime(void)
		{
			cout<<hours<<"hours ";
			cout<<minutes<<"minutes and ";
                        cout << seconds << "seconds" <<endl;
		}
		
		void sum(Time, Time);		
};

void Time :: sum(Time t1, Time t2)
{
	
         seconds=t1.seconds+t2.seconds;
        minutes=seconds/60;
        seconds =seconds%60;
        minutes=minutes+t1.minutes+t2.minutes;
        hours=minutes/60;
        minutes=minutes%60;
        hours=hours+t1.hours+t2.hours;
}

int main()
{
	Time T1,T2,T3;
        int option,choice;
          cout<<"Do you want to continue? " <<endl;
        cout<<"If yes press 1 if no press 0" << endl;
        cin>>choice;
	  if(choice==0)
	   {
	     return 0;
	   }
        do
         {
		cout <<"Time 1" <<endl;
		T1.gettime();
		cout<<"Time 2 " <<endl;	
		T2.gettime();	
		
		T3.sum(T1,T2);	
		
		cout<< "Time 1 = ";T1.puttime();	
		cout<< "Time 2 = ";T2.puttime();	
		cout<< "Time 3 = ";T3.puttime();	
                cout <<"Do you want to continue " <<endl;
                cout<<"If yes enter 1 or if no enter 0" <<endl;
                cin>>option;
          }while(option);     
		
	return 0;
}
