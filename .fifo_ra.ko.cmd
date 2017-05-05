cmd_chronos/fifo_ra.ko := ld -r -m elf_x86_64 -T /home/ubuntu/chronos/linux-3.0.24-chronos/scripts/module-common.lds --build-id  -o chronos/fifo_ra.ko chronos/fifo_ra.o chronos/fifo_ra.mod.o
