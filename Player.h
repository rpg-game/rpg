#ifndef __PLAYER_H__
#define __PLAYER_H__
#include"cocos2d.h"
#include"Entity.h"
#include"Equip.h"
#include"Property.h"

USING_NS_CC;
class Player :public Entity{
public:
	Player();
	~Player();
	CREATE_FUNC(Player);
	virtual bool init();
	bool isLoadwuqi();
	bool isLoadtoushi();
	void loadWuqi();
	void loadToushi();
	void loadProperty();
	static void moveLeft();
	static void moveRight();
	void attack();
	void beAttacked();
	void die();
	void setHP(int hp);
	int getHP();
	void setATP(int atp);
	int getATP();
	int getSPEED();
	void bindSprite(Sprite* sprite);
	void setPlayerID(String id);
	String getPlayerID();
	void setProperty(Property* property);
	Property* getProperty();
	Pattribute getPattribute();
	void setData();
	void getData();
private:
	const int BH = 500;  //��һ���Ѫ��
	const int SPEED = 5;
	int hp;  //����ֵ
	int atp; //������
	Property* m_propertys;   //ӵ�еĵ���
	Equip* wuqi;
	Equip* toushi;
	String playerID;
	bool isLive;
	bool isright;
	//�����ֵ���3���Ϳ���ͨ��ɭ��
	int livemonster;
	bool iscanjixugame;
	bool iscanzhuxiantalk[5];
	int zhuxiantalkcontrol[5];
	int zhixiantalkcontrol[5];
};
#endif
