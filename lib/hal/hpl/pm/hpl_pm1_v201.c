/**
 * \file
 *
 * \brief SAM Power manager
 *
 * Copyright (C) 2014-2015 Atmel Corporation. All rights reserved.
 *
 * \asf_license_start
 *
 * \page License
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. The name of Atmel may not be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * 4. This software may only be redistributed and used in connection with an
 *    Atmel microcontroller product.
 *
 * THIS SOFTWARE IS PROVIDED BY ATMEL "AS IS" AND ANY EXPRESS OR IMPLIED
 * WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF
 * MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NON-INFRINGEMENT ARE
 * EXPRESSLY AND SPECIFICALLY DISCLAIMED. IN NO EVENT SHALL ATMEL BE LIABLE FOR
 * ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * \asf_license_stop
 *
 */

#include <utils_assert.h>
#include <hpl_pm1_v201_base.h>
#include <hpl_sleep.h>
#include <hpl_reset.h>
#include <hpl_pm1_v201_config.h>

#ifndef _UNIT_TEST_
# include <hri_pm_v201.h>
#else
# include <hri_pm_v201_mock.h>
#endif

static int32_t _pm_get_ahb_index(const void *const module)
{
	if ((uint32_t)module == (uint32_t)PM_BUS_APBA) {
		return 0;
	}
	else if ((uint32_t)module == (uint32_t)PM_BUS_APBB) {
		return 1;
	}
	else if ((uint32_t)module == (uint32_t)PM_BUS_APBC) {
		return 2;
	}
	if ((uint32_t)module == (uint32_t)DSU) {
		return 3;
	}
	else if ((uint32_t)module == (uint32_t)NVMCTRL) {
		return 4;
	}
	else if ((uint32_t)module == (uint32_t)DMAC) {
		return 5;
	}
	else if ((uint32_t)module == (uint32_t)USB) {
		return 6;
	}

	return ERR_INVALID_ARG;
}

static int32_t _pm_get_apbb_index(const void *const module)
{
	if ((uint32_t)module == (uint32_t)PAC1) {
		return 0;
	}
	else if ((uint32_t)module == (uint32_t)DSU) {
		return 1;
	}
	else if ((uint32_t)module == (uint32_t)NVMCTRL) {
		return 2;
	}
	if ((uint32_t)module == (uint32_t)PORT) {
		return 3;
	}
	else if ((uint32_t)module == (uint32_t)DMAC) {
		return 4;
	}
	else if ((uint32_t)module == (uint32_t)USB) {
		return 5;
	}

	return ERR_INVALID_ARG;
}

#include <hpl_pm1_v201_base.inc>
