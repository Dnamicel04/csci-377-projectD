// Person.h
#include <iostream>

class Person{

	private:
		std::string name;
		int accNum;
		double balance;

	public:
		Person();
		~Person();
		Person(std::string newName, int newAccNum, double newBal);
		// getters
		std::string getName() const;
		int getAccNum() const;
		double getBalance() const;

		// setters
		void setName(std::string newName);
		void setAccNum(int newAccNum);
		void setBalance(double newBal);

		void printPerson();

};
