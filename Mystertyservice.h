#ifndef _MYSTERTYSERVICE_H_
#define _MYSTERTYSERVICE_H_

#include "cocos2d.h"
#include"Player.h"
#include"Service.h"
#include"Equip.h"
#include"Property.h"

USING_NS_CC;

class Mystertyservice :public Service {
public:
	CREATE_FUNC(Mystertyservice);
	bool init();
	void update(float dt);
	static void setMessageID(int);
private:
	static int messageID;
};
#endif
