#pragma once
#include"Connection.h"
#include<vector>

class Graph
{

public:
	std::vector<Connection> getConnections(std::string fromNodeP);
	std::vector<Connection> getConnection(std::string fromNodeP);
	void displayConnection( const std::vector<Connection>& connections)const;
	void generatePath();
	int bNum = 1000;
	int matriceProxi[7][7]{
		// a,b,c,d,e,f,g
		{0,15,22,bNum,bNum,bNum,bNum},
		{15,0,bNum,20,18,bNum,bNum},
		{22,bNum,0,16,bNum,42,bNum},
		{bNum,20,16,0,bNum,bNum,bNum},
		{bNum,18,5,bNum,0,15,25},
		{bNum,bNum,42,bNum,15,0,10},
		{bNum,bNum,bNum,bNum,25,10,0}
	};
	std::vector<Connection> connections;
private:
	std::vector<std::string> nodeNames{ "A","B","C","D","E","F","G" };
	
};

