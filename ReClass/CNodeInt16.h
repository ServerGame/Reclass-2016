#pragma once

#include "CNodeBase.h"

class CNodeInt16 : public CNodeBase
{
public:
	CNodeInt16();

	virtual void Update(CHotSpot& Spot);

	virtual int GetMemorySize() { return sizeof(short); }

	virtual int Draw(ViewInfo& View, int x, int y);
};