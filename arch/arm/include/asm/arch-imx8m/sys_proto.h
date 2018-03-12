/*
 * Copyright (C) 2017 NXP
 *
 * SPDX-License-Identifier:	GPL-2.0+
 */

#include <asm/imx-common/sys_proto.h>

void set_wdog_reset(struct wdog_regs *wdog);
void enable_tzc380(void);
void restore_boot_params(void);
extern unsigned long rom_pointer[];
