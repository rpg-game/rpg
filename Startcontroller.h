#ifndef _STARTCONTROLLER_H_
#define _STARTCONTROLLER_H_

#include "cocos2d.h"
#include"Controller.h"
#include"Startservice.h"

USING_NS_CC;

class Startcontroller :public Controller {
public:	
	CREATE_FUNC(Startcontroller);
	bool init();
	void update(float dt);
	static void setMessageID(int);
private:
	static int messageID;
};
#endif
