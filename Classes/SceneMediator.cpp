#include "SceneMediator.h"
#include "HelloWorldScene.h"
//#include "StartScene.h"
//#include "ChoiceScene.h"

SceneMediator * SceneMediator::getInstance()
{
	return nullptr;
}

void SceneMediator::gotoGameScene()
{
	auto scene = HelloWorld::createScene();
	Director::getInstance()->replaceScene(TransitionProgressRadialCCW::create(0.25, scene));
}

