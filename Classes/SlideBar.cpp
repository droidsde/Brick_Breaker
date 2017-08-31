#include "SlideBar.h"

SlideBar::SlideBar() :_pectage(0) {

}
SlideBar::~SlideBar() {

}
bool SlideBar::init() {
	if (!Node::init()) {
		return false;
	}

	_bg = Sprite::create("menu_bar.png");
	this->addChild(_bg);


	this->setContentSize(_bg->getContentSize());
	return true;

}
void SlideBar::updateView(int value) {

}