#pragma once
#include"Connection.h"
#include<vector>
#include<iostream>
class NodeRecord
{
public:
	std::string getName() { return name; }
	int getCostSoFar() { return costSoFar; }
	void setName(std::string nameP);
	void setCost(int costP);
	void AddConnection();
	void RemoveConnection();

private:
	std::string name;
	int costSoFar;
	std::vector<Connection> connections;

	void InitStartNode();
};

