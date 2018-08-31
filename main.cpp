#include <iostream>
#include <vector>
#include <fstream>
#include <sstream>

#include "Security.h"
#include "Security.cpp"

#include "Stock.h"
#include "Stock.cpp"

#include "Bond.h"
#include "Bond.cpp"

#include "Portfolio.h"
#include "Portfolio.cpp"

#include "menus.cpp"

using namespace std;

int main()
{
	Stock s1("Ericsson", 450.7, 13, 2012, 1500.0);
	Bond b1("Nokia", 350.43, 5, 2009, 2021, 2.5);	
	vector<Security *> sl1;
	sl1.push_back(&s1);
	sl1.push_back(&b1);
	Portfolio p1("Halil Yacht", "Broadview 32", "312843944", "A4324B43", sl1);
	
	Bond b2("Apple", 1500.3, 4, 2018, 2019, 1.7);
	Bond b3("Samsung", 1340.34, 2, 2017, 2021, 3.7); 	
	Bond b4("Hulu", 800.3, 4, 2017, 2030, 4.5);  
	Stock s2("Huawei", 100.1, 3, 2009, 300.0);
	vector<Security *> sl2;
	sl2.push_back(&b2);
	sl2.push_back(&b3);
	sl2.push_back(&b4);
	sl2.push_back(&s2);
	Portfolio p2("Amanda Smith", "Telegraph Ave. 34", "2109083482", "A123B456", sl2);

	Stock s3("Ericsson", 50.7, 5, 2010, 500.5);
	Bond b5("Nokia", 300.3, 3, 2010, 2021, 2.5);
	Bond b6("Pepsi", 150.0, 5, 2010, 2019, 2.3);
	vector<Security *> sl3;
	sl3.push_back(&s3);
	sl3.push_back(&b5);
	sl3.push_back(&b6);
	Portfolio p3("Joanne Koehn", "Edburg 34", "4278472389", "AC00AC00", sl3);

	Bond b7("Nokia", 150.0, 7, 2017, 2022, 2.54);
	Bond b8("Motorola", 150.0, 5, 2016, 2021, 5.4);
	Bond b9("Beats by Dre", 150.0, 5, 2016, 2021, 7.1);
	Bond b10("AKG", 150.0, 5, 2016, 2021, 4.4);
	vector<Security *> sl4;
	sl4.push_back(&b7);
	sl4.push_back(&b8);
	sl4.push_back(&b9);
	sl4.push_back(&b10);
	Portfolio p4("Drew Monger", "Huxley St. 4", "9873283479", "UUUUZZZZ", sl4);
	
	Stock s4("Vikos", 50.7, 4, 2012, 534.5);
	Bond b11("Turbo X", 300.3, 3, 2012, 2020, 4.2);
	Stock s5("Panasonic", 60.3, 6, 2012, 145.3);
	vector<Security *> sl5;
	sl5.push_back(&s4);
	sl5.push_back(&b11);
	sl5.push_back(&s5);
	Portfolio p5("Yannis Ayannis", "Oaktree 45", "7382956367", "BUUUZZER", sl5);
	
	Stock s6("Vikos", 50.7, 10, 2012, 540.5);
	Stock s7("NewTech Publications", 63.5, 9, 2014, 523.3);
	Stock s8("Gregorys", 60.3, 6, 2017, 1235.3);
	vector<Security *> sl6;
	sl6.push_back(&s6);
	sl6.push_back(&s7);
	sl6.push_back(&s8);
	Portfolio p6("Aristea Kirst", "Futura 345", "7382956367", "OOOO8888", sl6);
	
	Stock s9("Huawei", 250.1, 7, 2012, 755.5);
	vector<Security *> sl7;
	sl7.push_back(&s9);
	Portfolio p7("Willow Mill", "Bel Air Housing", "9382852399", "FUBUFUBU", sl7);
	
	Bond b12("Turbo X", 750.3, 14, 2016, 2022, 7.5);
	vector<Security *> sl8;
	sl8.push_back(&b12);
	Portfolio p8("Sunny Wong", "Northern Estates District", "0987377827", "7H3F1N4L", sl8);
	
	Bond b13("Turbo X", 750.3, 12, 2016, 2022, 7.5);
	Bond b14("Samsung", 1340.34, 4, 2017, 2021, 5.8); 	
	vector<Security *> sl9;
	sl9.push_back(&b13);
	sl9.push_back(&b14);
	Portfolio p9("Jared Barrett", "Aliakmonos 54", "2105189328", "AFM99999", sl9);
	
	Stock s10("Huawei", 350.0, 4, 2012, 734.5);
	vector<Security *> sl10;
	sl10.push_back(&s10);
	Portfolio p10("George Stavrou", "Xiou Gang 43", "3829028384", "CA44CA95", sl10);
	
	vector<Portfolio *> port_list;		//list of portfolios
	port_list.push_back(&p1);
	port_list.push_back(&p2);
	port_list.push_back(&p3);
	port_list.push_back(&p4);
	port_list.push_back(&p5);
	port_list.push_back(&p6);
	port_list.push_back(&p7);
	port_list.push_back(&p8);
	port_list.push_back(&p9);
	port_list.push_back(&p10);
	
	int choice;
	
	bool flag=false;			//flag that turns true when the user chooses to exit
	
	do
	{
		choice=menu();	
				
		if(choice==1)			//adding a new portfolio...
		{
			string given_client_name;
			string given_client_address;
			string given_client_phone;
			string given_reg_num;
			
			char input_choice;
			
			cin.ignore();
			cout<<"New client's name: ";
			getline(cin, given_client_name);
			cin.ignore();
			cout<<"New client's address: ";
			getline(cin, given_client_address);
			cin.ignore();
			cout<<"New client's phone: ";
			getline(cin, given_client_phone);
			cin.ignore();
			cout<<"New client's registration number: ";
			getline(cin, given_reg_num);
			
			Portfolio new_portfolio(given_client_name, given_client_address, given_client_phone, given_reg_num);	//new portfolio initialized, waiting for the securities in the file
			
			cout<<"Import securities from file? (Y/N): ";
			cin>>input_choice;
			
			if(input_choice == 'N' || input_choice == 'n')			//adding the security-less portfolio to the list
			{
				port_list.push_back(new Portfolio(given_client_name, given_client_address, given_client_phone, given_reg_num));
				
				new_portfolio.display();
			}
			else if(input_choice == 'Y' || input_choice == 'y')		//importing the securities from a file with the same name as the client's registration number and adding the portfolio to the list
			{	
				vector<Security *> new_securities;
				
				string file_record;
				
				fstream client_securities_file((const string)given_reg_num.c_str(), ios::in);
				
				while(!client_securities_file.eof())
				{
					getline(client_securities_file, file_record);
					
					if(file_record[0]=='Ì' || file_record[0]=='M')
					{
						char delimiter='|';
						stringstream line(file_record);
						string element;
						vector<string> record;
						
						while (getline(line, element, delimiter))	//split the record's elements based on the delimiter and put them on the "record" vector
							record.push_back(element);
							
						record.erase(record.begin());				//erase the first record element, as the line they were taken has no delimiter at the front
			
			
						//set stock's information to new variables
						string given_company_name=record[0];
						double given_nominal_value=atof(record[1].c_str());
						int given_num_of_securities=stoi(record[2]);
						int given_year_of_purchase=stoi(record[3]);
						double given_stock_price=atof(record[4].c_str());
						
						//add a new dynamic object of stock to the securities list
						new_securities.push_back(new Stock(given_company_name, given_nominal_value, given_num_of_securities, given_year_of_purchase, given_stock_price));
						
					}
					else if((file_record[0]=='Ï' || file_record[0]=='O'))
					{
						char delimiter='|';
						stringstream line(file_record);
						string element;
						vector<string> record;
						
						while (getline(line, element, delimiter))	//split the record's elements based on the delimiter and put them on the "record" vector
							record.push_back(element);
							
						record.erase(record.begin());				//erase the first record element, as the line they were taken has no delimiter at the front
		
							
						//set stock's information to new variables
						string given_company_name=record[0];
						double given_nominal_value=atof(record[1].c_str());
						int given_num_of_securities=stoi(record[2]);
						int given_year_of_purchase=stoi(record[3]);
						int given_expiration_date=stoi(record[4]);
						double given_interest_rate=atof(record[5].c_str());
						
						//add a new dynamic object of bond to the securities list
						new_securities.push_back(new Bond(given_company_name, given_nominal_value, given_num_of_securities, given_year_of_purchase, given_expiration_date, given_interest_rate));	
					}			
				}	
				
				client_securities_file.close();	
				
				//add the securities scanned from the file to the list of securities of the new portfolio to display it
				new_portfolio.set_securities_list(new_securities);	
				new_portfolio.display();
				
				port_list.push_back(new Portfolio(given_client_name, given_client_address, given_client_phone, given_reg_num, new_securities));		//add a new dynamic object to the portfolios list		
			}
			else
			{
				cout<<"Invalid choice."<<endl;
			}
		}
		else if(choice==2)		//modifying an existing portfolio...
		{
			int modify_choice;
			
			string given_reg_num;
			string given_name;
			string given_address;
			string given_phone;
			
			bool found=false;
			int found_index;
	
			do
			{
				modify_choice=modify_menu();
			}while(modify_choice<1 || modify_choice>3);
			
	
			cout<<endl;
			cin.ignore();
			cout<<"Registration number to search: ";
			getline(cin, given_reg_num);
			cout<<endl;
	
			//checking if there's a portfolio with the given registration number
			for(int i=0;i<port_list.size();i++)
			{
				if(port_list[i]->get_reg_num()==given_reg_num)
				{
					found=true;
					found_index=i;
				}
			}
			
			if(found)
			{
				if(modify_choice==1)		//changing client's info
				{
					cin.ignore();
					cout<<"New client's name: ";
					getline(cin, given_name);
					port_list[found_index]->set_client_name(given_name);
					
					cin.ignore();
					cout<<"New client's address: ";
					getline(cin, given_address);
					port_list[found_index]->set_client_address(given_address);
					
					cout<<"New client's phone: ";
					cin>>given_phone;
					port_list[found_index]->set_client_phone(given_phone);
					
					port_list[found_index]->display();
				}
				else if(modify_choice==2)	//adding a security to the portfolio
				{
					int add_choice;
	
					do
					{
						add_choice=add_security_menu();
					}while(add_choice<1 || add_choice>2);
					
					if(add_choice==1)			//adding a stock to the portfolio...
					{
						string given_company_name;
						double given_nominal_value;
						int given_num_of_securities;
						int given_year_of_purchase;
						double given_stock_price;
						
						cout<<"New stock's company name: ";
						cin.ignore();
						getline(cin,given_company_name);
						
						cout<<"New stock's nominal value: ";
						cin>>given_nominal_value;
						
						cout<<"New stock's number of securities: ";
						cin>>given_num_of_securities;
						
						cout<<"New stock's year of purchase: ";
						cin>>given_year_of_purchase;
						
						cout<<"New stock's price: ";
						cin>>given_stock_price;
						
						//add the new dynamic object of stock to the securities list of the portfolio
						Stock *new_stock = new Stock(given_company_name, given_nominal_value, given_num_of_securities, given_year_of_purchase, given_stock_price);
						port_list[found_index]->add_security(*new_stock);	
						port_list[found_index]->display();
					}
					else if(add_choice==2)		//adding a bond to the portfolio...
					{
						string given_company_name;
						double given_nominal_value;
						int given_num_of_securities;
						int given_year_of_purchase;
						int given_expiration_date;
						double given_interest_rate;
						
						cout<<"New bond's company name: ";
						cin.ignore();
						getline(cin,given_company_name);
						
						cout<<"New bond's nominal value: ";
						cin>>given_nominal_value;
						
						cout<<"New bond's number of securities: ";
						cin>>given_num_of_securities;
						
						cout<<"New stock's year of purchase: ";
						cin>>given_year_of_purchase;
						
						cout<<"New bond's expiration date: ";
						cin>>given_expiration_date;
						
						cout<<"New bond's interest rate: ";
						cin>>given_interest_rate;
						
						//add the new dynamic object of bond to the securities list of the portfolio
						Bond *new_bond = new Bond(given_company_name, given_nominal_value, given_num_of_securities, given_year_of_purchase, given_expiration_date, given_interest_rate);
						port_list[found_index]->add_security(*new_bond);
						port_list[found_index]->display();
					}
				
				}
				else if(modify_choice==3)	//removing a security from the portfolio
				{
					int remove_choice;
					vector<Security *> list=port_list[found_index]->get_securities_list();	//vector to hold all the securities in the portfolio
					
					cout<<endl;
					
					if(port_list[found_index]->num_of_securities()==0)						//if there are no securities in the portfolio...
					{
						cout<<"No securities to delete."<<endl;
					}
					else																	//if there are securities in the portfolio...
					{
						for(int i=0;i<port_list[found_index]->num_of_securities();i++)      	//printing all the securities to choose from
						{
							cout<<i+1<<".: "<<endl;
							list[i]->display();
							cout<<endl;
						}
						cout<<"Security to delete: ";
						cin>>remove_choice;
						
						cout<<endl;
						
						port_list[found_index]->remove_security(remove_choice);
						port_list[found_index]->display();
					}

				}
			}
			else
			{
				cout<<"No client's portfolio found with this registration number"<<endl;
			}
		}
		else if(choice==3)		//cancelling a portfolio...
		{
			string given_reg_num;
			bool found=false;
			int found_index;
			
			cin.ignore();
			cout<<"Enter registration number: ";
			getline(cin, given_reg_num);
			
			for(int i=0;i<port_list.size();i++)
			{
				if(port_list[i]->get_reg_num()==given_reg_num)
				{
					found_index=i;
					found=true;
				}
			}	
				
			if(found)
			{
				port_list[found_index]->cancel_portfolio();
				cout<<"Portfolio's status with registration number "<<given_reg_num<<" changed to \'Invalid\'"<<endl;
			}
			else
			{
				cout<<"No portfolio with that registration number"<<endl;
			}		
		}
		else if(choice==4)		//showing additional info...
		{
			double x;
			int info_choice;
			
			do
			{
				info_choice=info_menu();
			}while(info_choice<1 || info_choice>3);
			
			if(info_choice==1)
			{
				int counter=0;
				
				cout<<"Give X amount: ";
				cin>>x;
				
				for(int i=0;i<port_list.size();i++)
					if(port_list[i]->total_charge()>x)
						counter++;
						
				
				cout<<counter<<" portfolios have total charge >"<<x<<" euros"<<endl;
			}
			else if(info_choice==2)
			{
				int counter=0;
				
				cout<<"Give X amount: ";
				cin>>x;
				
				for(int i=0;i<port_list.size();i++)
					if(port_list[i]->check_securities(x))
						counter++;	
						
				cout<<counter<<" portfolios have a single security with annual charge >"<<x<<" euros"<<endl;
			}
			else if(info_choice==3)
			{
				//vectors to hold the registration numbers and total charges from the portfolios list
				vector<string>top10_reg_nums;
				vector<double>top10_total_charges;
				
				string temp_reg_num;
				double temp_total_charge;
				
				int num_of_valid_portfolios=0;
				
				//copying registration numbers and total charges to the vectors soon to be sorted
				for(int i=0;i<port_list.size();i++)
				{
					if(port_list[i]->get_valid())
					{
						top10_reg_nums.push_back(port_list[i]->get_reg_num());
						top10_total_charges.push_back(port_list[i]->total_charge());	
						
						num_of_valid_portfolios++;
					}	
				}
					
				//bubble sort the portfolios based on each one's total charges
				for(int i=1;i<num_of_valid_portfolios;i++)
					for(int j=0;j<num_of_valid_portfolios-i;j++)
						if(top10_total_charges[j]<=top10_total_charges[j+1])
						{
							temp_reg_num=top10_reg_nums[j];
							top10_reg_nums[j]=top10_reg_nums[j+1];
							top10_reg_nums[j+1]=temp_reg_num;
							
							temp_total_charge=top10_total_charges[j];
							top10_total_charges[j]=top10_total_charges[j+1];
							top10_total_charges[j+1]=temp_total_charge;
						}
	
				cout<<"Top 10 portfolios with the biggest total charges:"<<endl;
				for(int i=0;i<10;i++)
					cout<<"\t"<<i+1<<". Registration Number: "<<top10_reg_nums[i]<<", Total Charge: "<<top10_total_charges[i]<<endl;			
			}
		}
		else if(choice==5)
		{
			cout<<"Exiting..."<<endl;
			flag=true;
		}
		else
		{
			cout<<"Invalid choice. Try Again."<<endl;
		}
				
		cout<<endl;
		
	}while((choice>=1 || choice<=4) && !flag);
	
	return 0;
}
