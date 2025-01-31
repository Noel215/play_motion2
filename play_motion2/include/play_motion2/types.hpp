// Copyright (c) 2023 PAL Robotics S.L. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef PLAY_MOTION2__TYPES_HPP_
#define PLAY_MOTION2__TYPES_HPP_

#include <map>
#include <string>
#include <vector>

namespace play_motion2
{

using MotionKeys = std::vector<std::string>;
using MotionJoints = std::vector<std::string>;
using MotionPositions = std::vector<double>;
using MotionTimes = std::vector<double>;

struct MotionInfo
{
  // meta
  std::string name;
  std::string usage;
  std::string description;

  // info
  MotionJoints joints;
  MotionPositions positions;
  MotionTimes times;
};

using MotionsMap = std::map<std::string, MotionInfo>;

}  // namespace play_motion2

#endif  // PLAY_MOTION2__TYPES_HPP_
