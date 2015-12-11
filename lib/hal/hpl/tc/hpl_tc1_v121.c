/* Auto-generated source file hpl_tc1_v121.c */
/**
 * \file
 *
 * \brief SAM TC
 *
 * Copyright (C) 2015 Atmel Corporation. All rights reserved.
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
#include <hpl_tc1_v112_base.h>
#include <hpl_tc1_v121_config.h>
#include <hpl_timer.h>
#include <hpl_pwm.h>
#include <hpl_irq.h>
#ifndef _UNIT_TEST_
# include <hri_tc1_v121.h>
#else
# include <hri_tc_v121_mock.h>
#endif

#ifndef CONF_TC3_ENABLE
# define CONF_TC3_ENABLE 0
#endif
#ifndef CONF_TC4_ENABLE
# define CONF_TC4_ENABLE 0
#endif
#ifndef CONF_TC5_ENABLE
# define CONF_TC5_ENABLE 0
#endif
#ifndef CONF_TC6_ENABLE
# define CONF_TC6_ENABLE 0
#endif
#ifndef CONF_TC7_ENABLE
# define CONF_TC7_ENABLE 0
#endif

/**
 * \brief TC IRQ base index
 */
#define TC_IRQ_BASE_INDEX 	((uint8_t)TC3_IRQn)

/**
 * \brief TC base address
 */
#define TC_HW_BASE_ADDR 	((uint32_t)TC3)

/**
 * \brief TC number offset
 */
#define TC_NUMBER_OFFSET TCC_INST_NUM

/**
 * \brief Macro is used to fill usart configuration structure based on its
 * number
 *
 * \param[in] n The number of structures
 */
#define TC_CONFIGURATION(n) \
	{(n), \
	TC_CTRLA_MODE(CONF_TC##n##_MODE) | \
	TC_CTRLA_WAVEGEN(TC_CTRLA_WAVEGEN_MPWM_Val) | \
	TC_CTRLA_PRESCALER(CONF_TC##n##_PRESCALER) | \
	(CONF_TC##n##_RUNSTDBY << TC_CTRLA_RUNSTDBY_Pos) | \
	TC_CTRLA_PRESCSYNC(CONF_TC##n##_PRESCSYNC), \
	(CONF_TC##n##_DBGRUN << TC_DBGCTRL_DBGRUN_Pos), \
	(CONF_TC##n##_OVFEO << TC_EVCTRL_OVFEO_Pos) | \
	(CONF_TC##n##_MCEO0 << TC_EVCTRL_MCEO0_Pos) | \
	(CONF_TC##n##_MCEO1 << TC_EVCTRL_MCEO1_Pos), \
	CONF_TC##n##_PER, \
	CONF_TC##n##_CC0, \
	CONF_TC##n##_CC1, \
	}
/**
 * \brief TC configuration type
 */
struct tc_configuration {
	uint8_t            number;
	hri_tc_ctrla_reg_t     ctrl_a;
	hri_tc_dbgctrl_reg_t   dbg_ctrl;
	hri_tc_evctrl_reg_t event_ctrl;
	hri_tc_per_reg_t       per;
	hri_tc_cc32_reg_t      cc0;
	hri_tc_cc32_reg_t      cc1;
};

/**
 * \brief Array of TC configurations
 */
static struct tc_configuration _tcs[] = {
#if CONF_TC3_ENABLE == 1
	TC_CONFIGURATION(3),
#endif
#if CONF_TC4_ENABLE == 1
	TC_CONFIGURATION(4),
#endif
#if CONF_TC5_ENABLE == 1
	TC_CONFIGURATION(5),
#endif
#if CONF_TC6_ENABLE == 1
	TC_CONFIGURATION(6),
#endif
#if CONF_TC7_ENABLE == 1
	TC_CONFIGURATION(7),
#endif
};

#include <hpl_tc1_v112_base.inc>
