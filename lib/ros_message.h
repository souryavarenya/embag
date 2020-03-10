#pragma once

#include <string>

#include "ros_value.h"

class RosMessage {
 public:
  std::string topic;
  RosValue::ros_time_t timestamp;
  std::unique_ptr<RosValue> value;

};