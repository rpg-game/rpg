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
	//重载贴图方法，根据属性贴图
	void setAttribute(int att);
	void bindSprite();

private:
	int hpadd;  //增加的生命值
	int atpadd; //增加的攻击力
	Eattribute attribute;
};
#endif
