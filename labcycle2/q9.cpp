#include<iostream>
using namespace std;

class test
{
	private:
		int code;
		static int count;	
	public:
		
                test (void)
		{
			count=count+1;
		}
		static void showcount(void)
		{       cout<<"Object created" <<endl;
			cout<<"count: "<<count<< endl;
		}
};

int test :: count;

int main()

{
        int i;
        int code=0;
	int num=1;
	do{
		test *a = new test;
		a->showcount();
		delete a;
		cout<<"Do you want to create more objects?" <<endl;
                cout<<"Yes 1 or no 0" <<endl;
                cin >> num;
                 code=code+1;
	}
	while(num==1);
         cout<<"\n\n";
         cout << "Number of objects created = " << code <<endl;
          cout<<"\n\n";
        cout <<"\tObjects created \t" <<endl;
        cout <<"\n";
        for(i=0;i<code;i++)
         {
           cout << "Object number " <<  i+1 <<endl;
         }
        
	return 0;
}
