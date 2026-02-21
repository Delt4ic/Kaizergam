#pragma once
#include "../../SDK/SDK.h"
#include "../Backtrack/Backtrack.h"

class CWarpPrediction
{
private:
	bool DetectWarping(int iIndex, const std::vector<TickRecord*>& vRecords);

	std::unordered_map<int, bool> m_mIsWarping = {};

public:
	void Initialize();
	void Update();
	bool PredictWarpPosition(int iIndex, Vec3& vPredictedPos);
	bool IsWarping(int iIndex);
};

ADD_FEATURE(CWarpPrediction, WarpPrediction);
