Portfolio::Portfolio()
{
	client_name=client_address=client_phone=reg_num="NULL";
}

Portfolio::Portfolio(string cn, string ca, string cp, string rn)
{
		client_name=cn;
		client_address=ca;
		client_phone=cp;
		reg_num=rn;
}

Portfolio::Portfolio(string cn, string ca, string cp, string rn, vector<Security *> sl)
{
		client_name=cn;
		client_address=ca;
		client_phone=cp;
		reg_num=rn;
		securities_list=sl;
}


double Portfolio::total_charge()
{
	double sum=0;
	
	for(int i=0;i<securities_list.size();i++)
		sum+=securities_list[i]->annual_charge();
		
	return sum;
}

void Portfolio::cancel_portfolio()
{
	valid=false;
}

bool Portfolio::check_securities(double x)
{
	bool found=false;
	
	for(int i=0;i<securities_list.size();i++)
		if(securities_list[i]->annual_charge()>x)
			found=true;
			
	return found;
}

void Portfolio::add_security(Security &s)
{
	securities_list.push_back(&s);
}

void Portfolio::remove_security(int k)
{
	securities_list.erase(securities_list.begin()+k-1);
}

int Portfolio::num_of_securities()
{
	return securities_list.size();
}



string Portfolio::get_client_name()
{
	return client_name;
}

string Portfolio::get_client_address()
{
	return client_address;
}

string Portfolio::get_client_phone()
{
	return client_phone;
}

string Portfolio::get_reg_num()
{
	return reg_num;
}

vector<Security *> Portfolio::get_securities_list()
{
	return securities_list;
}

bool Portfolio::get_valid()
{
	return valid;
}

void Portfolio::set_client_name(string cn)
{
	client_name=cn;
}

void Portfolio::set_client_address(string ca)
{
	client_address=ca;
}

void Portfolio::set_client_phone(string cp)
{
	client_phone=cp;
}

void Portfolio::set_reg_num(string rn)
{
	reg_num=rn;
}

void Portfolio::set_securities_list(vector<Security *> sl)
{
	securities_list=sl;
}


void Portfolio::display()
{
	cout<<"================PORTFOLIO================"<<endl;
	cout<<"Client name: "<<client_name<<endl;
	cout<<"Client address: "<<client_address<<endl;
	cout<<"Client phone: "<<client_phone<<endl;
	cout<<"Client registration number: "<<reg_num<<endl;
	cout<<"Client's securities: "<<endl;
	for(int i=0;i<securities_list.size();i++)
		securities_list[i]->display();	
	cout<<"Valid="<<valid<<endl;
	cout<<"Total charge="<<this->total_charge()<<endl;
	cout<<"========================================="<<endl;
}

