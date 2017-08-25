#ifndef _MYSTERTYSCENE_H_
#define _MYSTERTYSCENE_H_

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include"ui/CocosGUI.h"
#include "SimpleAudioEngine.h"
#include"Mystertyservice.h"
#include"Player.h"
#include"Equip.h"
#include"Property.h"
USING_NS_CC;

class Mystertyscene : public Layer {
public:
	static Scene* createScene();
	bool init();
	CREATE_FUNC(Mystertyscene);
	virtual void update(float delta);
	void initBG();          // 开始场景背景
	void loadUI();          // 加载UI
	void getPlayer();


private:
	static int MessageID;
	Player* player;
};
#endif