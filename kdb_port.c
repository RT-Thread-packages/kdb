/*
 * Copyright (c) 2006-2020, RT-Thread Development Team
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2020-06-09     tyx          first version.
 */

#include <rtthread.h>
#include "kdb_core.h"
#include "kdb_type.h"

void kdb_output(char *buf, int len)
{
    rt_kprintf("%s", buf);
}
