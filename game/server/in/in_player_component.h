//==== Woots 2016. http://creativecommons.org/licenses/by/2.5/mx/ ===========//

#ifndef IN_PLAYER_COMPONENT_H
#define IN_PLAYER_COMPONENT_H

#ifdef _WIN32
#pragma once
#endif

#include "in_player.h"
#include "in_shareddefs.h"

#define DECLARE_COMPONENT( id ) virtual int GetID() { return id; }

//====================================================================
// Base para la creaci�n de componentes
//====================================================================
class CPlayerComponent : public CPlayerInfo
{
public:
	DECLARE_CLASS_GAMEROOT( CPlayerComponent, CPlayerInfo );
    DECLARE_COMPONENT( PLAYER_COMPONENT_INVALID );

    CPlayerComponent();
    CPlayerComponent( CBasePlayer *pParent );

    virtual CPlayer *GetPlayer() { return ToInPlayer(m_pParent); }
    virtual void Init() { }
    virtual void Update() { }
};

#endif // IN_PLAYER_COMPONENT_H