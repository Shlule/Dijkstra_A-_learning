#pragma once
#include<vector>
#include"Connection.h"
class Node
{
public:
	Node()
	std::string getName() { return name; }
	int getCostSoFar() { return costSoFar; }
	std::vector<Connection> getConnection() { return connections; }

	void setName(std::string nameP);
	void setCostSoFar(int costP);
	void AddConnection();
	void removeConnection();
	
	


private:
	std::string name;
	std::vector<Connection> connections;
	int costSoFar;


	void InitStartNode();
};

