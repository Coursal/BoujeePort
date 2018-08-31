Security::Security()
{
	company_name="NULL";
	nominal_value=-1;
	num_of_securities=-1;
}

Security::Security(string cn, double nv, int nos, int yop)
{
	company_name=cn;
	nominal_value=nv;
	num_of_securities=nos;
	year_of_purchase=yop;
}



string Security::get_company_name()
{
	return company_name;
}

double Security::get_nominal_value()
{
	return nominal_value;
}

int Security::get_num_of_securities()
{
	return num_of_securities;
}

int Security::get_year_of_purchase()
{
	return year_of_purchase;
}


void Security::set_company_name(string cn)
{
	company_name=cn;
}

void Security::set_nominal_value(double nv)
{
	nominal_value=nv;
}

void Security::set_num_of_securities(int nos)
{
	num_of_securities=nos;
}

void Security::set_year_of_purchase(int yop)
{
	year_of_purchase=yop;
}
