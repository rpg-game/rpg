#ifndef _COUNTRYSERVICE_H_
#define _COUNTRYSERVICE_H_

#include "cocos2d.h"
#include"Player.h"
#include"Service.h"
#include"Monster.h"
#include"Equip.h"
#include"Property.h"

USING_NS_CC;

class Forestservice :public Service {
public:
	CREATE_FUNC(Forestservice);
	bool init();
	void update(float dt);
	static void setMessageID(int);
	void attack();
	void paintPlayer(Player* player);
	void paintMonster(Monster* monster);
private:
	static int messageID;
	
};
#endif
