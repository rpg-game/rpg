#ifndef _COUNTRYCONTROLLER_H_
#define _COUNTRYCONTROLLER_H_

#include "cocos2d.h"
#include"Controller.h"
#include"Countryservice.h"

USING_NS_CC;

class Countrycontroller :public Controller {
public:
	CREATE_FUNC(Countrycontroller);
	bool init();
	void update(float dt);
	static void setMessageID(int);
private:
	static int messageID;
};
#endif
