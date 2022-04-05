#include<iostream>
#include<cmath>
using namespace std;

 int s,l,b;
 float r,ab,bc,ca,ra,h;
                int area(int);
		int area(int,int);
		float area(float);
		float area(float,float);
		float area(float,float,float);

int area(int s)
{    cout<<"Enter side of a square:";
     cin>>s;
    cout <<"Area of square is: ";
    return(s*s);
}
int area(int l,int b)
{      cout<<"Enter length and breadth of rectangle:";
        cin>>l>>b;
     cout <<"Area of rectangle is: ";
    return(l*b);
}
float area(float r)
{
    cout<<"Enter radius of circle:";
    cin>>r;
    cout <<"Area of circle is: ";
    return(3.14*r*r);
}
float area(float ra, float h)
{
    cout<<"Enter radius and height of cylinder: ";
    cin >>ra >>h;
    cout <<"Area of cylinder is: ";
    return(2*(3.14)*ra*(ra+h));
}
float area(float ab,float bc,float ca)
{
    
    cout<<"Enter sides of triangle:";
    cin>>ab>>bc>>ca;
    float p,x;
    p=(ab+bc+ca)/2;
    x = p*(p-ab)*(p-bc)*(p-ca);
    cout <<"Area of triangle is: ";

    return(sqrt(x));
  

}
int main()
{    int option;
     int ch,choice;
       
  cout<<"Do you want to continue? " <<endl;
  cout<<"If yes press 1 if no press 0" << endl;
  cin>>choice;
	  if(choice==0)
	   {
	     return 0;
	   }
     do
	{ cout <<"\n\n";
	  cout<<"Select an option and enter corresponding number " <<endl;
	  cout<<"1:Area of square" <<endl;
	  cout <<"2:Area of rectangle" <<endl;
	  cout <<"3:Area of circle" <<endl;
	  cout<<"4:Area of cylinder" <<endl;
          cout<<"5:Area of triangle" <<endl;
	  cin >>ch;

          switch(ch)
 		{
                  case 1: cout << area(s);break;
	          case 2: cout << area( l,b);break;
		  case 3: cout << area(r);break;
		  case 4: cout << area(ra,h);break;
	          case 5 :cout << area(ab,bc,ca);break;
		} 
          cout<<"\n";
          cout<<"Do you want to continue ? " <<endl;
          cout <<"Press 1 for yes and 0 for no";
          cin >>option;
         }
         while(option);

		return 0 ;
       
      
       
}
