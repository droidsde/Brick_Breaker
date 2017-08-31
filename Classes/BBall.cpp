#include "BBall.h"

Ball::Ball() {

}
Ball::~Ball() {

}
bool Ball::init() {
	Sprite::initWithFile("imgs/ball.png");
	//����Բ�θ���
	PhysicsBody* ballBodyOne = PhysicsBody::createCircle(this->getContentSize().width / 2, PHYSICSBODY_MATERIAL_DEFAULT);
    //����Ħ����
	ballBodyOne->getShape(0)->setFriction(0);
	ballBodyOne->getShape(0)->setRestitution(1.0f);
	//������
	ballBodyOne->setGravityEnable(false);
	//�ٶ�����
	ballBodyOne->setVelocityLimit(650);

	ballBodyOne->setCategoryBitmask(0x0001);
	ballBodyOne->setCollisionBitmask(0x0001);
	ballBodyOne->setContactTestBitmask(0x0001);

	setPhysicsBody(ballBodyOne);
	this->setScale(0.7);

	return true;
}