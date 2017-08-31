#include "BBall.h"

Ball::Ball() {

}
Ball::~Ball() {

}
bool Ball::init() {
	Sprite::initWithFile("imgs/ball.png");
	//创建圆形刚体
	PhysicsBody* ballBodyOne = PhysicsBody::createCircle(this->getContentSize().width / 2, PHYSICSBODY_MATERIAL_DEFAULT);
    //设置摩擦力
	ballBodyOne->getShape(0)->setFriction(0);
	ballBodyOne->getShape(0)->setRestitution(1.0f);
	//无重力
	ballBodyOne->setGravityEnable(false);
	//速度设置
	ballBodyOne->setVelocityLimit(650);

	ballBodyOne->setCategoryBitmask(0x0001);
	ballBodyOne->setCollisionBitmask(0x0001);
	ballBodyOne->setContactTestBitmask(0x0001);

	setPhysicsBody(ballBodyOne);
	this->setScale(0.7);

	return true;
}