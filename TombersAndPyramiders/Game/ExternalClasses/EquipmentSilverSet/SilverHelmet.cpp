/*===================================================================================*//**
	SilverHelmet
	
	A weak silver helmet.

    @author Erick Fernandez de Arteaga
	
*//*====================================================================================*/

/*========================================================================================
	Dependencies
========================================================================================*/
#include "SilverHelmet.h"

/*----------------------------------------------------------------------------------------
	Class Fields
----------------------------------------------------------------------------------------*/
const float SilverHelmet::SILVER_HELMET_CRITICAL_RESIST_CHANCE = 0.2f;

/*----------------------------------------------------------------------------------------
	Resource Management
----------------------------------------------------------------------------------------*/
SilverHelmet::SilverHelmet() :
	BaseHelmet{ SILVER_HELMET_CRITICAL_RESIST_CHANCE }
{
	m_itemIcon = "AddMeLater.png";
}
