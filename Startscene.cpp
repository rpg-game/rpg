#include"Startscene.h"

Scene* Startscene::createScene()
{
	auto scene = Scene::create();
	auto layer = Startscene::create();

	scene->addChild(layer);

	return scene;
}

bool Startscene::init()
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



void Startscene::update(float delta)
{
	switch (messageID)
	{
	case 1:
	default:
		break;
	}
}


void Startscene::loadUI()
{
	auto beginScene = CSLoader::createNode("res/MainScene.csb");
	button1 = (Button*)beginScene->getChildByName("Button_1");
	button2 = (Button*)beginScene->getChildByName("Button_2");
	button3 = (Button*)beginScene->getChildByName("Button_3");
	layout = (Layout*)beginScene->getChildByName("Panel_1");
	button4 = (Button*)layout->getChildByName("Button_4");
	layout->setVisible(false);
	button1->addTouchEventListener(this, toucheventselector(Startscene::toCountry));
	button3->addTouchEventListener(this, toucheventselector(Startscene::showHelp));
	button4->addTouchEventListener(this, toucheventselector(Startscene::closeHelp));
	this->addChild(beginScene);
	Startservice* startservice=Startservice::create();
	this->addChild(startservice);

	
	
}
void Startscene::toCountry(Ref*, TouchEventType type) {
	switch (type)
	{
	case TouchEventType::TOUCH_EVENT_BEGAN: // ����¼���ʼʱ������Ҳ���ǰ��µ�ʱ��
		break;
	case TouchEventType::TOUCH_EVENT_MOVED: // ����֮�󣬽����ƶ�����ʱ����
		break;
	case TouchEventType::TOUCH_EVENT_ENDED: // ����֮��Ȼ���ɿ�ʱ����
		Startservice::setMessageID(1);
		break;
	case TouchEventType::TOUCH_EVENT_CANCELED:  // ��ΪһЩ����������жϵ���¼�ʱ����
		break;
	default:
		break;
	}
}
void Startscene::showHelp(Ref*, TouchEventType type) {
	switch (type)
	{
	case TouchEventType::TOUCH_EVENT_BEGAN: // ����¼���ʼʱ������Ҳ���ǰ��µ�ʱ��
		break;
	case TouchEventType::TOUCH_EVENT_MOVED: // ����֮�󣬽����ƶ�����ʱ����
		break;
	case TouchEventType::TOUCH_EVENT_ENDED: // ����֮��Ȼ���ɿ�ʱ����
		if (!(layout->isVisible()))
		{
			layout->setVisible(true);
		}
		break;
	case TouchEventType::TOUCH_EVENT_CANCELED:  // ��ΪһЩ����������жϵ���¼�ʱ����
		break;
	default:
		break;
	}
}
void Startscene::closeHelp(Ref*, TouchEventType type) {
	switch (type)
	{
	case TouchEventType::TOUCH_EVENT_BEGAN: // ����¼���ʼʱ������Ҳ���ǰ��µ�ʱ��
		break;
	case TouchEventType::TOUCH_EVENT_MOVED: // ����֮�󣬽����ƶ�����ʱ����
		break;
	case TouchEventType::TOUCH_EVENT_ENDED: // ����֮��Ȼ���ɿ�ʱ����
		if (layout->isVisible())
		{
			layout->setVisible(false);
		}
		break;
	case TouchEventType::TOUCH_EVENT_CANCELED:  // ��ΪһЩ����������жϵ���¼�ʱ����
		break;
	default:
		break;
	}
}
 int Startscene::messageID = 0;



