#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

#include "cocos2d.h"


USING_NS_CC;

class Controller:public Node {
public:
	CREATE_FUNC(Controller);
	 bool init();
	 void update(float dt);
	static void setMessageID(int);
private:
	static int messageID;
};
	
#endif
#if 0
class Controller : public Node{
public:
	CREATE_FUNC(Controller);
	virtual bool init();
	virtual void update(float dt);
	bool isPlayerCrashNPC();
	bool isPlayerCrashMonster();
	void talk();
	void onKeyReleased(EventKeyboard::KeyCode keyCode, Event* event);
	void setViewPointByPlayer();
	void setTiledMap(TMXTiledMap* map);
	void talkToNPC(int ntalk);
	void setPlayerManeger(Playermaneger* playermaneger);
	void setMonsterManeger(Monstermaneger* monstermaneger);
private:
	TMXTiledMap* m_map;
	/* ¼ì²âÅö×²µÄµØÍ¼²ã */
	TMXLayer* meta;
	Playermaneger* m_playermaneger;
	Monstermaneger* m_monstermaneger;
	Button* m_button;
	LoadingBar* m_loadingBar;
	Text* m_text;
	
	
	
	
};

#endif