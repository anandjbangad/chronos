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
	{ 0x4302d0eb, "free_pages" },
	{ 0x6bc3fbc0, "__unregister_chrdev" },
	{ 0x27e1a049, "printk" },
	{ 0x72ab2636, "kernel_clear_task_aborting" },
	{ 0x671a7665, "kernel_set_task_aborting" },
	{ 0x93fca811, "__get_free_pages" },
	{ 0x8af228a, "__register_chrdev" },
	{ 0x76565a86, "pid_max" },
	{ 0x90862ce2, "remap_pfn_range" },
	{ 0xe52947e7, "__phys_addr" },
	{ 0xb4390f9a, "mcount" },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "7BD9138962F6310B3F0062B");
