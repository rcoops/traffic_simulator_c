#pragma once
#include "stdafx.h"
#include <windows.h>
#include "raaAnimatedComponent.h"

class rpcCarVeryon : public raaAnimatedComponent
{
public:
	rpcCarVeryon(rpcContextAwareAnimationPath* pAP);

	virtual ~rpcCarVeryon();
protected:
	virtual osg::Node* makeBaseGeometry() override;
};