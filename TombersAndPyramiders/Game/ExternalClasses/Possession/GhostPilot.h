#pragma once

#include "BasePilot.h"
#include "BasePossessableController.h"

class Vector2;

class GhostPilot : public BasePilot
{
private:
	BaseController* m_ghostController;
	std::shared_ptr<BasePossessableController> m_possessableController;
	bool m_possessing;
	
public:
	/** Default constructor. */
	explicit GhostPilot() = default;

public:

public:
	void onStart();

	void onUpdate(int ticks);

	void onEnd();

private:
	Vector2 getMovement();
};