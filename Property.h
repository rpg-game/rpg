#ifndef __PROPERTY_H__
#define __PROPERTY_H__
#include "cocos2d.h"
#include"entity.h"
USING_NS_CC;


enum Pattribute
{
	ningmengcha = 0,
	niangjiu = 1,
	mianmo = 2,
	xin,

};
class Property :public Entity {
public:
	Property();
	~Property();
	CREATE_FUNC(Property);
	virtual bool init();
	Eattribute getAttribute();
	//������ͼ����������������ͼ
	void setAttribute(int att);
private:
	Pattribute attribute;
};
#endif
