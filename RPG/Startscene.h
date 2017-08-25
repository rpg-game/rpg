#ifndef _STARTSCENE_H_
#define _STARTSCENE_H_

#include "cocos2d.h"
#include"Player.h"
#include "cocostudio/CocoStudio.h"
#include"ui/CocosGUI.h"
#include "SimpleAudioEngine.h"
#include"Startservice.h"
#include<String>

USING_NS_CC;
using namespace std;
using namespace cocostudio::timeline;
using namespace ui;
using namespace cocostudio;



class Startscene : public Layer {
public:
	static Scene* createScene();
	bool init();
	CREATE_FUNC(Startscene);
	virtual void update(float delta);
	void loadUI();          // º”‘ÿUI
	
	static void setMessageID(int);
	void showPageView(int);
	void showHelp(Ref*,TouchEventType type);
	void closeHelp(Ref*, TouchEventType type);
	void toCountry(Ref *, TouchEventType type);
private:
	Button* button1;
	Button* button2;
	Button* button3;
	Button* button4;
	static int messageID;
	Layout* layout;
	
	
	

};
#endif