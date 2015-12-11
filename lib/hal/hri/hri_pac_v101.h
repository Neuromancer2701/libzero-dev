/**
 * \file
 *
 * \brief SAM PAC
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
 */

#ifndef _HRI_PAC_V101_H_INCLUDED_
#define _HRI_PAC_V101_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_PAC_CRITICAL_SECTIONS)
#  define PAC_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#  define PAC_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#  define PAC_CRITICAL_SECTION_ENTER()
#  define PAC_CRITICAL_SECTION_LEAVE()
#endif


typedef uint32_t hri_pac_wp_reg_t;



	  
	
  
	





static inline hri_pac_wp_reg_t hri_pac_get_WP_WP_bf(const void *const hw, hri_pac_wp_reg_t mask) 
{        
        return (((Pac *)hw)->WPSET.reg & PAC_WPSET_WP(mask)) >> PAC_WPSET_WP_Pos;
}

static inline void hri_pac_set_WP_WP_bf(const void *const hw, hri_pac_wp_reg_t mask) 
{        
        ((Pac *)hw)->WPSET.reg = PAC_WPSET_WP(mask);
}

static inline void hri_pac_toggle_WP_WP_bf(const void *const hw, hri_pac_wp_reg_t mask) 
{        
	hri_pac_wp_reg_t tmp;
        PAC_CRITICAL_SECTION_ENTER();
	tmp = (((Pac *)hw)->WPSET.reg & PAC_WPSET_WP(mask)) >> PAC_WPSET_WP_Pos;
	((Pac *)hw)->WPCLR.reg = PAC_WPSET_WP_Msk;
	((Pac *)hw)->WPSET.reg = PAC_WPSET_WP(tmp^mask);
	PAC_CRITICAL_SECTION_LEAVE();
}

static inline void hri_pac_clear_WP_WP_bf(const void *const hw, hri_pac_wp_reg_t mask) 
{        
        ((Pac *)hw)->WPCLR.reg = PAC_WPSET_WP(mask);
}

static inline void hri_pac_write_WP_WP_bf(const void *const hw, hri_pac_wp_reg_t data) 
{        
        PAC_CRITICAL_SECTION_ENTER();
        ((Pac *)hw)->WPCLR.reg = PAC_WPSET_WP_Msk;
        ((Pac *)hw)->WPSET.reg = PAC_WPSET_WP(data);
	PAC_CRITICAL_SECTION_LEAVE();
}

static inline hri_pac_wp_reg_t hri_pac_read_WP_WP_bf(const void *const hw) 
{        
        return (((Pac *)hw)->WPSET.reg & PAC_WPSET_WP_Msk) >> PAC_WPSET_WP_Pos;
}

static inline hri_pac_wp_reg_t hri_pac_get_WP_reg(const void *const hw, hri_pac_wp_reg_t mask) 
{
        return ((Pac *)hw)->WPSET.reg & mask;
}

static inline void hri_pac_set_WP_reg(const void *const hw, hri_pac_wp_reg_t mask) 
{
        ((Pac *)hw)->WPSET.reg = mask;
}

static inline void hri_pac_toggle_WP_reg(const void *const hw, hri_pac_wp_reg_t mask) 
{
	hri_pac_wp_reg_t tmp;
        PAC_CRITICAL_SECTION_ENTER();
	tmp = ((Pac *)hw)->WPSET.reg;
	((Pac *)hw)->WPCLR.reg = mask;
	((Pac *)hw)->WPSET.reg = (tmp^mask);
        PAC_CRITICAL_SECTION_LEAVE();
}

static inline void hri_pac_clear_WP_reg(const void *const hw, hri_pac_wp_reg_t mask) 
{
        ((Pac *)hw)->WPCLR.reg = mask;
}

static inline void hri_pac_write_WP_reg(const void *const hw, hri_pac_wp_reg_t data) 
{
        PAC_CRITICAL_SECTION_ENTER();
	((Pac *)hw)->WPCLR.reg = 0xFFFFFFFE;
	((Pac *)hw)->WPSET.reg = data;
        PAC_CRITICAL_SECTION_LEAVE();
}

static inline hri_pac_wp_reg_t hri_pac_read_WP_reg(const void *const hw) 
{
        return ((Pac *)hw)->WPSET.reg;
}
#ifdef __cplusplus
}


#endif

#endif /* _HRI_PAC_V101_H_INCLUDED */
