#pragma once
#include"NodeRecord.h"
#include<vector>
class PathFindList
{
public:
	NodeRecord getSmallestElement();
	void AddNode(NodeRecord nodeP);
	void RemoveNode(NodeRecord nodeP);

private:

	std::vector<NodeRecord> nodes;
};

