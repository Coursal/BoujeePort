int menu()
{
	int choice;
	
	cout<<"=============================================================================="<<endl;
	cout<<"================================BoojeePort Menu==============================="<<endl;
	cout<<"=============================================================================="<<endl;
	cout<<"******************************************************************************"<<endl;
	cout<<"\t1. Add new portfolio"<<endl;
	cout<<"\t2. Modify existing portfolio"<<endl;
	cout<<"\t3. Cancel portfolio"<<endl;
	cout<<"\t4. Show additional info"<<endl;
	cout<<"\t5. Exit"<<endl;
	cout<<"******************************************************************************"<<endl;
	cout<<"=============================================================================="<<endl;
	cout<<"Choice: ";
	cin>>choice;
	cout<<"=============================================================================="<<endl;
	cout<<"=============================================================================="<<endl;
	
	return choice;
}

int modify_menu()
{
	int modify_choice;
	
	cout<<"******************************************************************************"<<endl;
	cout<<"\t1. Change client's info"<<endl;
	cout<<"\t2. Add security"<<endl;
	cout<<"\t3. Remove security"<<endl;
	cout<<"******************************************************************************"<<endl;
	cout<<"Modification to choose: ";
	cin>>modify_choice;
	cout<<"******************************************************************************"<<endl;	
	
	return modify_choice;
}

int add_security_menu()
{
	int add_security_choice;
	
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<"\t1. Add stock"<<endl;
	cout<<"\t2. Add bond"<<endl;
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	cout<<"Addition to choose: ";
	cin>>add_security_choice;
	cout<<"^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^^"<<endl;
	
	return add_security_choice;
}

int info_menu()
{
	int info_choice;
	
	cout<<"******************************************************************************"<<endl;
	cout<<"\t1. No of portfolios with total charge >X euros"<<endl;
	cout<<"\t2. No of portfolios with a single security with annual charge >X euros"<<endl;
	cout<<"\t3. Top 10 portfolios with the biggest total charges"<<endl;
	cout<<"******************************************************************************"<<endl;
	cout<<"Info to choose: ";
	cin>>info_choice;
	cout<<"******************************************************************************"<<endl;
	
	return info_choice;
}
