// stdafx.h: 标准系统包含文件的包含文件，
// 或是经常使用但不常更改的
// 项目特定的包含文件
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // 从 Windows 头文件中排除极少使用的内容
// Windows 头文件
#include <windows.h>

#ifdef _USRDLL
#define DLL_EXPORT _declspec(dllexport)
#else
#define DLL_EXPORT _declspec(dllimport)
#endif

// 在此处引用程序需要的其他标头
#define _USE_MATH_DEFINES
#include <math.h>

#include "rl/math/Transform.h"
#include "rl/math/Matrix.h"
#include "rl/math/Vector.h"
#include <rl/plan/SimpleModel.h>
#include <rl/plan/SimpleOptimizer.h>
#include <rl/plan/Optimizer.h>
#include <rl/plan/Planner.h>
#include <rl/plan/Verifier.h>
#include <rl/plan/UniformSampler.h>
#include <rl/kin/Kinematics.h>
#include <rl/mdl/Dynamic.h>
#include <rl/mdl/NloptInverseKinematics.h>
#include <rl/mdl/JacobianInverseKinematics.h>

#include <map>
#include <vector>
#include <algorithm>