#include<iostream>
using namespace std;

class matrix 
{
    int R,C ;
    int **p ;
    public: 
        matrix(){}
        matrix(int rows,int columns);
        void get_matrix();
        void display_matrix();
        friend matrix operator+(matrix A, matrix B);
        friend matrix operator*(matrix A, matrix B);
};

matrix::matrix(int rows,int columns)
{
    R = rows ; C = columns ;
    p = new int* [R+1];
    for(int i = 0; i < C ; i++)
    {
        p[i] = new int[C+1];
    }
}

void matrix:: get_matrix()
{
    cout<<"Enter  elements of the matrix \n";
    for(int i = 0 ; i < C ; i++){
        for(int j = 0; j < R; j++)
        {
            int value ;
            cin >> value ;
            p[i][j] = value;
        }
    }
}

void matrix::display_matrix()
{
    for(int i = 0 ; i < C ; i++){
        for(int j = 0; j < R; j++){
            cout << p[i][j] << " " ;
        }
        cout << "\n" ;
    } 
}

matrix operator+ (matrix A , matrix B)
{
    
    if (A.R == B.R && A.C == B.C)
    { 
        matrix M(A.R,A.C);
        for(int i = 0 ; i < M.R ; i++)
        {
            for(int j = 0; j < M.C; j++){
                M.p[i][j] = A.p[i][j] + B.p[i][j]; 
            }
        }
        cout<<"Sum: " <<endl;
        return M ;    
    }
    else 
    {
        matrix a(0,0);
        cout<<"Addition not possible "<<endl;
        return a;
    }
    
}

matrix operator* (matrix A, matrix B)
{
    if (A.C == B.R)
    {
        matrix X(A.R,B.C);
        for(int i = 0 ;i < A.R ;i++){
            for(int j = 0 ; j < B.C ; j++){
                int sum = 0;
                for(int n = 0; n<B.R ;n++){
                    sum+= A.p[i][n] * B.p[n][j];
                }
                X.p[i][j] = sum;
            } 
           
        }
         cout<<"Product: " <<endl;   
        return X ;
    }
    else
    {
      matrix l(1,1);
      cout<<"Multiplication not possible " <<endl;
      return l;
    }
    
}

int main()
{   
    int option;
	cout<<"\tWELCOME\t"<<endl;
	cout<<"Do you want to proceed?"<<endl;
	cout<<"1:Yes"<<endl;
	cout<<"2:No"<<endl;


	cin>>option;

	if (option==2) 
	{
		
		return 0;
	}
	int choice,ch;
    int r1,r2,c1,c2;
    cout << "Enter number of rows and columns of matrix 1 :";
    cin >> r1 >> c1 ;
    matrix A(r1,c1);
    A.get_matrix();
    cout << "Enter number of rows and columns of matrix 2 :";
    cin >> r2 >> c2 ;
    matrix B(r2,c2);
    B.get_matrix();
    cout << "Matrix 1:" <<endl;
    A.display_matrix();
    cout << "\n";
    cout << "Matrix 2: " <<endl;
    B.display_matrix();
    cout << "\n";
	
	do {
		cout<<"Enter your choice "<<endl;
		cout<<"1:Add two matrices" <<endl;
		cout<<"2:Multiply two matrices"<<endl;
		cout<<"3:Exit" <<endl;
		cin>>choice;
		if(choice==1)
        {
            
				matrix C =  A + B;

				C.display_matrix();
				
        }
				
		else if(choice==2)
        {
             matrix D = A * B;
			
			 D.display_matrix();
			
        }
		else
        {
          break;
        }		
		
		cout<<"Do you want to continue ? "<<endl;
		cout<<"If yes enter 1 ,if no enter 0"<<endl;
		cin>>ch;
	} while (ch);
	
	return 0;
    
}
