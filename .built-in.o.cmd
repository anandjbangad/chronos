cmd_chronos/built-in.o :=  ld -m elf_x86_64   -r -o chronos/built-in.o chronos/set_scheduler.o chronos/chronos_seg.o chronos/chronos_mutex.o chronos/chronos_proc.o 
