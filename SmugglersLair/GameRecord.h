#pragma once

#include <fstream>

class GameRecord
{
public:
	GameRecord();
	GameRecord(const char *name, long sn, int cl, double price);
	~GameRecord();
	void getName(char *name);
	void setName(const char *name);
	long getStockNo();
	void setStockNo(long sn);
	void getClassification(int& cl);
	void setClassification(int cl);
	void getPrice(double *c, std::ostream& outFile);
	void setPrice(double c);
	int getNoInStock();
	void setNoInStock(int count);
	void printRecord(std::ostream&);
private:
	char m_sName[128];
	long m_lStockNo;
	int m_iClassification;
	double m_dPrice;
	int m_iCount;
};