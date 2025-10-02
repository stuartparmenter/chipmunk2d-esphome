// esphome/components/chipmunk2d/chipmunk2d_component.h
#pragma once
#include "esphome/core/component.h"

namespace esphome {
namespace chipmunk2d {

class Chipmunk2DComponent : public esphome::Component {
 public:
  float get_setup_priority() const override { return setup_priority::PROCESSOR; }
};

}  // namespace chipmunk2d
}  // namespace esphome
