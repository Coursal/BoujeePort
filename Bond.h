class Bond : public Security
{
	private:
		int expiration_date;
		double interest_rate;
	public:
		Bond();
		Bond(string cn, double nv, int nos, int yop, int ed, double ir);
		
		double annual_charge();
		
		void display();
};
