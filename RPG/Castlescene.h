#ifndef _CASTLESCENE_H_
#define _CASTLESCENE_H_

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include"ui/CocosGUI.h"
#include "SimpleAudioEngine.h"
#include"Castleservice.h"
#include"Player.h"
#include"Equip.h"
#include"Property.h"
USING_NS_CC;

class Castlescene : public Layer {
public:
	static Scene* createScene();
	bool init();
	CREATE_FUNC(Castlescene);
	virtual void update(float delta);
	void initBG();          // 开始场景背景
	void loadUI();          // 加载UI
	bool iscrashNPC();
	void setTalk(String, String);
	void setWuqi(bool);
	void setToushi(bool);
	void setProperty(int);
	void getPlayer();

private:
	Player* m_player;
	Image* m_image;
	Label* m_label;
	Image* wuqiImage;
	Image* toushiImage;
	Image* daojuImage;
	static int MessageID;
};
#endif