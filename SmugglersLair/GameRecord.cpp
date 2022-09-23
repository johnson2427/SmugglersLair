#include <fstream>
#include "GameRecord.h"

GameRecord::GameRecord()
{
	strcpy_s(m_sName, "");
	m_lStockNo = 0;
	m_iClassification = 0;
	m_dPrice = 0.0;
	m_iCount = 0;
}

GameRecord::GameRecord(const char *name, long sn, int cl, double price)
{
	strcpy_s(m_sName, name);
	m_lStockNo = sn;
	m_iClassification = cl;
	m_dPrice = price;
	m_iCount = 1;
}

GameRecord::~GameRecord()
{

}

void GameRecord::getName(char *name)
{
//	printf("address: %p \n", name);
//	printf("value: %c \n", *name);
	for (int i = 0; i < sizeof(m_sName); i++)
	{
		name[i] = m_sName[i];
	}
}

void GameRecord::setName(const char *name)
{
	strcpy_s(m_sName, name);
}

long GameRecord::getStockNo()
{
	return m_lStockNo;
}

void GameRecord::setStockNo(long sn)
{
	m_lStockNo = sn;
}

void GameRecord::getClassification(int& cl)
{
	cl = m_iClassification;
}

void GameRecord::setClassification(int cl)
{
	m_iClassification = cl;
}

void GameRecord::getPrice(double *c, std::ostream& out)
{
	c = &m_dPrice;
	printf("%f", *c);
	out << *c << " ";
}

void GameRecord::setPrice(double c)
{
	m_dPrice = c;
}

int GameRecord::getNoInStock()
{
	return m_iCount;
}

void GameRecord::setNoInStock(int count)
{
	m_iCount = count;
}

void GameRecord::printRecord(std::ostream& out)
{
	out << m_sName << " " << m_lStockNo << " " << m_iClassification << " " << m_dPrice << " " << m_iCount << " ";
}