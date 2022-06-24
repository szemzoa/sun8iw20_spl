#ifndef _CONFIG_H_
#define _CONFIG_H_
#include<sun8iw20p1.h>
#define CFG_ARCH_ARM 1
#define CFG_BOOT0_RUN_ADDR 0x20000
#define CFG_FES1_RUN_ADDR 0x28000
#define CFG_SBOOT_RUN_ADDR 0x20480
#define CFG_SUNXI_GPIO_V2 1
#define CFG_SUNXI_MEMOP 1
#define CFG_SUNXI_SDMMC 1
#define CFG_SYS_INIT_RAM_SIZE 0x10000
#define CFG_USE_DCACHE 1
#define CFG_USE_MAEE 1
#define PLATFORM_LIBGCC -L /usr/lib/gcc/arm-none-eabi/8.3.1 -l:libgcc.a
#endif
