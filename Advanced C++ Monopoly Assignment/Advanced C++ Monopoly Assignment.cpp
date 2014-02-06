// Advanced C++ Monopoly Assignment.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


#include <iostream>
#include <fstream>



using namespace std;

const char POUND = 156;

int _tmain(int argc, _TCHAR* argv[])
{
	ifstream inp;

	char * fileName = "..\\Debug\\results.txt"; // Change "Debug" for release 

	//read file in
	inp.open(fileName);  
	while (inp){
		inp.getline(theRecords[numRecords].name, NAMESIZE);
		//inp >> theRecords[numRecords].score; 


	return 0;
}

