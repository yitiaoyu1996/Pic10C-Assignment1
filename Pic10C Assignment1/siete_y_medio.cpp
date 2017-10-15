#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <ctime>
#include <cstdlib>
#include "cards.h"
using namespace std;

// Global constants (if any)


// Non member functions declarations (if any)


// Non member functions implementations (if any)


// Stub for main
int main() {

	Player one(100);
	
	
	while(one.get_money()>0)
	{ 
		Hand p;
		int p_money = one.get_money();
		std::cout << "You have: $" << p_money<<". Enter bet: ";
	int bet;
	std::cin >> bet;
	string answer;
	do
	{
		Card p1;
		p.push_back(p1);
		std::cout << "Your Cards : " << std::endl;
		p.print();
		std::cout << "Your total is " << p.sum() << ".";
		if (p.sum()>7.5)
		{
			std::cout << "You bust" << std::endl;
			break;
		}
		std::cout << "Do you want another card (y/n)? ";    
	    cin >> answer;
	} while (answer == "y"||answer=="Y");
	Player dealer(100);
	
	Hand d;
	
		Card d1;
		d.push_back(d1);
		std::cout << "Dealer's cards: " << std::endl;
		d.print();
		std::cout << "\n";
		std::cout << "The dealer's total is " << d.sum() << ".";
		bool more = true;
		while (more == true && d.sum() <= 7.5)
		{
			if (d.sum() >= 5.5)
			{
				more = false;
			}
			else
			{
				Card d2;
				d.push_back(d2);
				std::cout << "New card:" << endl;
				d2.print();
				std::cout << "Dealer's cards:" << std::endl;
				d.print();
				cout << "The dealer's total is " << d.sum()<<". ";

			}
		}

			double difference_d = 7.5 - d.sum();
			double difference_p = 7.5 - p.sum();
			if (d.sum() > 7 && p.sum() > 7)
			{
				std::cout << "House advantage!" << std::endl;
				one.minus(bet);
			}
			else if (d.sum() <= 7.5 && p.sum() <= 7.5)
			{
				if (difference_d < difference_p)
				{
					std::cout << "Too bad. You lose " << bet << "." << std::endl;
					one.minus(bet);
				}
				else if (difference_d > difference_p)
				{
					std::cout << "You win!" << endl;
					one.add(bet);
				}
				else if (difference_d == difference_p)
					std::cout << "Nobody wins!" << std::endl;
			}

			else if (d.sum() > 7.5 && p.sum() < 7.5)
			{
				std::cout << " You win!" << std::endl;
				one.add(bet);

			}
			else if (d.sum() < 7.5 && p.sum() > 7.5)
			{
				std::cout << " You bust!" << std::endl;
				one.minus(bet);
			}

		
	}
	

	std::cout << "You have no money. Game over." << std::endl;
	


	return 0;
}
