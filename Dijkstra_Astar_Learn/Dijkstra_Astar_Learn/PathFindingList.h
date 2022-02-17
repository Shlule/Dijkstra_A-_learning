#pragma once
#include"NodeRecord.h"
#include<vector>
class PathFindingList
{
public:
	void AddNode(NodeRecord nodeP);
	void RemoveNode(NodeRecord nodeP);
	NodeRecord getSmallestElement();
private:
	std::vector<NodeRecord> nodes;
};

