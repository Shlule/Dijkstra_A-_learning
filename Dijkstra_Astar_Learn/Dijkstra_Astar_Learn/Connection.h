#pragma once
#include<iostream>
#include<vector>
class Connection
{
public:
	Connection(int costP, std::string fromNodeP, std::string toNodeP);
	Connection(int costP, int hcostP,int fCostP, std::string fromNodeP, std::string toNodeP);
	~Connection() {};
	void display()const;
	std::string getFromNode() { return fromNode; }
	std::string getToNode() { return toNode; }
	int getCost() { return cost; }
	void setHCost(int hcostP) { hCost = hcostP; }

	void calculateFCost() { fCost = cost + hCost; }

private:
	int cost;
	std::string fromNode;
	std::string toNode;
	// le h cost est l'estimation qui separe le noeud par rapport au noeud d'arrivé
	int hCost=0;
	// le fCost est la somme  du hcost et du cost
	int fCost=0;
};

