#ifndef _SERVICE_H_
#define _SERVICE_H_

#include "cocos2d.h"

USING_NS_CC;

class Service :public Node {
public:
	CREATE_FUNC(Service);
	bool init();
	void update(float dt);
	static void setMessageID(int);
private:
	static int messageID;
};
#endif
