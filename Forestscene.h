#ifndef _FORESTSCENE_H_
#define _FORESTSCENE_H_

#include "cocos2d.h"
#include"Player.h"
#include "cocostudio/CocoStudio.h"
#include"ui/CocosGUI.h"
#include "SimpleAudioEngine.h"
#include"Forestservice.h"
#include"Player.h"
#include"Equip.h"
#include"Property.h"
#include"Monster.h"

USING_NS_CC;
using namespace cocostudio::timeline;
using namespace ui;
using namespace cocostudio;


USING_NS_CC;

class Forestscene: public Layer {
public:
	static Scene* createScene();
	bool init();
	CREATE_FUNC(Forestscene);
	virtual void update(float delta);
	void initBG();          // 开始场景背景
	void loadUI();          // 加载UI
	static void setMessageID(int);
	bool isCrashMonster();
	void getPlayer();
	void getMonster();
	void setWuqi(bool);
	void setToushi(bool);
	void setProperty(int);
	


private:
	Player* m_player;
	Equip* m_equip;
	Property* m_property;
	Monster* m_monster1;
	Monster* m_monster2;
	Monster* m_monster3;
	Image* m_image;
	Label* m_label;
	Image* wuqiImage;
	Image* toushiImage;
	Image* daojuImage;
	static int MessageID;



};
#endif
