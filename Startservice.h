#ifndef _STARTSERVICE_H_
#define _STARTSERVICE_H_

#include "cocos2d.h"
#include"Player.h"
#include"Service.h"
#include"Startscene.h"
#include"Countryscene.h"
#include"HelloWorldScene.h"

USING_NS_CC;

class Startservice:public Service {
public:
	CREATE_FUNC(Startservice);
	bool init();
	void update(float dt);
	bool iscancontinue();
	static void setMessageID(int);
	
private:
	static int messageID;
	Player* player;

};
#endif
