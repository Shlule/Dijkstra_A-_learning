#pragma once
#include<iostream>
#include<vector>
class NodeRecord
{
public:
	NodeRecord(){}
	NodeRecord(int costP, std::string nameP);
	~NodeRecord() {};

	std::string getName() { return name; };
	int getCostSoFar() { return costSoFar; };
	std::string getFromNode() { return fromNode; }
	void setFromNode(std::string fromNodeP);
	void setName(std::string nameP);
	void setCost(int costP);
	void display();

private:
	std::string name;
	std::string fromNode;
	int costSoFar;

};

