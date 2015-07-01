/* author: Mahesh Gaya
*  date: 03/02/15
*  description: A driver to test the functions in the DeckOfCards Class
*  This project will create a deck (the DeckOfCards constructor should shuffle them)
*  If DeckOfCards.cpp is implemented correctly, this program will output:
*  here are 5 cards:
*  card 1 4C
*  card 2 6H
*  card 3 3H
*  card 4 4D
*  card 5 QD
*  destructing
*/

#include <iostream>
#include "DeckOfCards.h"
#include "Card.h"

using namespace std;

int main()
{
    	DeckOfCards deck;  //note: default constructor called here
    	Card myCard;
    	cout << "here are 5 cards:" <<endl;
    	for (int i=0; i<5; i++)
    	{
       	 	myCard = deck.drawCard();
      		cout << "card " << (i+1) << " " << myCard.toString() << endl;
    	}

}
