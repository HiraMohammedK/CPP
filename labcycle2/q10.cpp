#include<iostream>
using namespace std;

const int m = 50;

class ITEMS
{
	int item_code[m];
	float item_price[m];
	int count;
	public:
		void CNT(void)
                {
                  count = 0;
                }
		void get_item(void);
		void display_sum(void);
		void remove_item(void);
		void displayItems(void);
};

void ITEMS :: get_item(void)
{
	cout<<"Enter Item Code: ";
	cin>>item_code[count];
	cout<<"Enter Item Cost: ";
	cin>>item_price[count];
	count++;
}

void ITEMS :: display_sum(void)
{
	float sum = 0;
	for(int i=0;i<count;i++)
		sum = sum + item_price[i];
	cout<<"Total value: "<<sum<<endl;
}

void ITEMS :: remove_item(void)	
{
	int a;
	cout<<"Enter item Code: ";
	cin>>a;
	for(int i=0;i<count;i++)
		if(item_code[i] == a)
			item_price[i] = 0;
}

void ITEMS :: displayItems(void)
{       cout<<"*--------------------------------------------------*" <<endl;
         cout<<"                Shopping Bill                  " <<endl;
	cout<<"\nCode\tPrice\n";
	for(int i=0;i<count;i++)
	{
		cout<<item_code[i]<<"\t"<<item_price[i]<<"\n";
	}
        display_sum();
	cout<<"\n";
        cout <<"Thank you! " <<endl;
        cout<<"\n\n";

        cout<<"*---------------------------------------------------*" <<endl;
}
int main()
{
	ITEMS order;
	order.CNT();
	int ch;
        int option;
        int x=1;
do
 {
	do
	{       cout<<"\nCustomer " << x ;
		cout<<"\nSelect an option";
		cout<<"\n1:Add an item ";
		cout<<"\n2:Display total value ";
		cout<<"\n3:Delete an item ";
		cout<<"\n4:Dispaly all items ";
		cout<<"\n5:Quit "<<endl;
		cin>>ch;
		
		switch(ch)
		{
			case 1:
				order.get_item();
				break;
			case 2:
				order.display_sum();
				break;
			case 3:
				order.remove_item();
				break;
			case 4:
				order.displayItems();
				break;
			case 5:
				break;
                    
			
		}
	}
	while(ch!=5);
        x=x+1;	
        cout <<"Do you want to continue?  " <<endl;
                     cout<<"If yes press 1 if no press 0" <<endl;
                     cin >>option;
}while(option);
	return 0;
}
