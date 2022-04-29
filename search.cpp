#include<iostream>
using namespace std;

class Search
{
  public:
  	int Iterative_search(int A[],int N,int key);
  	int Recursive_search(int A[],int N,int key);
};
int Search::Iterative_search(int A[],int N,int key)
{
    cout<<"Iterative Search"<<endl;
    int pos;
    for(pos=1;pos<N;pos++)
    {
    	if (A[pos] == key)
    	{
    		 
    		return pos;
    	}
    }
   return -1;
  
    
}
int Search::Recursive_search(int A[],int N,int key)
{

	if (N>0)
	{
		if (A[N]==key)
		{
		 return N;
		 
		}
		else
		{
		  return Recursive_search(A,N-1,key);
		}
	}
	else
	{
	  return 0;
	}
	
}
int main()
{
 Search s;
 int k;
 int A[10]={4,6,3,9,10,2,11,5,8,10};
 cout<<"Enter element to search";
 cin>>k;
 cout<<s.Iterative_search(A,10,k);
 cout<<"\n";
 cout<<"Recursive Search"<<endl;
 cout<<s.Recursive_search(A,10,k);
 cout<<endl;
 return 0;
}
