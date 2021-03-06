// *************************************************************************
//
// Copyright 2004-2010 Bruno PAGES  .
// Copyright 2012-2013 Nikolai Marchenko.
// Copyright 2012-2013 Leonardo Guilherme.
//
// This file is part of the DOUML Uml Toolkit.
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License Version 3.0 as published by
// the Free Software Foundation and appearing in the file LICENSE.GPL included in the
//  packaging of this file.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License Version 3.0 for more details.
//
// You should have received a copy of the GNU General Public License
// along with this program; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
//
// e-mail : doumleditor@gmail.com
// home   : http://sourceforge.net/projects/douml
//
// *************************************************************************

#ifndef UMLITEM_H
#define UMLITEM_H

#include "UmlBaseItem.h"
//Added by qt3to4:
#include "misc/mystr.h"
#include <QTextStream>

class QTextStream;
class UmlPackage;

class UmlItem : public UmlBaseItem
{
public:
    UmlItem(void * id, const WrapperStr & n)
        : UmlBaseItem(id, n) {
    };
    virtual ~UmlItem();

    virtual void generate();
    virtual UmlPackage * package();
    void manage_comment(const char *& p, const char *& pp);
    void manage_description(const char *& p, const char *& pp);
    void manage_docstring(const char *& p, const char *& pp, BooL & indent_needed,
                          WrapperStr & indent, WrapperStr & saved_indent);
    void manage_alias(const char *& p, QTextStream & ts,
                      WrapperStr indent, BooL & indent_needed);
};

#endif
