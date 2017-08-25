#include"Countryscene.h"
Scene* Countryscene::createScene()
{
	auto scene = Scene::create();
	auto layer = Countryscene::create();

	scene->addChild(layer);

	return scene;
}

bool Countryscene::init()
{
	if (!Layer::init())
	{
		return false;
	}

	Size visibleSize = CCDirector::getInstance()->getVisibleSize();
	loadUI();
	this->scheduleUpdate();
	return true;

}
void Countryscene::loadUI() {

}
void Countryscene::update(float delta)
{
	switch (messageID)
	{
	case 1:
	default:
		break;
	}
}
int Countryscene::messageID = 0; 