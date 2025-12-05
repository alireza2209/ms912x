#include <linux/module.h>
#include <linux/export-internal.h>
#include <linux/compiler.h>

MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x88f49c8d, "drm_kms_helper_poll_fini" },
	{ 0xbe102709, "drm_open" },
	{ 0x6b720f69, "drm_mode_vrefresh" },
	{ 0xf38ae2ed, "drm_poll" },
	{ 0xc88063d1, "drm_gem_fb_end_cpu_access" },
	{ 0x4efe73ad, "drm_dev_enter" },
	{ 0x57860fb4, "wait_for_completion_timeout" },
	{ 0x88f49c8d, "drm_kms_helper_poll_init" },
	{ 0xd710adbf, "__kmalloc_noprof" },
	{ 0xdd4609fe, "drm_plane_enable_fb_damage_clips" },
	{ 0xe354cd9c, "vmalloc_to_page" },
	{ 0x65026e43, "complete" },
	{ 0x49733ad6, "queue_work_on" },
	{ 0x2b7acf7b, "drm_mode_probed_add" },
	{ 0xfacf96c7, "drm_gem_shmem_dumb_create" },
	{ 0x3c67bf68, "drm_fbdev_ttm_driver_fbdev_probe" },
	{ 0xd648ae19, "sg_free_table" },
	{ 0x60c9c0b3, "__init_swait_queue_head" },
	{ 0xf12e1afc, "drm_atomic_helper_shutdown" },
	{ 0x5eb30ee8, "usb_register_driver" },
	{ 0x47bc807c, "usb_sg_init" },
	{ 0x59c5f726, "drm_edid_free" },
	{ 0xacac6336, "memcpy_fromio" },
	{ 0xe904392d, "drm_gem_simple_kms_begin_shadow_fb_access" },
	{ 0xfbe7861b, "memcpy" },
	{ 0x8e142c2e, "kstrtouint" },
	{ 0xcb8b6ec6, "kfree" },
	{ 0x2352b148, "timer_delete_sync" },
	{ 0x2e4e8120, "drmm_mode_config_init" },
	{ 0xd7a59a65, "vmalloc_32_noprof" },
	{ 0xd272d446, "__fentry__" },
	{ 0x7fe08df8, "usb_sg_cancel" },
	{ 0xd7c44334, "drm_edid_connector_update" },
	{ 0xe8213e80, "_printk" },
	{ 0xbd03ed67, "__ref_stack_chk_guard" },
	{ 0xd272d446, "__stack_chk_fail" },
	{ 0x54e53746, "drm_atomic_helper_commit" },
	{ 0xcfb147ff, "put_device" },
	{ 0x52e8b243, "drm_atomic_helper_check" },
	{ 0xd659efb0, "drm_atomic_helper_connector_destroy_state" },
	{ 0x061acdbf, "drm_gem_mmap" },
	{ 0x808f8dc5, "drm_mode_create" },
	{ 0x6fdec3f2, "drm_ioctl" },
	{ 0x90a48d82, "__ubsan_handle_out_of_bounds" },
	{ 0x368b487f, "drm_gem_simple_kms_destroy_shadow_plane_state" },
	{ 0xf6db8551, "drm_dev_unplug" },
	{ 0x878b3bbb, "drm_connector_init" },
	{ 0x0cab0d19, "drm_mode_config_helper_suspend" },
	{ 0xcb91422b, "usb_intf_get_dma_device" },
	{ 0x20cb9b93, "drm_atomic_helper_damage_merged" },
	{ 0x32feeafc, "mod_timer" },
	{ 0x4e5977d3, "noop_llseek" },
	{ 0x8f0341a5, "drm_read" },
	{ 0x326d28c5, "drm_edid_connector_add_modes" },
	{ 0x30213e1e, "drm_gem_fb_create_with_dirty" },
	{ 0xbd03ed67, "random_kmalloc_seed" },
	{ 0xf46d5bf3, "mutex_lock" },
	{ 0x69d8ee1f, "usb_control_msg" },
	{ 0xb7a75ce4, "drm_edid_read_custom" },
	{ 0x894e7abe, "usb_deregister" },
	{ 0x2521d370, "drm_dev_exit" },
	{ 0x35613d59, "drm_mode_set_name" },
	{ 0x5c552167, "drm_client_setup" },
	{ 0xb7d51e0a, "sg_alloc_table_from_pages_segment" },
	{ 0x2aae9d76, "__devm_drm_dev_alloc" },
	{ 0x15debdc6, "_dev_warn" },
	{ 0xd272d446, "__x86_return_thunk" },
	{ 0x96177ffe, "drm_atomic_helper_connector_duplicate_state" },
	{ 0xe62db7e5, "drm_simple_display_pipe_init" },
	{ 0xaef1f20d, "system_long_wq" },
	{ 0x751a4dd6, "drm_connector_cleanup" },
	{ 0x058c185a, "jiffies" },
	{ 0xb9cc7ab2, "drm_gem_simple_kms_duplicate_shadow_plane_state" },
	{ 0xf1de9e85, "vfree" },
	{ 0xf46d5bf3, "mutex_unlock" },
	{ 0x05684ac6, "drm_gem_fb_begin_cpu_access" },
	{ 0x23f25c0a, "__dynamic_pr_debug" },
	{ 0x2f5b4fba, "__kmalloc_cache_noprof" },
	{ 0x2d88a3ab, "cancel_work_sync" },
	{ 0x0265d426, "drm_helper_probe_single_connector_modes" },
	{ 0xde3456a5, "drm_gem_prime_import_dev" },
	{ 0xdf4038b9, "drm_gem_simple_kms_reset_shadow_plane" },
	{ 0x02f9bbf0, "timer_init_key" },
	{ 0xc9cac6f6, "drm_atomic_helper_connector_reset" },
	{ 0xe98aa050, "drm_mode_config_reset" },
	{ 0xe4de56b4, "__ubsan_handle_load_invalid_value" },
	{ 0x7fe08df8, "usb_sg_wait" },
	{ 0x0cab0d19, "drm_mode_config_helper_resume" },
	{ 0x368b487f, "drm_gem_simple_kms_end_shadow_fb_access" },
	{ 0x6fdec3f2, "drm_compat_ioctl" },
	{ 0x7cde443a, "drm_dev_register" },
	{ 0x5aa5bde9, "kmalloc_caches" },
	{ 0xbe102709, "drm_release" },
	{ 0x984622ae, "module_layout" },
};

