#ifndef _UMLFORMALPARAMETER_H
#define _UMLFORMALPARAMETER_H


#include "UmlBaseFormalParameter.h"

class File;

// This class manages 'formal parameters' of a template class. For instance 'T' in
//
//	template class Cl<class T> ...
//
// You can modify it as you want (except the constructor)
class UmlFormalParameter : public UmlBaseFormalParameter
{
public:
    UmlFormalParameter() {};

    void import(File & f, bool scanning);

};

#endif
