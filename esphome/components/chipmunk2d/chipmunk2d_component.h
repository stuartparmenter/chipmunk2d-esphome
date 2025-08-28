// esphome/components/chipmunk2d/chipmunk2d_component.h
#pragma once
#include "esphome/core/component.h"

namespace esphome {
namespace chipmunk2d {

class Chipmunk2DComponent : public esphome::Component {
 public:
  void setup() override;
  void loop() override {};
};

}  // namespace chipmunk2d
}  // namespace esphome

