#include <iostream>
using namespace std;

class alpha
{
    protected:
        int a ;
    public:
        alpha(int i)
        {
            cout << "Alpha initialized\n\n";
            a = i ;
        }
        void showAlpha()
        {
            cout << "Alpha = " << a << endl;
        }

};

class beta
{
    int b;
    public:
        beta(int j)
        {
            cout << "Beta initialized \n\n";
            b = j;
        }
        void showBeta()
        {
            cout << "Beta = " << b << endl;
        }
};

class gamma : public beta,public alpha
{
    int g;
    public:
        gamma(int i,int j,int k):alpha(i),beta(j)
        {
            cout << "Gamma initialized \n\n";
            g = k;
        }
        void show_abg()
        {
            cout << "Gamma = " << g << endl;
            showAlpha();
            showBeta();
        }
};

int main()
{   
    int choice,ch;
    int a,b,c;
    cout<<"\tWelcome\t" <<endl;
    cout<<"Do You want to continue? "<<endl;
    cout<<"1:Yes"<<endl;
    cout<<"2:No" <<endl;
    cin>>ch;
    if(ch==2)
    {
        return 0;
    }
    
    do
    {

        cout << "Enter  values for alpha,beta and gamma : ";
        cin >> a >> b >> c ;
        gamma G(a,b,c);
        G.show_abg();
        cout<<"Do You want to continue? "<<endl;
        cout<<"1:Yes"<<endl;
        cout<<"2:No" <<endl;
        cin>>choice;
    } while (choice != 2);
    
   return 0;
}

