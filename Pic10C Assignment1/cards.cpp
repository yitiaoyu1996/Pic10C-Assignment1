#include "cards.h"
#include <cstdlib>
#include <iostream>

/*
You might or might not need these two extra libraries
#include <iomanip>
#include <algorithm>
*/


/* *************************************************
Card class
************************************************* */

/*
Default constructor for the Card class.
It could give repeated cards. This is OK.
Most variations of Blackjack are played with
several decks of cards at the same time.
*/
Card::Card() {
	int r = 1 + rand() % 4;
	switch (r) {
	case 1: suit = OROS; break;
	case 2: suit = COPAS; break;
	case 3: suit = ESPADAS; break;
	case 4: suit = BASTOS; break;
	default: break;
	}

	r = 1 + rand() % 10;
	switch (r) {
	case  1: rank = AS; break;
	case  2: rank = DOS; break;
	case  3: rank = TRES; break;
	case  4: rank = CUATRO; break;
	case  5: rank = CINCO; break;
	case  6: rank = SEIS; break;
	case  7: rank = SIETE; break;
	case  8: rank = SOTA; break;
	case  9: rank = CABALLO; break;
	case 10: rank = REY; break;
	default: break;
	}
}

// Accessor: returns a string with the suit of the card in Spanish 
string Card::get_spanish_suit() const {
	string suitName;
	switch (suit) {
	case OROS:
		suitName = "oros";
		break;
	case COPAS:
		suitName = "copas";
		break;
	case ESPADAS:
		suitName = "espadas";
		break;
	case BASTOS:
		suitName = "bastos";
		break;
	default: break;
	}
	return suitName;
}

// Accessor: returns a string with the rank of the card in Spanish 
string Card::get_spanish_rank() const {
	string rankName;
	switch (rank) {
	case AS:
		rankName = "As";
		break;
	case DOS:
		rankName = "Dos";
		break;
	case TRES:
		rankName = "Tres";
		break;
	case CUATRO:
		rankName = "Cuatro";
		break;
	case CINCO:
		rankName = "Cinco";
		break;
	case SEIS:
		rankName = "Seis";
		break;
	case SIETE:
		rankName = "Siete";
		break;
	case SOTA:
		rankName = "Sota";
		break;
	case CABALLO:
		rankName = "Caballo";
		break;
	case REY:
		rankName = "Rey";
		break;
	default: break;
	}
	return rankName;
}



// Accessor: returns a string with the suit of the card in English 
// This is just a stub! Modify it to your liking.
string Card::get_english_suit() const {
	if (suit == "espadas")
		return "spades";
	else if (suit == "copas")
		return "cups";
	else if (suit == "bastos")
		return "clubs";
	else if (suit == "oros")
		return "coins";
}

// Accessor: returns a string with the rank of the card in English 
// This is just a stub! Modify it to your liking.
string Card::get_english_rank() const {
	if (rank == "As")
		return "Ace";
	else if (rank == "Dos")
		return "Two";
	else if (rank == "Tres")
		return "Three";
	else if (rank == "Cuatro")
		return "Four";
	else if (rank == "Cinco")
		return "Five";
	else if (rank == "Seis")
		return "Six";
	else if (rank == "Siete")
		return "Seven";
	else if (rank == "Sota")
		return "Jack";
	else if (rank == "Caballo")
		return "Knight";
	else if (rank == "Rey")
		return "King";	
}



// Assigns a numerical value to card based on rank.
// AS=1, DOS=2, ..., SIETE=7, SOTA=10, CABALLO=11, REY=12
int Card::get_rank() const {
	return static_cast<int>(rank) + 1;
}

// Comparison operator for cards
// Returns TRUE if card1 < card2
bool Card::operator < (Card card2) const {
	return rank < card2.rank;
}

void Card::print() const {
	std::string eng_rank = get_english_rank();
	std::string eng_suit = get_english_suit();
	std::cout << rank << " de " << suit << "               (" << get_english_rank() << " of " << get_english_suit() << ")" << std::endl;
}
double Card::get_value() const
{
	if (rank == "As")
		return 1;
	else if (rank == "Dos")
		return 2;
	else if (rank == "Tres")
		return 3;
	else if (rank == "Cuatro")
		return 4;
	else if (rank == "Cinco")
		return 5;
	else if (rank == "Seis")
		return 6;
	else if (rank == "Siete")
		return 7;
	else if (rank == "Sota")
		return 1 / 2;
	else if (rank == "Caballo")
		return 1 / 2;
	else if (rank == "Rey")
		return 1 / 2;
 }


/* *************************************************
Hand class
************************************************* */
// Implemente the member functions of the Hand class here.
Hand::Hand()
{
	//it is a vector of Cards, initialize private vector cards

	
}

//no need to use inheritance
void Hand:: print()
{
	for (int i = 0; i < cards.size(); i++)
	{
		cards[i].print();
		std::cout << std::endl;
      //prints out every Card object in the vector cards
	}
}
double Hand::sum() {
	double sum = 0;
	for (int i = 0; i < cards.size(); i++)
	{
		sum += cards[i].get_value();

	}
	return sum;

}


//to push card x into the private vector
void Hand::push_back(Card x)
{
	cards.push_back(x);
}

/* *************************************************
Player class
************************************************* */
// Implemente the member functions of the Player class here.
Player::Player(int m)
{
	money = m;
}

void Player ::add (int m)
{
	money += m;
}

void Player::minus(int m)
{
	money -= m;
}

int Player::get_money()
{
	return money;
}