//Added by qt3to4:
#include <QTextStream>
// *************************************************************************
//
// Copyright 2004-2010 Bruno PAGES  .
//
// This file is part of the BOUML Uml Toolkit.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
//
// e-mail : bouml@free.fr
// home   : http://bouml.free.fr
//
// *************************************************************************

#ifndef _UMLACTUALPARAMETER_H
#define _UMLACTUALPARAMETER_H

class QTextStream;


#include "UmlBaseActualParameter.h"

// This class manages 'actual parameters' of a template class. For instance T in
//
//	class Cl1 : public Cl2<T> ...
//
// You can modify it as you want (except the constructor)
class UmlActualParameter : public UmlBaseActualParameter {
  public:
    UmlActualParameter() {};

    bool generate(QTextStream & f_h, BooL & need_space) const;

};

#endif
