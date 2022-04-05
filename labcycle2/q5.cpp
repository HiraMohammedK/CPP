#include<iostream>
using namespace std;

class matrix
{
    int **p;
    int m,n;
    int i,j;
    int value;
    
    public:
        
	matrix(){};
        matrix(int r,int c);
        void getmatrix();
        void putmatrix();
        void matrix_transpose();
  
        ~matrix()
         {
           cout <<"Destructor invoked" <<endl;
           for(int i=0;i<m;i++)
           delete p[i];
           delete p;
           cout<<"Memory Released " << endl;
          
          }
};
matrix::matrix(int r,int c)
{  cout <<"Constructor invoked" <<endl;
   m = r;
   n = c; 
   p = new int*[m];

   for(int i=0;i<m;i++)
    p[i] = new int[n];
   

}
void matrix::getmatrix()

{ 

            cout<<"Enter elements rowvise:\n";
            for(i=0;i<m;i++)
            {
              for(j=0;j<n;j++)
              {
                cin>>p[i][j];
              }
            }
            
            
}
void matrix::putmatrix()
{
for(i=0;i<m;i++)
{
            for(j=0;j<n;j++)
{
  cout <<p[i][j]<<" ";
       }
   cout<<endl;
}
}
       
void matrix::matrix_transpose()
{
   
           
            for(i=0;i<m;i++)
            {
                        for(j=0;j<n;j++)
                        {
                           cout<<p[j][i]<<" ";
                        }
                       
             cout<<endl;
            }
}
int main()
{
            int m,n,choice;
             cout<<"Do you want to continue? " <<endl;
              cout<<"If yes press 1 if no press 0" << endl;
              cin>>choice;
	  if(choice==0)
	   {
	     return 0;
	   }
            cout<<"Enter number of rows and columns of the  matrix"<<endl;
	     cin>>m>>n;
             cout<<"Construction in main"<<endl;
	     matrix m1(m,n);
             m1.getmatrix();
            
            cout << "Matrix: " <<endl;
            m1.putmatrix();
            cout <<"Matrix Transpose " <<endl;
            m1.matrix_transpose();
            cout<<"Destruction in main" <<endl;
            return 0;
}
