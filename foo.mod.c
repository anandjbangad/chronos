#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
 .name = KBUILD_MODNAME,
 .init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
 .exit = cleanup_module,
#endif
 .arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0xcf172cc1, "module_layout" },
	{ 0x4d7272e4, "migrate_enable" },
	{ 0x4c4fef19, "kernel_stack" },
	{ 0xaffba893, "single_open" },
	{ 0x73afeef1, "single_release" },
	{ 0x94c2a113, "malloc_sizes" },
	{ 0x864365bb, "rt_write_lock" },
	{ 0xbe3bc6aa, "__rt_mutex_init" },
	{ 0x40506e27, "seq_printf" },
	{ 0x9156b481, "rt_read_unlock" },
	{ 0x8587c7dc, "__rt_rwlock_init" },
	{ 0x7fdaa21, "remove_local_scheduler" },
	{ 0xafe82e10, "strcspn" },
	{ 0xec9c09c0, "rt_read_lock" },
	{ 0x520a01a3, "seq_read" },
	{ 0x565eb281, "current_task" },
	{ 0x27e1a049, "printk" },
	{ 0x71545ef5, "add_local_scheduler" },
	{ 0xb4390f9a, "mcount" },
	{ 0x89ff43f6, "init_uts_ns" },
	{ 0x49608959, "migrate_disable" },
	{ 0x19995310, "rt_write_unlock" },
	{ 0x1000e51, "schedule" },
	{ 0x767165a0, "kmem_cache_alloc_trace" },
	{ 0x3dcee025, "proc_create_data" },
	{ 0xf7cf06bb, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8166ED22A91FE506BD90140");
