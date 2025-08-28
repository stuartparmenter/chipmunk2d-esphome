# esphome/components/chipmunk2d/__init__.py
import esphome.codegen as cg
import esphome.config_validation as cv
from esphome.const import CONF_ID

chipmunk2d_ns = cg.esphome_ns.namespace("chipmunk2d")
Chipmunk2DComponent = chipmunk2d_ns.class_("Chipmunk2DComponent", cg.Component)

CONFIG_SCHEMA = cv.Schema({
    cv.GenerateID(): cv.declare_id(Chipmunk2DComponent)
}).extend(cv.COMPONENT_SCHEMA)

async def to_code(config):
    var = cg.new_Pvariable(config[CONF_ID])
    await cg.register_component(var, config)

    cg.add_build_flag("-DNDEBUG=1")
    cg.add_build_flag("-DCP_USE_DOUBLES=0")
    cg.add_build_flag("-DCP_BUFFER_BYTES=8192")             # default is larger; 8KB is fine for a tiny scene
    cg.add_build_flag("-DCP_MAX_ARBITERS_PER_SPACE=256")    # optional cap for tiny worlds

    cg.add_library("https://github.com/stuartparmenter/chipmunk2d-platformio", None)
