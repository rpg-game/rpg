#ifndef __PLAYERMANEGER_H__
#define __PLAYERMANEGER_H__

#include "cocos2d.h"
#include "player.h"
USING_NS_CC;


class Playermaneger : public Node {
public:
	Playermaneger();
	~Playermaneger();
	CREATE_FUNC(Playermaneger);
	virtual bool init();
	virtual void update(float dt);
	

private:
	Player* m_player;
};
#endif
