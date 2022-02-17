#pragma once
#include<iostream>
#include<vector>
class NodeRecord
{
public:
	NodeRecord(int costP, std::string nameP);
	~NodeRecord() {};

	std::string getName() { return name; };
	int getCostSoFar() { return costSoFar; };
	void setName(std::string nameP);
	void setCost(int costP);

private:
	std::string name;
	int costSoFar;

};

