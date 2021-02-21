/* 
 	FILE:
 		Suites.h

 	AUTHOR:
 		Ryan R. Phay

	DESCRIPTION:
		
*/

#ifndef SUITES_H
#define SUITES_H

#include<iostream>

// Card should have a suite, a name, a number/id, a front graphic, and a back graphic
class Suites {

	public:
		Suites(){
			clear();
		};
		Suites( char *arrayOfSuites );

   		~Suites(){
			delete i_Suite;
			delete sSuite;
		};

	    void clear();
		void addSuite( string sSuite );
		void removeSuite( string sSuite );

		inline int g
	protected:
		int _iSuite;                // Number of this Suite

		char *_sSuite;				// Name associated with the Suite
};

#endif
