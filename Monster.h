#ifndef __MONSTER_H__
#define __MONSTER_H__
#include "cocos2d.h"
#include"entity.h"


USING_NS_CC;
class Monster :public Entity {
public:
	Monster();
	~Monster();
	CREATE_FUNC(Monster);
	virtual bool init();
	//virtual void update(float dt);
	bool isRight;
	void setHP(int hp);
	int getHP();
	void setATP(int atp);
	int getATP();
	int getSPEED();
	void moveLeft();
	void moveRight();
	void repeatMove();
	void attack();
	void beAttacked();
	void die();


private:
	int hp;  //生命值
	int atp; //攻击力
	const int SPEED = 5;
	const int MBH = 500;  //怪物基础血量


};
#endif
