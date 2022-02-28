#pragma once
#include<iostream>
#include<vector>
class NodeRecord
{
public:
	NodeRecord(){}
	NodeRecord(int costP, std::string nameP);
	NodeRecord(int costP, int hCostP, int fCostP, std::string nameP);
	~NodeRecord() {};

	std::string getName() { return name; };
	int getCostSoFar() { return costSoFar; };
	int getHCost() { return hCost; }
	int getFCost() { return fCost; }
	std::string getFromNode() { return fromNode; }
	void setFromNode(std::string fromNodeP);
	void setName(std::string nameP);
	void setCost(int costP);
	void setHcost(int hcostP) { hCost = hcostP; }
	void setFCost(int fcostP) { fCost = fcostP; }
	void display();

private:

	std::string name;
	std::string fromNode;
	int costSoFar;
	int hCost;
	int fCost;

};

