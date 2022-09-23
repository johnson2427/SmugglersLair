#include <iostream>
#include <fstream>
#include <string>
#include <cctype>
#include <cstring>
#include "GameRecord.h"

using namespace std;

int main()
{
	ofstream outFile;
	string outFileName;

	outFileName = "GameRecordTestDriverOutFile.txt";
	outFile.open(outFileName.c_str());

	GameRecord gameRecord1;
	GameRecord gameRecord2("video game 2", 123, 144, 4.56);
	
	gameRecord1.printRecord(std::cout);
	printf("\n");

	outFile << "Print Record 1: " << endl;
	gameRecord1.printRecord(outFile);
	outFile << "\n" << endl;

	gameRecord2.printRecord(std::cout);
	printf("\n");

	outFile << "Print Record 2: " << endl;
	gameRecord2.printRecord(outFile);
	outFile << "\n" << endl;

	char name[128] = "reject";

	gameRecord1.getName(name);

	std::cout << name << std::endl;

	outFile << "getName for gameRecord1 (default constructor): " << endl;
	outFile << name << endl;
	outFile << "\n" << endl;

	gameRecord2.getName(name);

	std::cout << name << std::endl;

	outFile << "getName for gameRecord2 (parameter constructor): " << endl;
	outFile << name << endl;
	outFile << "\n" << endl;


	gameRecord1.setName("video game 1");
	gameRecord1.printRecord(std::cout);

	std::cout << "\n" << endl;

	outFile << "Print record 1: " << endl;
	gameRecord1.printRecord(outFile);

	gameRecord2.setName("Mario Kart");
	gameRecord2.printRecord(std::cout);

	outFile << "\nPrint record 2: " << endl;
	gameRecord2.printRecord(outFile);

	printf("\nget stock number of the default constructor: %ld", gameRecord1.getStockNo());

	outFile << "\nget stock number of default constructor: " << endl;
	outFile << gameRecord1.getStockNo() << endl;

	printf("\nget stock number of parameter constructor: %ld", gameRecord2.getStockNo());

	outFile << "\nget stock number of parameter constructor: " << endl;
	outFile << gameRecord2.getStockNo() << endl;

	gameRecord1.setStockNo(4133);
	printf("\nget new stock number of default constructor: %ld", gameRecord1.getStockNo());

	outFile << "\nget new stock number of default constructor: " << endl;
	outFile << gameRecord1.getStockNo() << endl;

	gameRecord2.setStockNo(1234);
	printf("\nget new stock number of parameter constructor: %ld", gameRecord2.getStockNo());

	outFile << "\nget new stock number of parameter constructor: " << endl;
	outFile << gameRecord2.getStockNo() << endl;

	int value = 1;

	gameRecord1.getClassification(value);
	printf("\nget classification of default constructor: %i", value);

	outFile << "\n get classification of default constructor: " << endl;
	outFile << value << endl;
	outFile << "\n" << endl;


	gameRecord2.getClassification(value);
	printf("\nget classification of parameter constructor: %i", value);

	outFile << "\n get classification: " << endl;
	outFile << value << endl;
	outFile << "\n" << endl;


	gameRecord1.setClassification(127);
	gameRecord1.getClassification(value);
	printf("\nget new classification for record1: %i", value);

	outFile << "get new classification for record1: " << endl;
	outFile << value << endl;
	outFile << "\n" << endl;


	gameRecord2.setClassification(128);
	gameRecord2.getClassification(value);
	printf("\nget new classification for record2: %i", value);

	outFile << "get new classification for record2: " << endl;
	outFile << value << endl;
	outFile << "\n" << endl;


	double c = 6.74;

	std::cout << "\nOriginal Price of record 1: " << endl;
	outFile << "Getting original Price of default constructor: " << endl;
	gameRecord1.getPrice(&c, outFile);

	std::cout << "\nOriginal Price of record 2: " << endl;
	outFile << "Getting original Price of parameter constructor: " << endl;
	gameRecord2.getPrice(&c, outFile);

	gameRecord1.setPrice(c);
	std::cout << "\n" << endl;
	gameRecord1.printRecord(std::cout);
	std::cout << "\n" << endl;

	outFile << "\nPrint Record 1 to show new Price set: " << endl;
	gameRecord1.printRecord(outFile);
	outFile << "\n" << endl;


	gameRecord2.setPrice(c);
	gameRecord2.printRecord(std::cout);

	outFile << "\nPrint Record 2 to show new Price set: " << endl;
	gameRecord2.printRecord(outFile);
	outFile << "\n" << endl;
	
	printf("\nget number in stock of game record 1: %i", gameRecord1.getNoInStock());
	printf("\nget number in stock of game record 2: %i", gameRecord2.getNoInStock());

	outFile << "get number in stock of game record 1: " << endl;
	outFile << gameRecord1.getNoInStock() << endl;

	outFile << "get number in stock of game record 2: " << endl;
	outFile << gameRecord2.getNoInStock() << endl;

	printf("\nset number of stock for game record 1");
	gameRecord1.setNoInStock(1442);
	printf("\nget number of items in stock for game record 1: %ld", gameRecord1.getNoInStock());

	outFile << "\nget number of items in stock for game record 1: " << endl;
	outFile << gameRecord1.getNoInStock() << endl;


	printf("\nset number of stock for game record 2");
	gameRecord2.setNoInStock(2142);
	printf("\nget number of items in stock for game record 2: %ld\n", gameRecord2.getNoInStock());

	outFile << "\nget number of items in stock for game record 2: " << endl;
	outFile << gameRecord2.getNoInStock() << endl;


	gameRecord1.printRecord(std::cout);
	printf("\n");
	gameRecord2.printRecord(std::cout);

	outFile << "\nPrint Record 1: " << endl;
	gameRecord1.printRecord(outFile);
	outFile << "\nPrint Record 2: " << endl;
	gameRecord2.printRecord(outFile);
}