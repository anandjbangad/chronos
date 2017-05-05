cmd_chronos/foo.ko := ld -r -m elf_x86_64 -T /home/ubuntu/chronos/linux-3.0.24-chronos/scripts/module-common.lds --build-id  -o chronos/foo.ko chronos/foo.o chronos/foo.mod.o
