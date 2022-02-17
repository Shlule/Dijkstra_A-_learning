#pragma once
#include<iostream>
#include<vector>
class Connection
{
public: 
	Connection(int costP, std::string fromNodeP, std::string toNodeP);
	int getCost() { return cost; }
	std::string getFromNode() { return fromNode; }
	std::string getToNode() { return toNode; }
	void display()const;

private:
	int cost;
	std::string fromNode;
	std::string toNode;
};

