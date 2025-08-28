// esphome/components/chipmunk2d/chipmunk2d_component.cpp
#include "chipmunk2d_component.h"
#include "esphome/core/log.h"
#include "esp_timer.h"
#include "esp_heap_caps.h"

#include <chipmunk/chipmunk.h>

namespace esphome {
namespace chipmunk2d {
static const char *const TAG = "chipmunk2d";

void Chipmunk2DComponent::setup() {
  ESP_LOGI(TAG, "Chipmunk2D ready sizeof(cpFloat)=%d sizeof(cpVect)=%d",
           (int)sizeof(cpFloat), (int)sizeof(cpVect));
  ESP_LOGI(TAG, "heap 8bit_free=%uB, largest_8bit=%uB",
          (unsigned)heap_caps_get_free_size(MALLOC_CAP_8BIT),
          (unsigned)heap_caps_get_largest_free_block(MALLOC_CAP_8BIT));
}

}  // namespace chipmunk2d
}  // namespace esphome
