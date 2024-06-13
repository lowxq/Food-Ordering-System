#include <iostream>
#include<fstream>
#include <iomanip>
#include <string>
using namespace std;
void menu();
void calculate(char option, char set);
void orderdetails(char option, char set);
void paymentmethod(char payment);
char option, set, payment;
int sum = 0;

int main()
{
	//main menu 
	cout << "Welcome to our restaurant " << endl;
	cout << "------------------------------------------" << endl;
	menu();
	orderdetails(option, set);
	paymentmethod(payment);
}

void menu()
{
	cout << "Please choose 'D' for dine-in or 'T' to take away. ";
	cin >> option;
	char set = 'Y';
	char menuarray[50];
	ifstream menufile("menu.txt", ios::in);
	for (int i = 0; i < 6; i++)
	{
		menufile.getline(menuarray, 50);
		cout << menuarray << endl;
	}
	while (set != 'Q')

	{
		cout << "\nPlease select your meal or enter Q to proceed your payment: " << endl;
		cout << "('A' for set A, 'B' for set B, 'C' for set C, 'D' for set D, 'E' for set E) : ";		
		cin >> set;
		switch(set){
			case 'A':
			case 'a':
				{
					calculate(option, set);
					break;
				}
			case 'B':
			case 'b':
				{
					calculate(option, set);
					break;
				}
			case 'C':
			case 'c':
				{
					calculate(option, set);
					break;
				}
			case 'D':
			case 'd':
				{
					calculate(option, set);
					break;
				}
			case 'E':
			case 'e':
				{
					calculate(option, set);
					break;
				}
		}
	}
}

void calculate(char option, char set)
{

	if (option == 'D')
	{
		
			if (set == 'A')
			{
				sum += 15;
			}
			else if (set == 'B')
			{
				sum += 15;
			}
			else if (set == 'C')
			{
				sum += 10;
			}
			else if (set == 'D')
			{
				sum += 12;
			}
			else if (set == 'E')
			{
				sum += 20;
			}
	

	}
	else if (option == 'T')
	{
		
			if (set == 'A')
			{
				sum += 15;
			}
			else if (set == 'B')
			{
				sum += 15;
			}
			else if (set == 'C')
			{
				sum += 10;
			}
			else if (set == 'D')
			{
				sum += 12;
			}
			else if (set == 'E')
			{
				sum += 20;
			}
		

	}
	
	
}

void orderdetails(char option, char set)
{
	
	
		
		cout << "\nThank you for ordering ~ Please collect your orders at the counter. \n";
		cout << "--------------------------------------------------------------------- \n";
		cout << "The following is your orders: \n";
		if (option == 'D')
		{
			cout << "\nTotal Price is RM" << sum << endl;
			cout << "\n--------------------------------------------------------------------- \n";
			//cout << "Please come again~ Thank You \n";
			//cout << "--------------------------------------------------------------------- \n";
		}
		else if (option == 'T')
		{
			double packingFee = 2.0;
			sum = sum + packingFee;

			cout << "\nTotal Price is RM" << sum << endl;
			cout << "\n--------------------------------------------------------------------- \n";
			//cout << "Please come again~ Thank You \n";
			//cout << "--------------------------------------------------------------------- \n";
		}
		else
			cout << "Invalid option"<<endl;


}

void paymentmethod(char payment)
{
	int method;
	
	cout<<endl<<"Proceed to payment (y/n) : ";
	cin >> payment;
	
	if(payment=='y'){
		cout<<"1. QRPay"<< endl;
		cout<<"2. Cash"<< endl;
		cout<<"3. Debit Card"<< endl;
		cout<<"4. Credit Card"<< endl;
		cout<<endl<<"Select your payment method : ";
		cin>>method;
		
		if(method==1){
			cout <<endl<<"Scan QR Code here"<< endl;
			cout << "--------------------------------------------------------------------- \n";
			cout << "Please come again~ Thank You \n";
		}
		else if(method==2){
			cout <<endl<<"Go to counter"<< endl;
			cout << "--------------------------------------------------------------------- \n";
			cout << "Please come again~ Thank You \n";
		}
		else if(method==3){
			cout <<endl<<"Swipe your card"<< endl;
			cout << "--------------------------------------------------------------------- \n";
			cout << "Please come again~ Thank You \n";
		}
		
		else if(method==4){
			cout <<endl<<"Swipe your card"<< endl;
			cout << "--------------------------------------------------------------------- \n";
			cout << "Please come again~ Thank You \n";
		}
		
		else
			cout<<"Invalid method"<< endl;		
	}
	
	else if(payment=='n'){
		cout <<endl<<"Payment Canceled"<< endl;
		cout << "--------------------------------------------------------------------- \n";
		cout << "Please come again~ Thank You \n";
	}
}