static const u32 ____version_ext_crcs[]
__used __section("__version_ext_crcs") = {
	0x88f49c8d,
	0xbe102709,
	0x6b720f69,
	0xf38ae2ed,
	0xc88063d1,
	0x4efe73ad,
	0x57860fb4,
	0x88f49c8d,
	0xd710adbf,
	0xdd4609fe,
	0xe354cd9c,
	0x65026e43,
	0x49733ad6,
	0x2b7acf7b,
	0xfacf96c7,
	0x3c67bf68,
	0xd648ae19,
	0x60c9c0b3,
	0xf12e1afc,
	0x5eb30ee8,
	0x47bc807c,
	0x59c5f726,
	0xacac6336,
	0xe904392d,
	0xfbe7861b,
	0x8e142c2e,
	0xcb8b6ec6,
	0x2352b148,
	0x2e4e8120,
	0xd7a59a65,
	0xd272d446,
	0x7fe08df8,
	0xd7c44334,
	0xe8213e80,
	0xbd03ed67,
	0xd272d446,
	0x54e53746,
	0xcfb147ff,
	0x52e8b243,
	0xd659efb0,
	0x061acdbf,
	0x808f8dc5,
	0x6fdec3f2,
	0x90a48d82,
	0x368b487f,
	0xf6db8551,
	0x878b3bbb,
	0x0cab0d19,
	0xcb91422b,
	0x20cb9b93,
	0x32feeafc,
	0x4e5977d3,
	0x8f0341a5,
	0x326d28c5,
	0x30213e1e,
	0xbd03ed67,
	0xf46d5bf3,
	0x69d8ee1f,
	0xb7a75ce4,
	0x894e7abe,
	0x2521d370,
	0x35613d59,
	0x5c552167,
	0xb7d51e0a,
	0x2aae9d76,
	0x15debdc6,
	0xd272d446,
	0x96177ffe,
	0xe62db7e5,
	0xaef1f20d,
	0x751a4dd6,
	0x058c185a,
	0xb9cc7ab2,
	0xf1de9e85,
	0xf46d5bf3,
	0x05684ac6,
	0x23f25c0a,
	0x2f5b4fba,
	0x2d88a3ab,
	0x0265d426,
	0xde3456a5,
	0xdf4038b9,
	0x02f9bbf0,
	0xc9cac6f6,
	0xe98aa050,
	0xe4de56b4,
	0x7fe08df8,
	0x0cab0d19,
	0x368b487f,
	0x6fdec3f2,
	0x7cde443a,
	0x5aa5bde9,
	0xbe102709,
	0x984622ae,
};
static const char ____version_ext_names[]
__used __section("__version_ext_names") =
	"drm_kms_helper_poll_fini\0"
	"drm_open\0"
	"drm_mode_vrefresh\0"
	"drm_poll\0"
	"drm_gem_fb_end_cpu_access\0"
	"drm_dev_enter\0"
	"wait_for_completion_timeout\0"
	"drm_kms_helper_poll_init\0"
	"__kmalloc_noprof\0"
	"drm_plane_enable_fb_damage_clips\0"
	"vmalloc_to_page\0"
	"complete\0"
	"queue_work_on\0"
	"drm_mode_probed_add\0"
	"drm_gem_shmem_dumb_create\0"
	"drm_fbdev_ttm_driver_fbdev_probe\0"
	"sg_free_table\0"
	"__init_swait_queue_head\0"
	"drm_atomic_helper_shutdown\0"
	"usb_register_driver\0"
	"usb_sg_init\0"
	"drm_edid_free\0"
	"memcpy_fromio\0"
	"drm_gem_simple_kms_begin_shadow_fb_access\0"
	"memcpy\0"
	"kstrtouint\0"
	"kfree\0"
	"timer_delete_sync\0"
	"drmm_mode_config_init\0"
	"vmalloc_32_noprof\0"
	"__fentry__\0"
	"usb_sg_cancel\0"
	"drm_edid_connector_update\0"
	"_printk\0"
	"__ref_stack_chk_guard\0"
	"__stack_chk_fail\0"
	"drm_atomic_helper_commit\0"
	"put_device\0"
	"drm_atomic_helper_check\0"
	"drm_atomic_helper_connector_destroy_state\0"
	"drm_gem_mmap\0"
	"drm_mode_create\0"
	"drm_ioctl\0"
	"__ubsan_handle_out_of_bounds\0"
	"drm_gem_simple_kms_destroy_shadow_plane_state\0"
	"drm_dev_unplug\0"
	"drm_connector_init\0"
	"drm_mode_config_helper_suspend\0"
	"usb_intf_get_dma_device\0"
	"drm_atomic_helper_damage_merged\0"
	"mod_timer\0"
	"noop_llseek\0"
	"drm_read\0"
	"drm_edid_connector_add_modes\0"
	"drm_gem_fb_create_with_dirty\0"
	"random_kmalloc_seed\0"
	"mutex_lock\0"
	"usb_control_msg\0"
	"drm_edid_read_custom\0"
	"usb_deregister\0"
	"drm_dev_exit\0"
	"drm_mode_set_name\0"
	"drm_client_setup\0"
	"sg_alloc_table_from_pages_segment\0"
	"__devm_drm_dev_alloc\0"
	"_dev_warn\0"
	"__x86_return_thunk\0"
	"drm_atomic_helper_connector_duplicate_state\0"
	"drm_simple_display_pipe_init\0"
	"system_long_wq\0"
	"drm_connector_cleanup\0"
	"jiffies\0"
	"drm_gem_simple_kms_duplicate_shadow_plane_state\0"
	"vfree\0"
	"mutex_unlock\0"
	"drm_gem_fb_begin_cpu_access\0"
	"__dynamic_pr_debug\0"
	"__kmalloc_cache_noprof\0"
	"cancel_work_sync\0"
	"drm_helper_probe_single_connector_modes\0"
	"drm_gem_prime_import_dev\0"
	"drm_gem_simple_kms_reset_shadow_plane\0"
	"timer_init_key\0"
	"drm_atomic_helper_connector_reset\0"
	"drm_mode_config_reset\0"
	"__ubsan_handle_load_invalid_value\0"
	"usb_sg_wait\0"
	"drm_mode_config_helper_resume\0"
	"drm_gem_simple_kms_end_shadow_fb_access\0"
	"drm_compat_ioctl\0"
	"drm_dev_register\0"
	"kmalloc_caches\0"
	"drm_release\0"
	"module_layout\0"
;

MODULE_INFO(depends, "drm_ttm_helper");

MODULE_ALIAS("usb:v534Dp6021d*dc*dsc*dp*icFFisc00ip00in*");
MODULE_ALIAS("usb:v534Dp0821d*dc*dsc*dp*icFFisc00ip00in*");
MODULE_ALIAS("usb:v345Fp9132d*dc*dsc*dp*icFFisc00ip00in*");

MODULE_INFO(srcversion, "A01D3E61E1689A9F9F277BA");
