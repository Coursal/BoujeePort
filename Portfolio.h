#include <string>
#include <vector>

using namespace std;

class Portfolio
{
	private:
		string client_name;
		string client_address;
		string client_phone;
		string reg_num;
		vector<Security *> securities_list;
		bool valid=true;
	public:
		Portfolio();
		Portfolio(string cn, string ca, string cp, string rn);
		Portfolio(string cn, string ca, string cp, string rn, vector<Security *> sl);
		
		
		double total_charge();
		
		void cancel_portfolio();
		
		bool check_securities(double x);	//searching for at least one security above with annual charge bigger than x
		
		void add_security(Security &s);
		void remove_security(int k);
		
		int num_of_securities();
		
		
		//getters and setters
		string get_client_name();
		string get_client_address();
		string get_client_phone();
		string get_reg_num();
		vector<Security *> get_securities_list();
		bool get_valid();
		
		void set_client_name(string cn);
		void set_client_address(string ca);
		void set_client_phone(string cp);
		void set_reg_num(string rn);
		void set_securities_list(vector<Security *> sl);

		void display();
};
