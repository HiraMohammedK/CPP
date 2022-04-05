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
        friend void matrix_add(matrix , matrix );
        friend void matrix_mult(matrix ,matrix );
        void matrix_transpose();
        void matrix_trace();
       
};
matrix::matrix(int r,int c)
{
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
void matrix_add(matrix x,matrix y)
{

            int i,j;
            if(x.m==y.m && x.n==y.n)
            {
                         cout<<"SUM OF MATRICES:\n";
                           for(i=0;i<x.m;i++)
                        {

                                    for(j=0;j<x.n;j++)
                                                cout<<x.p[i][j]+y.p[i][j]<<" ";
                                    cout<<endl;
                        }
            }
            else
                        cout<<"Dimensions are not same...Addition not possible" <<endl;;
}
void matrix_mult(matrix x,matrix y)
{
  int i,j,k,mult[100][100];
  mult[i][j]=0;
            if(x.n==y.m)
            {
                         cout<<"MULTIPLE OF MATRICES:\n";
                           for(i=0;i<x.m;i++)
                        {

                                    for(j=0;j<x.n;j++)
                                    {
                                         for(k=0;k<x.n;k++)
                                    {
                                          mult[i][j]+=(x.p[i][k])*(y.p[k][j]);
                                         
                                           
                                    }
                                    cout<<mult[i][j]<<" ";
                                    }
                                   
                             cout<<endl;                  
                        }
            }
           
            else
            {
               cout<<"Multiplication not possible"<<endl;
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
void matrix::matrix_trace()
{
   int trace=0;
   
   if (m==n)
{
  for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
        {
        if(i==j)
        {
        trace=trace+p[i][j];
        }
        }
        }
        cout << trace <<endl;
            }
        else
            {
        cout<< "Not a square matrix hence tracing not possible" <<endl;
            }
}
int main()
{
            int m,n;
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
            cout<<"Enter number of rows and columns of the first matrix"<<endl;
	        cin>>m>>n;
	        matrix m1(m,n);
            m1.getmatrix();
            cout<<"Enter number of rows and columns of the second matrix"<<endl;
	        cin>>m>>n;
	        matrix m2(m,n);
            m2.getmatrix();
            cout << "Matrix 1: " <<endl;
            m1.putmatrix();
            cout << "Matrix 2: " <<endl;

            m2.putmatrix();
            int ch;
            do
            {
                cout<<"Enter an appropriate number "<<endl;
                cout<<"1:Add two matrices " <<endl;
                cout<<"2:Multiply two matrices" <<endl;
                cout<<"3:Transpose of matrix" <<endl;
                cout<<"4:Trace of matrix" <<endl;
                cout<<"5:Quit"<<endl;
                cin>>ch;

                switch(ch)
                {
                    case 1:
                          
                           matrix_add(m1,m2);
                           break;
                    case 2:
                           matrix_mult(m1,m2);
                           break;
                    case 3:
                           cout<<"Transpose of Matrix 1 " <<endl;
                           m1.matrix_transpose();
                           cout<<"Transpose of Matrix 2 " <<endl;
                           m2.matrix_transpose();
                           break;
                    case 4:
			   cout<<"Trace of matrix 1 " <<endl;
                           m1.matrix_trace();
			   cout<<"Trace of matrix 2 " <<endl;
                           m2.matrix_trace();
                           break;
                    case 5:break;
                }
            }
            while (ch!=5);
         cout<<"\n";
         cout<<"Do you want to continue? " <<endl;
         cout <<"If yes enter 1 or else enter 0" <<endl;
         cin >>option;
}while(option);
            return 0;

}
