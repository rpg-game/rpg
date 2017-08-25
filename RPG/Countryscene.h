#ifndef _COUNTRYSCENE_H_
#define _COUNTRYSCENE_H_

#include "cocos2d.h"
#include "cocostudio/CocoStudio.h"
#include"ui/CocosGUI.h"
#include "SimpleAudioEngine.h"
#include"Countryservice.h"
#include"Player.h"
#include"Equip.h"
#include"Property.h"
USING_NS_CC;

class Countryscene: public Layer {
public:
	static Scene* createScene();
	bool init();
	CREATE_FUNC(Countryscene);
	virtual void update(float delta);
	void loadUI();          // º”‘ÿUI
	void setPlayer(Player* player);
	bool iscrashNPC();
	void setTalk(String, String);
	void setWuqi(bool);
	void setToushi(bool);
	void setProperty(int);

private:
	Player* m_player;
	Equip* m_equip;
	Property* m_property;
	Image* m_image;
	Label* m_label;
	Image* wuqiImage;
	Image* toushiImage;
	Image* daojuImage;
	static int messageID;
};
#endif