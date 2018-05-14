#pragma once
#include "stdafx.h"
#include <windows.h>
#include "raaAnimatedComponent.h"

class rpcCarDelta : public raaAnimatedComponent
{
public:
	rpcCarDelta(rpcContextAwareAnimationPath* pAP);

	virtual ~rpcCarDelta();
protected:
	const static float csm_fSlowMultiplier;
	const static float csm_fFastMultiplier;
	const static float csm_fCruisingMultiplier;

	osg::Material *m_pBodyMat;
	osg::Node* m_pGeometry;

	void goFast() override;
	void goSlow() override;
	void goCruising() override;

	osg::Node* makeBaseGeometry() override;
	void paintGeode(osg::Material* pMat, osg::Geode* pGeode);
	osg::Geode* getGeode(std::string psNodeName);
	void materialBuilder(osg::Material* pMat, osg::Vec3f vMat);
};