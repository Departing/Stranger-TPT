#ifndef TOOLCLASSES_H
#define TOOLCLASSES_H

#include <vector>

#include "simulation/simtools/SimTool.h"

#define TOOL_COOL 1
#define TOOL_AIR 2
#define TOOL_MIX 6
#define TOOL_VAC 3
#define TOOL_PGRV 4
#define TOOL_NGRV 5
#define TOOL_CYCL 7
#define TOOL_HEAT 0

class Tool_Air: public SimTool
{
public:
	Tool_Air();
	virtual ~Tool_Air();
	int Perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength) override;
};

class Tool_Vac: public SimTool
{
public:
	Tool_Vac();
	virtual ~Tool_Vac();
	int Perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength) override;
};

class Tool_Cycl: public SimTool
{
public:
	Tool_Cycl();
	virtual ~Tool_Cycl();
	int Perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength) override;
};

class Tool_Mix: public SimTool
{
public:
	Tool_Mix();
	virtual ~Tool_Mix();
	int Perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength) override;
};

class Tool_NGrv: public SimTool
{
public:
	Tool_NGrv();
	virtual ~Tool_NGrv();
	int Perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength) override;
};

class Tool_PGrv: public SimTool
{
public:
	Tool_PGrv();
	virtual ~Tool_PGrv();
	int Perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength) override;
};

class Tool_Heat: public SimTool
{
public:
	Tool_Heat();
	virtual ~Tool_Heat();
	int Perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength) override;
};

class Tool_Cool: public SimTool
{
public:
	Tool_Cool();
	virtual ~Tool_Cool();
	int Perform(Simulation * sim, Particle * cpart, int x, int y, int brushX, int brushY, float strength) override;
};

std::vector<SimTool*> GetTools();

#endif
