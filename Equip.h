#ifndef __EQUIP_H__
#define __EQUIP_H__
#include "cocos2d.h"
#include"Entity.h"
USING_NS_CC;

enum Eattribute
{
	wuqi = 0,
	toushi = 1,
};

class Equip :public Entity {
public:
	Equip();
	~Equip();
	CREATE_FUNC(Equip);
	virtual bool init();
	Eattribute getAttribute();
	//������ͼ����������������ͼ
	void setAttribute(int att);
	void bindSprite();

private:
	int hpadd;  //���ӵ�����ֵ
	int atpadd; //���ӵĹ�����
	Eattribute attribute;
};
#endif
