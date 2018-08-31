Stock::Stock():Security()
{
	stock_price=-1;
}

Stock::Stock(string cn, double nv, int nos, int yop, double sp):Security(cn,nv,nos,yop)
{
	stock_price=sp;
}

double Stock::annual_charge()
{
	return 0.02*stock_price;
}

void Stock::display()
{
	cout<<"------------------STOCK------------------"<<endl;
	cout<<"Company's' name: "<<get_company_name()<<endl;
	cout<<"Nominal value: "<<get_nominal_value()<<endl;
	cout<<"Number of securities: "<<get_num_of_securities()<<endl;
	cout<<"Year of purchase: "<<get_year_of_purchase()<<endl;
	cout<<"Stock price: "<<stock_price<<endl;
	cout<<"Stock's annual charge: "<<this->annual_charge()<<endl;
	cout<<"-----------------------------------------"<<endl;
}
