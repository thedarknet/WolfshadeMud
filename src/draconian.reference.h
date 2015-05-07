//////////////////////////////////////////////////////////////
//Wolfshade MUD server
//Copyright (C) 1999 Demetrius and John Comes
//
//This program is free software; you can redistribute it and/or
//modify it under the terms of the GNU General Public License
//as published by the Free Software Foundation; either version 2
//of the License, or (at your option) any later version.
//
//This program is distributed in the hope that it will be useful,
//but WITHOUT ANY WARRANTY; without even the implied warranty of
//MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//GNU General Public License for more details.
//
//You should have received a copy of the GNU General Public License
//along with this program; if not, write to the Free Software
//Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
//////////////////////////////////////////////////////////////
/*
*
*	DraconianReferences
*
*
*/

#ifndef _DRACONIAN_REFERENCES_H_
#define _DRACONIAN_REFERENCES_H_

#include "racial.reference.h"

class CDraconianReference : public CRacialReference
{
private:
	CString m_strInnates;
public:
	virtual CString GetInnates()  const {return m_strInnates;}
	CDraconianReference();
	virtual void SetStrength();
	virtual void SetDexterity();
	virtual void SetAgility();
	virtual void SetConstitution();
	virtual void SetPower();
	virtual void SetInnateRace();
	virtual void SetWisdom();
	virtual void SetIntellegence();
	virtual void SetCharisma();
	virtual ~CDraconianReference();
};
#endif