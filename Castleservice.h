#ifndef _CASTLESERVICE_H_
#define _CASTLESERVICE_H_

#include "cocos2d.h"
#include"Player.h"
#include"Service.h"
#include"Equip.h"
#include"Property.h"

USING_NS_CC;

class Castleservice :public Service {
public:
	CREATE_FUNC(Castleservice);
	bool init();
	void update(float dt);
	static void setMessageID(int);
	void talk();
	void paintPlayer(Player* player);


private:
	static int messageID;
	
};
#endif
