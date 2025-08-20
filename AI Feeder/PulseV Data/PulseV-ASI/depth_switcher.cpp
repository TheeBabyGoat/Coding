
// Include order: imgui.h first, then reshade.hpp (lets ReShade own ImGui symbols)
#include <imgui.h>
#include <reshade.hpp>
#include <vector>
#include <shared_mutex>
#include <unordered_map>
#include <cmath> // std::abs, std::modf
#include <cstring> // std::strcmp
#include <algorithm> // std::find_if, std::remove, std::sort
#include <Unknwn.h>


using namespace reshade::api;

// ---- paste all your state/types/helpers here ----
// e.g. s_mutex, enums, structs (generic_depth_device_data, etc.),
// the many on_* callback functions you posted earlier (on_init_device, on_draw, ...)

// ---- public entry points (ONE definition in the entire project) ----

void register_depth_switcher()
{
	reshade::register_event<reshade::addon_event::init_device>(on_init_device);
	reshade::register_event<reshade::addon_event::init_command_list>(on_init_command_list);
	reshade::register_event<reshade::addon_event::init_command_queue>(on_init_command_queue);
	reshade::register_event<reshade::addon_event::init_effect_runtime>(on_init_effect_runtime);
	reshade::register_event<reshade::addon_event::destroy_device>(on_destroy_device);
	reshade::register_event<reshade::addon_event::destroy_command_list>(on_destroy_command_list);
	reshade::register_event<reshade::addon_event::destroy_command_queue>(on_destroy_command_queue);
	reshade::register_event<reshade::addon_event::destroy_effect_runtime>(on_destroy_effect_runtime);

	reshade::register_event<reshade::addon_event::create_resource>(on_create_resource);
	reshade::register_event<reshade::addon_event::create_resource_view>(on_create_resource_view);
	reshade::register_event<reshade::addon_event::destroy_resource>(on_destroy_resource);

	reshade::register_event<reshade::addon_event::draw>(on_draw);
	reshade::register_event<reshade::addon_event::draw_indexed>(on_draw_indexed);
	reshade::register_event<reshade::addon_event::draw_or_dispatch_indirect>(on_draw_indirect);
	reshade::register_event<reshade::addon_event::bind_viewports>(on_bind_viewport);
	reshade::register_event<reshade::addon_event::begin_render_pass>(on_begin_render_pass_with_depth_stencil);
	reshade::register_event<reshade::addon_event::bind_render_targets_and_depth_stencil>(on_bind_depth_stencil);
	reshade::register_event<reshade::addon_event::clear_depth_stencil_view>(on_clear_depth_stencil);

	reshade::register_event<reshade::addon_event::reset_command_list>(on_reset);
	reshade::register_event<reshade::addon_event::execute_command_list>(on_execute_primary);
	reshade::register_event<reshade::addon_event::execute_secondary_command_list>(on_execute_secondary);

	reshade::register_event<reshade::addon_event::present>(on_present);

	reshade::register_event<reshade::addon_event::reshade_begin_effects>(on_begin_render_effects);
	reshade::register_event<reshade::addon_event::reshade_finish_effects>(on_finish_render_effects);
	// Need to set texture binding again after reloading
	reshade::register_event<reshade::addon_event::reshade_reloaded_effects>(update_effect_runtime);
}

void unregister_depth_switcher()
{
	reshade::unregister_event<reshade::addon_event::init_device>(on_init_device);
	reshade::unregister_event<reshade::addon_event::init_command_list>(on_init_command_list);
	reshade::unregister_event<reshade::addon_event::init_command_queue>(on_init_command_queue);
	reshade::unregister_event<reshade::addon_event::init_effect_runtime>(on_init_effect_runtime);
	reshade::unregister_event<reshade::addon_event::destroy_device>(on_destroy_device);
	reshade::unregister_event<reshade::addon_event::destroy_command_list>(on_destroy_command_list);
	reshade::unregister_event<reshade::addon_event::destroy_command_queue>(on_destroy_command_queue);
	reshade::unregister_event<reshade::addon_event::destroy_effect_runtime>(on_destroy_effect_runtime);

	reshade::unregister_event<reshade::addon_event::create_resource>(on_create_resource);
	reshade::unregister_event<reshade::addon_event::create_resource_view>(on_create_resource_view);
	reshade::unregister_event<reshade::addon_event::destroy_resource>(on_destroy_resource);

	reshade::unregister_event<reshade::addon_event::draw>(on_draw);
	reshade::unregister_event<reshade::addon_event::draw_indexed>(on_draw_indexed);
	reshade::unregister_event<reshade::addon_event::draw_or_dispatch_indirect>(on_draw_indirect);
	reshade::unregister_event<reshade::addon_event::bind_viewports>(on_bind_viewport);
	reshade::unregister_event<reshade::addon_event::begin_render_pass>(on_begin_render_pass_with_depth_stencil);
	reshade::unregister_event<reshade::addon_event::bind_render_targets_and_depth_stencil>(on_bind_depth_stencil);
	reshade::unregister_event<reshade::addon_event::clear_depth_stencil_view>(on_clear_depth_stencil);

	reshade::unregister_event<reshade::addon_event::reset_command_list>(on_reset);
	reshade::unregister_event<reshade::addon_event::execute_command_list>(on_execute_primary);
	reshade::unregister_event<reshade::addon_event::execute_secondary_command_list>(on_execute_secondary);

	reshade::unregister_event<reshade::addon_event::present>(on_present);

	reshade::unregister_event<reshade::addon_event::reshade_begin_effects>(on_begin_render_effects);
	reshade::unregister_event<reshade::addon_event::reshade_finish_effects>(on_finish_render_effects);
	reshade::unregister_event<reshade::addon_event::reshade_reloaded_effects>(update_effect_runtime);
}
