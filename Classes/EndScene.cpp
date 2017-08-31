#include "EndScene.h"
#include "ui/CocosGUI.h"
#include "ui/UIText.h"   
#include "cocostudio/CocoStudio.h"
#include "StartScene.h"
#include "SimpleAudioEngine.h"

EndScene::EndScene() {}
EndScene::~EndScene() {}
//结束场景设计
Scene * EndScene::createScene()
{
	Scene* scene = Scene::create();
	EndScene* layer = EndScene::create();
	scene->addChild(layer, 1);
	return scene;
}

bool EndScene::init()
{
	if (!Layer::init()) {
		return false;
	}
	auto EndScene = CSLoader::createNode("EndScene.csb");

	auto viewSize = Director::getInstance()->getVisibleSize();

	auto _menuBtn = static_cast<ui::Button*>(EndScene->getChildByName("returnButton"));

	_menuBtn->addTouchEventListener(CC_CALLBACK_2(EndScene::mainMenuCallback, this));

	addChild(EndScene);
	return true;
}

void EndScene::mainMenuCallback(Ref* sender, cocos2d::ui::Widget::TouchEventType type) {
	CocosDenshion::SimpleAudioEngine::getInstance()->playEffect("sounds/sndMenuButtonRollover.mp3");
	Director::getInstance()->replaceScene(StartScene::createScene());
}