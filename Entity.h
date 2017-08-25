#ifndef __ENTITY_H__
#define __ENTITY_H__
#include "cocos2d.h"

USING_NS_CC;
class Entity :public Node{
	Entity();
	~Entity();
	void bindSprite(Sprite* sprite);
	void bindAnimation(Animation *animation);
	Sprite* getSprite();
protected:
	Sprite * m_sprite;
	Animation * m_animation;

};
#endif;