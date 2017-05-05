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
	{ 0xb70317a1, "module_layout" },
	{ 0xda1ad3e1, "rt_sched_arch_concurrent" },
	{ 0x6b97db23, "presched_concurrent_generic" },
	{ 0x1050f52d, "remove_global_scheduler" },
	{ 0xc0cd6829, "add_global_scheduler" },
	{ 0xf64b884, "_remove_task_global" },
	{ 0xa80156aa, "task_pullable" },
	{ 0x47c7b0d2, "cpu_number" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "90C8412E19F871758E73C79");
