#pragma once

#include <string>
#include "GameObject.h"
#include "Transform.h"
#include <iostream>

//Senders transform message and extra commands

class Sender : public Component
{
private:
	int m_id;
	int m_lastUpdate = 0;

public:
	Sender(GameObject* gameObject, int ID);
	void sendCreate();
	void sendDestroy();
	void sendUpdate();
	void sendAttack();
	void sendAnimation (int animID, int animReturn = -1);
	void sendSwappedItem ();
	void sendTrySwapItem ();
	void sendTrigger();
	void sendNetworkMessage(std::string messageKey, std::map<std::string, std::string> payload, bool useTCP = true);
	void spawnPlayers(float p1x, float p1y, float p2x, float p2y);
	void onStart() {};
	void onUpdate(int ticks);
	void onEnd() {};
	~Sender();
};