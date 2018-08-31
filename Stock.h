class Stock : public Security
{
	private:
		double stock_price;
	public:
		Stock();
		Stock(string cn, double nv, int nos, int yop, double sp);
		
		double annual_charge();
		
		void display();
};
