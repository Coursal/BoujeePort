Bond::Bond():Security()
{
	expiration_date=-1;
	interest_rate=-1;
}

Bond::Bond(string cn, double nv, int nos, int yop, int ed, double ir):Security(cn,nv,nos,yop)
{
	expiration_date=ed;
	interest_rate=ir;
}

double Bond::annual_charge()
{
	return 0.03*get_nominal_value()+0.01*(expiration_date-2018)+0.01*interest_rate;
}

void Bond::display()
{
	cout<<"------------------BOND-------------------"<<endl;
	cout<<"Company's' name: "<<get_company_name()<<endl;
	cout<<"Nominal value: "<<get_nominal_value()<<endl;
	cout<<"Number of securities: "<<get_num_of_securities()<<endl;
	cout<<"Year of purchase: "<<get_year_of_purchase()<<endl;
	cout<<"Expiration date: "<<expiration_date<<endl;
	cout<<"Interest rate: "<<interest_rate<<endl;
	cout<<"Bond's annual charge: "<<this->annual_charge()<<endl;
	cout<<"-----------------------------------------"<<endl;
}
