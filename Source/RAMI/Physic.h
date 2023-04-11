#pragma once
#include "Define.h"

class CSpinInfo
{
public:
	eUNION_TYPE spinunion;
	float sspinvalue = 0.0F;
	float tspinvalue = 0.0F;

	CSpinInfo(eUNION_TYPE union_Keyword, float sspin, float tspin);
};

class CAngleInfo
{
public:
	eUNION_TYPE angleunion;
	float anglevalue;
	CAngleInfo(eUNION_TYPE unionValue, float angle);
};

class Physic
{
public:
	
};
