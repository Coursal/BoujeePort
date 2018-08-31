#include <string>

using namespace std;

class Security
{
	private:
		string company_name;
		double nominal_value;
		int num_of_securities;
		int year_of_purchase;
	public:
		Security();
		Security(string cn, double nv, int nos, int yop);
		
		virtual double annual_charge()=0;
		
		virtual void display()=0;
		
		//getters and setters
		string get_company_name();
		double get_nominal_value();
		int get_num_of_securities();
		int get_year_of_purchase();
		
		void set_company_name(string cn);
		void set_nominal_value(double nv);
		void set_num_of_securities(int nos);
		void set_year_of_purchase(int yop);
};
