// Account.h
//what the value part of the node is 
#include <iostream>
#include <ctime>
#include <cstdlib>
class Account{

	private:
	   
		std::string name;
		int accNum ; 
		double total; // user's total amount
		double checking; 
		double savings;

	public:
		Account();
		~Account();
		Account(std::string newName, int newAccNum, double newCheck, double newSavings);
		// getters
		std::string getName() const;
		int getAccNum() const;
		double getTotal() const; 
		double getChecking() const;
		double getSavings() const;

		// setters
		void setName(std::string newName);
		void setAccNum(int newAccNum);
		void setChecking(double newCheck);
		void setSavings(double newSavings);

      /* deposit and withdrawl  methods go here, ask w. bool  */
	  /*saveOrCheck for which account to perform operation*/
	  // true: savings, false: checking
		void printPerson();

};
