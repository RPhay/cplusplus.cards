/* 
 	FILE:
 		card.h

 	AUTHOR:
 		Ryan R. Phay

	DESCRIPTION:
		
*/

#ifndef CARD_H
#define CARD_H

enum Colors { none = 0, black = 1, red = 2 };

#include<iostream>

// Card should have a suite, a name, a number/id, a front graphic, and a back graphic
class Card{

	// Don't exactly recall what this does, research it!  Won't compile with new g++
	//	friend ostream &operator<<(ostream &os, const Card &outputCard);

	public:
		Card();
                Card( const Card &otherCard );
		Card( int cCardNum, int iCardSuite );

   ~Card(){
			delete sCardName;
			delete sCardNumber;
			delete sCardSuite;
		};

		const Card &operator=( const Card &otherCard );		// Copy function
		int operator==( const Card &otherCard ) const;		// Equality function
		int operator!=( const Card &otherCard ) const;		// Non-equality function
		int operator<=( const Card &otherCard ) const;		// Less than or equal to fn
		int operator>=( const Card &otherCard ) const;      // Greater than or equal to fn
		int operator<( const Card &otherCard ) const;		// Strictly less than fn
        int operator>( const Card &otherCard ) const;       // Strictly greater than fn

		inline void setCardNumber( int iCardNum ){
			if ((cardNum > 0) && (cardNum <= 53)) cardNumber = cardNum;
				createCardName();
		};

		inline void setCardState(int newState){
			if ((newState == 0) || (newState == 1)) cardState = newState;
		};

		int getCardBasicNumber();							// Returns an int from 1 thru 13
		inline int getCardNumber(){							// Returns an int from 1 thru 52
			return cardNumber;
		};
		inline int getCardState(){							// Returns SHOWING, NOT_SHOWING (1,0)
			return cardState;
		};
		int getCardSuit();									// Returns an int from 1 thru 4
		char *getCardNameString();							// Returns string of card's name
		char *getCardNumberString();						// Returns string of card's number
		char *getCardSuitString();							// Returns string of card's suit

	protected:
		int iCardNumber, iCardState;
		char *cardNameString, *cardNumberString, *cardSuitString;

	private:
		void createCardName();								// Sets the char * data members
};

#endif
