/* author: Mahesh Gaya
*  date: 03/02/15
*  description: A driver to test the functions in the Card Class
*  This project will create a few cards and display them.
*  If Card.cpp is implemented correctly, this program will output:
*  AC
*  your card is now...
*  7H
*/

#include <iostream>
#include "Card.h"

using namespace std;

int main()
{
    	Card *myCard = new Card((Rank) ACE, 'C');  //makes an Ace of Clubs
    	cout << myCard->toString() <<endl;
 
    	myCard->setRank((Rank) SEVEN); //change rank
    	myCard->setSuit('H'); //change suit

    	cout << "your card is now... " << endl;
    	cout << myCard->getRank() << myCard->getSuit() << endl; //output rank and suit
	//cout << myCard->toString() <<endl;

}
