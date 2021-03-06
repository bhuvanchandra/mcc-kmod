/*
 * Copyright 2013 Freescale Semiconductor
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
*/
#ifndef __MCC_CONFIG__
#define __MCC_CONFIG__

#ifdef __KERNEL__
#include <linux/types.h>
#include <linux/wait.h>
#include <linux/vf610_sema4.h>

/* semaphore number */
#define MCC_SHMEM_SEMAPHORE_NUMBER      (MVF_SHMEM_SEMAPHORE_NUMBER)
#endif

/* used OS */
#define MCC_OS_USED                    (MCC_LINUX)

/* base address of shared memory */
#define MCC_BASE_ADDRESS               (BSP_SHARED_RAM_START)

/* size (in bytes) and number of receive buffers */
#define MCC_ATTR_NUM_RECEIVE_BUFFERS   (10)
#define MCC_ATTR_BUFFER_SIZE_IN_BYTES  (1024)

/* maximum number of receive endpoints (application specific setting),
 * do not assign it to a value greater than 255 ! */
#define MCC_ATTR_MAX_RECEIVE_ENDPOINTS (10)


/* size of the signal queue */
#define MCC_MAX_OUTSTANDING_SIGNALS    (10)

/* number of cores */
#define MCC_NUM_CORES                  (2)

/* core number */
#define MCC_CORE_NUMBER                (0)

/* other cores, besides this participating in mcc */
#define MCC_OTHER_CORES			{1}

#endif /* __MCC_CONFIG__ */
