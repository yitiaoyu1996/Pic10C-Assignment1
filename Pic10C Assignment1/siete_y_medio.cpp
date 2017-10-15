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
	Hand h1();

	std::cout << "You have $100.Enter bet : ";
	int bet;
	std::cin >> bet;
	string answer;
	do 
	{
		Card p1();
		h1.push_back(p1);
	    std::cout << "Your Cards : " << std::endl;
	    h1.print();
	    std::cout << "Your total is " << cards1.sum() << ".";
	    std::cout << "Do you want another card (y/n)? ";    
	    cin >> answer;
	} while (answer == "y"||answer=="Y");
	Player dealer(100);
	Card d1;
	Hand d;
	d.push_back(d1);
	std::cout << "Dealer's cards: " << d1.print();

	


	/*You have $100.Enter bet : 99
		Your cards :
	Dos de copas(Two of cups).
		Your total is 2. Do you want another card(y / n) ? n
		Dealer's cards:	Sota de espadas     (Jack of spades).
		The dealer's total is 0.5.

		New card :
	Rey de espadas(King of spades).

		Dealer's cards:
		Sota de espadas(Jack of spades).
		Rey de espadas(King of spades).
		The dealer's total is 1.

		New card :
	Siete de bastos(Seven of clubs).

		Dealer's cards:
		Siete de bastos(Seven of clubs).
		Sota de espadas(Jack of spades).
		Rey de espadas(King of spades).
		The dealer's total is 8.

		You win 99.

		You have $199.Enter bet : 198
		Your cards :
	Caballo de bastos(Knight of clubs).
		Your total is 0.5.Do you want another card(y / n) ? y
		New card :
	As de espadas(Ace of spades).

		Your cards :
	As de espadas(Ace of spades).
		Caballo de bastos(Knight of clubs).
		Your total is 1.5.Do you want another card(y / n) ? y
		New card :
	Cuatro de espadas(Four of spades).

		Your cards :
	As de espadas(Ace of spades).
		Cuatro de espadas(Four of spades).
		Caballo de bastos(Knight of clubs).
		Your total is 5.5.Do you want another card(y / n) ? n
		Dealer's cards:	Rey de bastos       (King of clubs).
		The dealer's total is 0.5.

		New card :
	Seis de bastos(Six of clubs).

		Dealer's cards:
		Seis de bastos(Six of clubs).
		Rey de bastos(King of clubs).
		The dealer's total is 6.5.

		Too bad.You lose 198.

		You have $1.Enter bet : 1
		Your cards :
	Sota de copas(Jack of cups).
		Your total is 0.5.Do you want another card(y / n) ? y
		New card :
	Tres de bastos(Three of clubs).

		Your cards :
	Tres de bastos(Three of clubs).
		Sota de copas(Jack of cups).
		Your total is 3.5.Do you want another card(y / n) ? y
		New card :
	Cuatro de copas(Four of cups).

		Your cards :
	Tres de bastos(Three of clubs).
		Cuatro de copas(Four of cups).
		Sota de copas(Jack of cups).
		Your total is 7.5.Do you want another card(y / n) ? n
		Dealer's cards:	Siete de copas      (Seven of cups).
		The dealer's total is 7.

		You win 1.

		You have $2.Enter bet : 2
		Your cards :
	Cinco de espadas(Five of spades).
		Your total is 5. Do you want another card(y / n) ? n
		Dealer's cards:	As de bastos        (Ace of clubs).
		The dealer's total is 1.

		New card :
	Siete de copas(Seven of cups).

		Dealer's cards:
		As de bastos(Ace of clubs).
		Siete de copas(Seven of cups).
		The dealer's total is 8.

		You win 2.

		You have $4.Enter bet : 4
		Your cards :
	As de espadas(Ace of spades).
		Your total is 1. Do you want another card(y / n) ? y
		New card :
	Seis de copas(Six of cups).

		Your cards :
	As de espadas(Ace of spades).
		Seis de copas(Six of cups).
		Your total is 7. Do you want another card(y / n) ? n
		Dealer's cards:	Dos de oros         (Two of coins).
		The dealer's total is 2.

		New card :
	Sota de oros(Jack of coins).

		Dealer's cards:
		Dos de oros(Two of coins).
		Sota de oros(Jack of coins).
		The dealer's total is 2.5.

		New card :
	Seis de oros(Six of coins).

		Dealer's cards:
		Dos de oros(Two of coins).
		Seis de oros(Six of coins).
		Sota de oros(Jack of coins).
		The dealer's total is 8.5.

		You win 4.

		You have $8.Enter bet : 8
		Your cards :
	Seis de oros(Six of coins).
		Your total is 6. Do you want another card(y / n) ? n
		Dealer's cards:	Seis de espadas     (Six of spades).
		The dealer's total is 6.

		Nobody wins!

		You have $8.Enter bet : 8
		Your cards :
	As de bastos(Ace of clubs).
		Your total is 1. Do you want another card(y / n) ? y
		New card :
	Caballo de oros(Knight of coins).

		Your cards :
	As de bastos(Ace of clubs).
		Caballo de oros(Knight of coins).
		Your total is 1.5.Do you want another card(y / n) ? y
		New card :
	Cinco de oros(Five of coins).

		Your cards :
	As de bastos(Ace of clubs).
		Cinco de oros(Five of coins).
		Caballo de oros(Knight of coins).
		Your total is 6.5.Do you want another card(y / n) ? n
		Dealer's cards:	Caballo de bastos   (Knight of clubs).
		The dealer's total is 0.5.

		New card :
	Dos de bastos(Two of clubs).

		Dealer's cards:
		Dos de bastos(Two of clubs).
		Caballo de bastos(Knight of clubs).
		The dealer's total is 2.5.

		New card :
	Rey de espadas(King of spades).

		Dealer's cards:
		Dos de bastos(Two of clubs).
		Caballo de bastos(Knight of clubs).
		Rey de espadas(King of spades).
		The dealer's total is 3.

		New card :
	As de oros(Ace of coins).

		Dealer's cards:
		As de oros(Ace of coins).
		Dos de bastos(Two of clubs).
		Caballo de bastos(Knight of clubs).
		Rey de espadas(King of spades).
		The dealer's total is 4.

		New card :
	Caballo de oros(Knight of coins).

		Dealer's cards:
		As de oros(Ace of coins).
		Dos de bastos(Two of clubs).
		Caballo de bastos(Knight of clubs).
		Caballo de oros(Knight of coins).
		Rey de espadas(King of spades).
		The dealer's total is 4.5.

		New card :
	Tres de bastos(Three of clubs).

		Dealer's cards:
		As de oros(Ace of coins).
		Dos de bastos(Two of clubs).
		Tres de bastos(Three of clubs).
		Caballo de bastos(Knight of clubs).
		Caballo de oros(Knight of coins).
		Rey de espadas(King of spades).
		The dealer's total is 7.5.

		Too bad.You lose 8.

		You have $0.GAME OVER!
		Come back when you have more money.

		Bye!
		*/
	return 0;
}