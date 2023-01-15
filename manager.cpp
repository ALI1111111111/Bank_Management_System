#include<iostream>
#include<string>
#include<fstream>
using namespace std;

struct acc_create{
	int acc_id=0;
	string customer_name="";
	float opening_balance=0;
	string address="";
	string contact="" ;

}data[1000];
int index=0;
void menu();
void write(int *acc_id,string *customer_name,float *opening_balance,string *addres,string *contact ){
	ofstream file;
	
	file.open("customer.txt",ios::app);
	
	if(file){
		file << *acc_id << '\t' << *customer_name << '\t'<< *opening_balance << '\t'<< *addres <<'\t'<< *contact << '\n';
		cout << "\n Account created Successfully: \n";
	}else{
		cout << "\n Error in writing a file: \n";
	}
	file.close();
	menu();
	
}
void read(){
	ifstream file;
	
	file.open("customer.txt");
	if(file){
		while(!file.eof()){
			file >> data[index].acc_id ;
			file >> data[index].customer_name;
			file >> data[index].opening_balance;
			file >> data[index].address;
			file >> data[index].contact;
			index++;
		}
		file .close();
	}
	
	
	
	
	
}

 // writing funtion
void acc_create();
// read function
void acc_information();

// write function
void deposit();


// write function
void withdraw();


// update function
void transfer_money();
// update function
void acc_close();
// read function
void cus_details();
void security();
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

	cout << endl << " Make your Selection:";
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
 // writing funtion
void acc_create(){
	
	read();
	int acc_id=index-1;
	string customer_name="";
	float opening_balance=0;
	string address="";
	string contact="" ;
	
	cout << "\n\n \t\tCreate New Customer Acount \n  ";
	cout << "New customer ID IS:      "<< acc_id << endl;
	cout << "Enter Customer Name:  ";
	cin >> customer_name;
	cout << "Enter Opening balance:  ";
	cin >> opening_balance;
		cout << "Enter Customer Address:  ";
	cin >> address;
		cout << "Enter Customer Contact:  ";
	cin >> contact;
	write(&acc_id,&customer_name,&opening_balance,&address,&contact);
	
	menu();
	
}
// read function
void acc_information(){
	int acc_id;
	read();
	cout << " Enter Customer Acount ID:";
	cin >> acc_id;
	
	
	cout << "\nAccount_ID\tCustomer Name\tOpening balance\tAddress\tContact \n";
	for(int i= 0; i<=index-1;i++){
		if(data[i].acc_id== acc_id){
		cout <<"  " <<data[i].acc_id <<"\t\t"<<data[i].customer_name<<"\t\t"<<data[i].opening_balance<<"\t\t"<<data[i].address<<"\t\t"<<data[i].contact<<endl;
		
		}else{
			cout << "\n Try Again! " << acc_id << " is not here \n";
			
		}
		
	}
	menu();
}
// write function
void deposit(){
	float dep_money;
}

// write function
void withdraw(){
	float wd_money;
}

// update function
void transfer_money(){
	int cus_payee_id, cus_acc_id;
}
// update function
void acc_close(){
	int cus_acc_id;
}
// read function
void cus_details(){
	int cus_acc_id;
}
void security(){

}

