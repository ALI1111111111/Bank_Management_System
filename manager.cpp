#include<iostream>
#include<string>
#include<fstream>
using namespace std;




void read(){
	
}
void write(){
	
}

void acc_create(){
	int acc_id;
	string customer_name;
	float opening_balance;
	
	
}
void acc_information(){
	int acc_id;
}
void deposit(){
	float dep_money;
}
void withdraw(){
	float wd_money;
}
void transfer_money(){
	int cus_payee_id, cus_acc_id;
}
void acc_close(){
	int cus_acc_id;
}
void cus_details(){
	int cus_acc_id;
}
void security(){
	string pass="",int pin=0;
}
void menu();








int main() {
	cout  << "\n\n\t\t\t\t\t  |   \t\t\t\t\t | \n \t\t\t\t\t  |   \t\t\t\t\t | \n \t\t\t\t\t  |   \t\t\t\t\t | \n \t\t\t\t\t           Bank Management System \t\t  \n \t\t\t\t\t  |   \t\t\t\t\t | \n \t\t\t\t\t  |   \t\t\t\t\t | \n "
	<<"\t\t\t\t\t  |   \t\t\t\t\t | \n";
		
	menu();
	return 0;
}

void menu(){
	
	int option=0;
	
	cout << "\n\n\n\t  Select Menu: \n";
	cout << " 1. Create New Customer Account: \n 2. Customer Account Information: \n 3. Deposit Money in Customer Account \n "
	<< "4. Withdraw Money \n 5. Transfer Account to Account \n 6. Customer's Detail's  \n 7. Account Close \n";

	cin >> option;
	
	switch(option){
		case 1:
			acc_create();
			break;
		case 2:
			acc_information();
			break;
		case 3:
			deposit();
			break;
		case 4:
			withdraw();
			break;
		case 5:
			transfer_money();
			break;
		case 6: 
			cus_details();
			break;
		case 7:
			acc_close();
			break;
		default:
			cout << " \n Please Select Correct Menu: \n";
			menu();
			break;
		
	}
	
	
	
	
}


