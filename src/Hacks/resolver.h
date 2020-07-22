#pragma once

#include "../SDK/IGameEvent.h"
#include "../SDK/definitions.h"
#include <cstdint>
#include <vector>

#include "../Utils/entity.h"
#include "../Utils/math.h"
#include "../Utils/xorstring.h"
#include "../interfaces.h"
#include "../settings.h"
#include "antiaim.h"
#include "ragebot.h"

namespace Resolver
{

    struct resolvedPlayers
    {
        int PrevTrueDelta = 0;
        int MissedCount = 0;
    };

    inline resolvedPlayers players[100];
    inline int TargetID = 0;
    extern std::vector<int64_t> Players;

    //Hooks
    void FrameStageNotify(ClientFrameStage_t stage); // This is where the resolver happens.
    void FireGameEvent(IGameEvent *event);			 // Strangely, I never see this getting called.
    void CreateMove(CUserCmd* cmd);

} 
