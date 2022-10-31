// Copyright (c) 2022 PAL Robotics S.L. All rights reserved.
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

#ifndef PLAY_MOTION2__PLAY_MOTION2_HPP_
#define PLAY_MOTION2__PLAY_MOTION2_HPP_

#include <map>
#include <memory>
#include <string>
#include <vector>

#include "play_motion2/play_motion2_helpers.hpp"
#include "rclcpp/node.hpp"

namespace play_motion2
{

class PlayMotion2 : public rclcpp::Node
{
public:
  PlayMotion2();
  void init();

private:
  MotionKeys motion_keys_;
  std::map<std::string, MotionInfo> motions_;
};
}  // namespace play_motion2

#endif  // PLAY_MOTION2__PLAY_MOTION2_HPP_
