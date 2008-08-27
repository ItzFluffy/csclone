/*
 * CloneWarrior.h
 *
 *  Created on: 16.08.2008
 *      Author: sa-bu
 */

#ifndef __CLONE_WARRIOR_H__
#define __CLONE_WARRIOR_H__

#include <OgrePlatform.h>
#include <ode/ode.h>

class Warrior
{
public:
	enum BodyPart {
		bpHead,			//������
		bpRightArm,		//������ ����������
		bpLeftArm,		//����� ����������
		bpRightWrist,	//������.... ���... ����� :)
		bpLeftWrist,	//
		bpChest,		//��������
		bpRightThign,	//������ �����
		bpLeftThign,	//����� �����
		bpRightCalf,	//������ ������
		bpLeftCalf,		//����� ������
		bpRightFoot,	//������ �����
		bpLeftFoot,		//����� �����

		bpNumParts		//���-�� ������
	};

protected:
	Ogre::uint32 mHealth;
	Ogre::uint32 mArmor;

	Ogre::uint32 mScore;
	Ogre::uint32 mDeath;

	dGeomID mGeoms[bpNumParts];

public:
	Warrior();
	~Warrior();
};

#endif
