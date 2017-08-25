#include"Startservice.h"

bool Startservice::init() {
	this->scheduleUpdate();
	return true;
	
}
void Startservice::update(float dt) {
	switch (messageID)
	{
	case 1:
		Scene* countryscene = Countryscene::createScene();
		Director::getInstance()->replaceScene(countryscene);
		break;
	
	}
}
bool Startservice::iscancontinue() {
	return true;
}
void Startservice::setMessageID(int mess) {
	Startservice::messageID = mess;
}
int Startservice::messageID = 0;