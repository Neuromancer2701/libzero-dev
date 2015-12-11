/**
 * \file
 *
 * \brief SAM PORT
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

#ifndef _HRI_PORT_V100_H_INCLUDED_
#define _HRI_PORT_V100_H_INCLUDED_

#ifdef __cplusplus
extern "C" {
#endif

#include <stdbool.h>
#include <hal_atomic.h>

#if defined(ENABLE_PORT_CRITICAL_SECTIONS)
#  define PORT_CRITICAL_SECTION_ENTER() CRITICAL_SECTION_ENTER()
#  define PORT_CRITICAL_SECTION_LEAVE() CRITICAL_SECTION_LEAVE()
#else
#  define PORT_CRITICAL_SECTION_ENTER()
#  define PORT_CRITICAL_SECTION_LEAVE()
#endif


typedef uint32_t hri_port_ctrl_reg_t;
typedef uint32_t hri_port_dir_reg_t;
typedef uint32_t hri_port_dirclr_reg_t;
typedef uint32_t hri_port_dirset_reg_t;
typedef uint32_t hri_port_in_reg_t;
typedef uint32_t hri_port_out_reg_t;
typedef uint32_t hri_port_outclr_reg_t;
typedef uint32_t hri_port_outset_reg_t;
typedef uint32_t hri_port_wrconfig_reg_t;
typedef uint32_t hri_portgroup_ctrl_reg_t;
typedef uint32_t hri_portgroup_dir_reg_t;
typedef uint32_t hri_portgroup_dirclr_reg_t;
typedef uint32_t hri_portgroup_dirset_reg_t;
typedef uint32_t hri_portgroup_in_reg_t;
typedef uint32_t hri_portgroup_out_reg_t;
typedef uint32_t hri_portgroup_outclr_reg_t;
typedef uint32_t hri_portgroup_outset_reg_t;
typedef uint32_t hri_portgroup_wrconfig_reg_t;
typedef uint8_t hri_port_pincfg_reg_t;
typedef uint8_t hri_port_pmux_reg_t;
typedef uint8_t hri_portgroup_pincfg_reg_t;
typedef uint8_t hri_portgroup_pmux_reg_t;













static inline hri_port_in_reg_t hri_portgroup_get_IN_IN_bf(const void *const hw, uint8_t submodule_index, hri_port_in_reg_t mask)
{


        return (((PortGroup *)hw)->IN.reg & PORT_IN_IN(mask)) >> PORT_IN_IN_Pos;
}

static inline hri_port_in_reg_t hri_portgroup_read_IN_IN_bf(const void *const hw, uint8_t submodule_index)
{


        return (((PortGroup *)hw)->IN.reg & PORT_IN_IN_Msk) >> PORT_IN_IN_Pos;
}




static inline hri_port_in_reg_t hri_portgroup_get_IN_reg(const void *const hw, uint8_t submodule_index, hri_port_in_reg_t mask)
{
        uint32_t tmp;


        tmp = ((PortGroup *)hw)->IN.reg;
        tmp &= mask;
        return tmp;
}

static inline hri_port_in_reg_t hri_portgroup_read_IN_reg(const void *const hw, uint8_t submodule_index)
{


        return ((PortGroup *)hw)->IN.reg;
}








static inline void hri_portgroup_set_CTRL_SAMPLING_bf(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->CTRL.reg |= PORT_CTRL_SAMPLING(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_ctrl_reg_t hri_portgroup_get_CTRL_SAMPLING_bf(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        uint32_t tmp;
        tmp = ((PortGroup *)hw)->CTRL.reg;
        tmp = (tmp & PORT_CTRL_SAMPLING(mask)) >> PORT_CTRL_SAMPLING_Pos;

        return tmp;
}

static inline void hri_portgroup_write_CTRL_SAMPLING_bf(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t data)
{
        uint32_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((PortGroup *)hw)->CTRL.reg;
        tmp &= ~PORT_CTRL_SAMPLING_Msk;
        tmp |= PORT_CTRL_SAMPLING(data);
        ((PortGroup *)hw)->CTRL.reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_clear_CTRL_SAMPLING_bf(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->CTRL.reg &= ~PORT_CTRL_SAMPLING(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_toggle_CTRL_SAMPLING_bf(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->CTRL.reg ^= PORT_CTRL_SAMPLING(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_ctrl_reg_t hri_portgroup_read_CTRL_SAMPLING_bf(const void *const hw, uint8_t submodule_index)
{
        uint32_t tmp;
        tmp = ((PortGroup *)hw)->CTRL.reg;
        tmp = (tmp & PORT_CTRL_SAMPLING_Msk) >> PORT_CTRL_SAMPLING_Pos;

        return tmp;
}




static inline void hri_portgroup_set_CTRL_reg(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->CTRL.reg |= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_ctrl_reg_t hri_portgroup_get_CTRL_reg(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        uint32_t tmp;
        tmp = ((PortGroup *)hw)->CTRL.reg;
        tmp &= mask;
        return tmp;
}

static inline void hri_portgroup_write_CTRL_reg(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->CTRL.reg = data;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_clear_CTRL_reg(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->CTRL.reg &= ~mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_toggle_CTRL_reg(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->CTRL.reg ^= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_ctrl_reg_t hri_portgroup_read_CTRL_reg(const void *const hw, uint8_t submodule_index)
{
        return ((PortGroup *)hw)->CTRL.reg;
}







static inline void hri_portgroup_set_PMUX_PMUXE_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PMUX[index].reg |= PORT_PMUX_PMUXE(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pmux_reg_t hri_portgroup_get_PMUX_PMUXE_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        uint8_t tmp;
        tmp = ((PortGroup *)hw)->PMUX[index].reg;
        tmp = (tmp & PORT_PMUX_PMUXE(mask)) >> PORT_PMUX_PMUXE_Pos;

        return tmp;
}

static inline void hri_portgroup_write_PMUX_PMUXE_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t data)
{
        uint8_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((PortGroup *)hw)->PMUX[index].reg;
        tmp &= ~PORT_PMUX_PMUXE_Msk;
        tmp |= PORT_PMUX_PMUXE(data);
        ((PortGroup *)hw)->PMUX[index].reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_clear_PMUX_PMUXE_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PMUX[index].reg &= ~PORT_PMUX_PMUXE(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_toggle_PMUX_PMUXE_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PMUX[index].reg ^= PORT_PMUX_PMUXE(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pmux_reg_t hri_portgroup_read_PMUX_PMUXE_bf(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        uint8_t tmp;
        tmp = ((PortGroup *)hw)->PMUX[index].reg;
        tmp = (tmp & PORT_PMUX_PMUXE_Msk) >> PORT_PMUX_PMUXE_Pos;

        return tmp;
}

static inline void hri_portgroup_set_PMUX_PMUXO_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PMUX[index].reg |= PORT_PMUX_PMUXO(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pmux_reg_t hri_portgroup_get_PMUX_PMUXO_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        uint8_t tmp;
        tmp = ((PortGroup *)hw)->PMUX[index].reg;
        tmp = (tmp & PORT_PMUX_PMUXO(mask)) >> PORT_PMUX_PMUXO_Pos;

        return tmp;
}

static inline void hri_portgroup_write_PMUX_PMUXO_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t data)
{
        uint8_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((PortGroup *)hw)->PMUX[index].reg;
        tmp &= ~PORT_PMUX_PMUXO_Msk;
        tmp |= PORT_PMUX_PMUXO(data);
        ((PortGroup *)hw)->PMUX[index].reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_clear_PMUX_PMUXO_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PMUX[index].reg &= ~PORT_PMUX_PMUXO(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_toggle_PMUX_PMUXO_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PMUX[index].reg ^= PORT_PMUX_PMUXO(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pmux_reg_t hri_portgroup_read_PMUX_PMUXO_bf(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        uint8_t tmp;
        tmp = ((PortGroup *)hw)->PMUX[index].reg;
        tmp = (tmp & PORT_PMUX_PMUXO_Msk) >> PORT_PMUX_PMUXO_Pos;

        return tmp;
}




static inline void hri_portgroup_set_PMUX_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PMUX[index].reg |= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pmux_reg_t hri_portgroup_get_PMUX_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        uint8_t tmp;
        tmp = ((PortGroup *)hw)->PMUX[index].reg;
        tmp &= mask;
        return tmp;
}

static inline void hri_portgroup_write_PMUX_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PMUX[index].reg = data;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_clear_PMUX_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PMUX[index].reg &= ~mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_toggle_PMUX_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PMUX[index].reg ^= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pmux_reg_t hri_portgroup_read_PMUX_reg(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        return ((PortGroup *)hw)->PMUX[index].reg;
}




static inline void hri_portgroup_set_PINCFG_PMUXEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg |= PORT_PINCFG_PMUXEN;
        PORT_CRITICAL_SECTION_LEAVE();
}
static inline bool hri_portgroup_get_PINCFG_PMUXEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        uint8_t tmp;
        tmp = ((PortGroup *)hw)->PINCFG[index].reg;
        tmp = (tmp & PORT_PINCFG_PMUXEN) >> PORT_PINCFG_PMUXEN_Pos;

        return (bool)tmp;
}
static inline void hri_portgroup_write_PINCFG_PMUXEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index, bool value)
{
        uint8_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((PortGroup *)hw)->PINCFG[index].reg;
        tmp &= ~PORT_PINCFG_PMUXEN;
        tmp |= value << PORT_PINCFG_PMUXEN_Pos;
        ((PortGroup *)hw)->PINCFG[index].reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_portgroup_clear_PINCFG_PMUXEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg &= ~PORT_PINCFG_PMUXEN;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_portgroup_toggle_PINCFG_PMUXEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg ^= PORT_PINCFG_PMUXEN;

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_set_PINCFG_INEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg |= PORT_PINCFG_INEN;
        PORT_CRITICAL_SECTION_LEAVE();
}
static inline bool hri_portgroup_get_PINCFG_INEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        uint8_t tmp;
        tmp = ((PortGroup *)hw)->PINCFG[index].reg;
        tmp = (tmp & PORT_PINCFG_INEN) >> PORT_PINCFG_INEN_Pos;

        return (bool)tmp;
}
static inline void hri_portgroup_write_PINCFG_INEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index, bool value)
{
        uint8_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((PortGroup *)hw)->PINCFG[index].reg;
        tmp &= ~PORT_PINCFG_INEN;
        tmp |= value << PORT_PINCFG_INEN_Pos;
        ((PortGroup *)hw)->PINCFG[index].reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_portgroup_clear_PINCFG_INEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg &= ~PORT_PINCFG_INEN;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_portgroup_toggle_PINCFG_INEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg ^= PORT_PINCFG_INEN;

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_set_PINCFG_PULLEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg |= PORT_PINCFG_PULLEN;
        PORT_CRITICAL_SECTION_LEAVE();
}
static inline bool hri_portgroup_get_PINCFG_PULLEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        uint8_t tmp;
        tmp = ((PortGroup *)hw)->PINCFG[index].reg;
        tmp = (tmp & PORT_PINCFG_PULLEN) >> PORT_PINCFG_PULLEN_Pos;

        return (bool)tmp;
}
static inline void hri_portgroup_write_PINCFG_PULLEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index, bool value)
{
        uint8_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((PortGroup *)hw)->PINCFG[index].reg;
        tmp &= ~PORT_PINCFG_PULLEN;
        tmp |= value << PORT_PINCFG_PULLEN_Pos;
        ((PortGroup *)hw)->PINCFG[index].reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_portgroup_clear_PINCFG_PULLEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg &= ~PORT_PINCFG_PULLEN;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_portgroup_toggle_PINCFG_PULLEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg ^= PORT_PINCFG_PULLEN;

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_set_PINCFG_DRVSTR_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg |= PORT_PINCFG_DRVSTR;
        PORT_CRITICAL_SECTION_LEAVE();
}
static inline bool hri_portgroup_get_PINCFG_DRVSTR_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        uint8_t tmp;
        tmp = ((PortGroup *)hw)->PINCFG[index].reg;
        tmp = (tmp & PORT_PINCFG_DRVSTR) >> PORT_PINCFG_DRVSTR_Pos;

        return (bool)tmp;
}
static inline void hri_portgroup_write_PINCFG_DRVSTR_bit(const void *const hw, uint8_t submodule_index, uint8_t index, bool value)
{
        uint8_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((PortGroup *)hw)->PINCFG[index].reg;
        tmp &= ~PORT_PINCFG_DRVSTR;
        tmp |= value << PORT_PINCFG_DRVSTR_Pos;
        ((PortGroup *)hw)->PINCFG[index].reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_portgroup_clear_PINCFG_DRVSTR_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg &= ~PORT_PINCFG_DRVSTR;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_portgroup_toggle_PINCFG_DRVSTR_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg ^= PORT_PINCFG_DRVSTR;

        PORT_CRITICAL_SECTION_LEAVE();
}







static inline void hri_portgroup_set_PINCFG_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pincfg_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg |= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pincfg_reg_t hri_portgroup_get_PINCFG_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pincfg_reg_t mask)
{
        uint8_t tmp;
        tmp = ((PortGroup *)hw)->PINCFG[index].reg;
        tmp &= mask;
        return tmp;
}

static inline void hri_portgroup_write_PINCFG_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pincfg_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg = data;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_clear_PINCFG_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pincfg_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg &= ~mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_toggle_PINCFG_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pincfg_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->PINCFG[index].reg ^= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pincfg_reg_t hri_portgroup_read_PINCFG_reg(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        return ((PortGroup *)hw)->PINCFG[index].reg;
}










static inline void hri_portgroup_set_WRCONFIG_reg(const void *const hw, uint8_t submodule_index, hri_port_wrconfig_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->WRCONFIG.reg |= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_portgroup_write_WRCONFIG_reg(const void *const hw, uint8_t submodule_index, hri_port_wrconfig_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((PortGroup *)hw)->WRCONFIG.reg = data;
        PORT_CRITICAL_SECTION_LEAVE();
}








static inline hri_port_dir_reg_t hri_portgroup_get_DIR_DIR_bf(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        return (((PortGroup *)hw)->DIR.reg & PORT_DIR_DIR(mask)) >> PORT_DIR_DIR_Pos;
}

static inline void hri_portgroup_set_DIR_DIR_bf(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        ((PortGroup *)hw)->DIRSET.reg = PORT_DIR_DIR(mask);

}

static inline void hri_portgroup_toggle_DIR_DIR_bf(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        ((PortGroup *)hw)->DIRTGL.reg = PORT_DIR_DIR(mask);

}

static inline void hri_portgroup_clear_DIR_DIR_bf(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        ((PortGroup *)hw)->DIRCLR.reg = PORT_DIR_DIR(mask);

}

static inline void hri_portgroup_write_DIR_DIR_bf(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();

        ((PortGroup *)hw)->DIRCLR.reg = PORT_DIR_DIR_Msk;
        ((PortGroup *)hw)->DIRSET.reg = PORT_DIR_DIR(data);
	PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_dir_reg_t hri_portgroup_read_DIR_DIR_bf(const void *const hw, uint8_t submodule_index)
{

        return (((PortGroup *)hw)->DIR.reg & PORT_DIR_DIR_Msk) >> PORT_DIR_DIR_Pos;
}









static inline hri_port_dir_reg_t hri_portgroup_get_DIR_reg(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{


        return ((PortGroup *)hw)->DIR.reg & mask;
}

static inline void hri_portgroup_set_DIR_reg(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        ((PortGroup *)hw)->DIRSET.reg = mask;

}

static inline void hri_portgroup_toggle_DIR_reg(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        ((PortGroup *)hw)->DIRTGL.reg = mask;

}

static inline void hri_portgroup_clear_DIR_reg(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        ((PortGroup *)hw)->DIRCLR.reg = mask;


}

static inline void hri_portgroup_write_DIR_reg(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();

	((PortGroup *)hw)->DIRCLR.reg = 0xffffffff;
	((PortGroup *)hw)->DIRSET.reg = data;

        PORT_CRITICAL_SECTION_LEAVE();

}

static inline hri_port_dir_reg_t hri_portgroup_read_DIR_reg(const void *const hw, uint8_t submodule_index)
{


        return ((PortGroup *)hw)->DIR.reg;
}







static inline hri_port_out_reg_t hri_portgroup_get_OUT_OUT_bf(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        return (((PortGroup *)hw)->OUT.reg & PORT_OUT_OUT(mask)) >> PORT_OUT_OUT_Pos;
}

static inline void hri_portgroup_set_OUT_OUT_bf(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        ((PortGroup *)hw)->OUTSET.reg = PORT_OUT_OUT(mask);

}

static inline void hri_portgroup_toggle_OUT_OUT_bf(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        ((PortGroup *)hw)->OUTTGL.reg = PORT_OUT_OUT(mask);

}

static inline void hri_portgroup_clear_OUT_OUT_bf(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        ((PortGroup *)hw)->OUTCLR.reg = PORT_OUT_OUT(mask);

}

static inline void hri_portgroup_write_OUT_OUT_bf(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();

        ((PortGroup *)hw)->OUTCLR.reg = PORT_OUT_OUT_Msk;
        ((PortGroup *)hw)->OUTSET.reg = PORT_OUT_OUT(data);
	PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_out_reg_t hri_portgroup_read_OUT_OUT_bf(const void *const hw, uint8_t submodule_index)
{

        return (((PortGroup *)hw)->OUT.reg & PORT_OUT_OUT_Msk) >> PORT_OUT_OUT_Pos;
}









static inline hri_port_out_reg_t hri_portgroup_get_OUT_reg(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{


        return ((PortGroup *)hw)->OUT.reg & mask;
}

static inline void hri_portgroup_set_OUT_reg(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        ((PortGroup *)hw)->OUTSET.reg = mask;

}

static inline void hri_portgroup_toggle_OUT_reg(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        ((PortGroup *)hw)->OUTTGL.reg = mask;

}

static inline void hri_portgroup_clear_OUT_reg(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        ((PortGroup *)hw)->OUTCLR.reg = mask;


}

static inline void hri_portgroup_write_OUT_reg(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();

	((PortGroup *)hw)->OUTCLR.reg = 0xffffffff;
	((PortGroup *)hw)->OUTSET.reg = data;

        PORT_CRITICAL_SECTION_LEAVE();

}

static inline hri_port_out_reg_t hri_portgroup_read_OUT_reg(const void *const hw, uint8_t submodule_index)
{


        return ((PortGroup *)hw)->OUT.reg;
}















static inline hri_port_in_reg_t hri_port_get_IN_IN_bf(const void *const hw, uint8_t submodule_index, hri_port_in_reg_t mask)
{


        return (((Port *)hw)->Group[submodule_index].IN.reg & PORT_IN_IN(mask)) >> PORT_IN_IN_Pos;
}

static inline hri_port_in_reg_t hri_port_read_IN_IN_bf(const void *const hw, uint8_t submodule_index)
{


        return (((Port *)hw)->Group[submodule_index].IN.reg & PORT_IN_IN_Msk) >> PORT_IN_IN_Pos;
}




static inline hri_port_in_reg_t hri_port_get_IN_reg(const void *const hw, uint8_t submodule_index, hri_port_in_reg_t mask)
{
        uint32_t tmp;


        tmp = ((Port *)hw)->Group[submodule_index].IN.reg;
        tmp &= mask;
        return tmp;
}

static inline hri_port_in_reg_t hri_port_read_IN_reg(const void *const hw, uint8_t submodule_index)
{


        return ((Port *)hw)->Group[submodule_index].IN.reg;
}








static inline void hri_port_set_CTRL_SAMPLING_bf(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].CTRL.reg |= PORT_CTRL_SAMPLING(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_ctrl_reg_t hri_port_get_CTRL_SAMPLING_bf(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        uint32_t tmp;
        tmp = ((Port *)hw)->Group[submodule_index].CTRL.reg;
        tmp = (tmp & PORT_CTRL_SAMPLING(mask)) >> PORT_CTRL_SAMPLING_Pos;

        return tmp;
}

static inline void hri_port_write_CTRL_SAMPLING_bf(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t data)
{
        uint32_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((Port *)hw)->Group[submodule_index].CTRL.reg;
        tmp &= ~PORT_CTRL_SAMPLING_Msk;
        tmp |= PORT_CTRL_SAMPLING(data);
        ((Port *)hw)->Group[submodule_index].CTRL.reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_clear_CTRL_SAMPLING_bf(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].CTRL.reg &= ~PORT_CTRL_SAMPLING(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_toggle_CTRL_SAMPLING_bf(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].CTRL.reg ^= PORT_CTRL_SAMPLING(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_ctrl_reg_t hri_port_read_CTRL_SAMPLING_bf(const void *const hw, uint8_t submodule_index)
{
        uint32_t tmp;
        tmp = ((Port *)hw)->Group[submodule_index].CTRL.reg;
        tmp = (tmp & PORT_CTRL_SAMPLING_Msk) >> PORT_CTRL_SAMPLING_Pos;

        return tmp;
}




static inline void hri_port_set_CTRL_reg(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].CTRL.reg |= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_ctrl_reg_t hri_port_get_CTRL_reg(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        uint32_t tmp;
        tmp = ((Port *)hw)->Group[submodule_index].CTRL.reg;
        tmp &= mask;
        return tmp;
}

static inline void hri_port_write_CTRL_reg(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].CTRL.reg = data;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_clear_CTRL_reg(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].CTRL.reg &= ~mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_toggle_CTRL_reg(const void *const hw, uint8_t submodule_index, hri_port_ctrl_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].CTRL.reg ^= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_ctrl_reg_t hri_port_read_CTRL_reg(const void *const hw, uint8_t submodule_index)
{
        return ((Port *)hw)->Group[submodule_index].CTRL.reg;
}







static inline void hri_port_set_PMUX_PMUXE_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PMUX[index].reg |= PORT_PMUX_PMUXE(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pmux_reg_t hri_port_get_PMUX_PMUXE_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        uint8_t tmp;
        tmp = ((Port *)hw)->Group[submodule_index].PMUX[index].reg;
        tmp = (tmp & PORT_PMUX_PMUXE(mask)) >> PORT_PMUX_PMUXE_Pos;

        return tmp;
}

static inline void hri_port_write_PMUX_PMUXE_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t data)
{
        uint8_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((Port *)hw)->Group[submodule_index].PMUX[index].reg;
        tmp &= ~PORT_PMUX_PMUXE_Msk;
        tmp |= PORT_PMUX_PMUXE(data);
        ((Port *)hw)->Group[submodule_index].PMUX[index].reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_clear_PMUX_PMUXE_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PMUX[index].reg &= ~PORT_PMUX_PMUXE(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_toggle_PMUX_PMUXE_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PMUX[index].reg ^= PORT_PMUX_PMUXE(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pmux_reg_t hri_port_read_PMUX_PMUXE_bf(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        uint8_t tmp;
        tmp = ((Port *)hw)->Group[submodule_index].PMUX[index].reg;
        tmp = (tmp & PORT_PMUX_PMUXE_Msk) >> PORT_PMUX_PMUXE_Pos;

        return tmp;
}

static inline void hri_port_set_PMUX_PMUXO_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PMUX[index].reg |= PORT_PMUX_PMUXO(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pmux_reg_t hri_port_get_PMUX_PMUXO_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        uint8_t tmp;
        tmp = ((Port *)hw)->Group[submodule_index].PMUX[index].reg;
        tmp = (tmp & PORT_PMUX_PMUXO(mask)) >> PORT_PMUX_PMUXO_Pos;

        return tmp;
}

static inline void hri_port_write_PMUX_PMUXO_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t data)
{
        uint8_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((Port *)hw)->Group[submodule_index].PMUX[index].reg;
        tmp &= ~PORT_PMUX_PMUXO_Msk;
        tmp |= PORT_PMUX_PMUXO(data);
        ((Port *)hw)->Group[submodule_index].PMUX[index].reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_clear_PMUX_PMUXO_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PMUX[index].reg &= ~PORT_PMUX_PMUXO(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_toggle_PMUX_PMUXO_bf(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PMUX[index].reg ^= PORT_PMUX_PMUXO(mask);

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pmux_reg_t hri_port_read_PMUX_PMUXO_bf(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        uint8_t tmp;
        tmp = ((Port *)hw)->Group[submodule_index].PMUX[index].reg;
        tmp = (tmp & PORT_PMUX_PMUXO_Msk) >> PORT_PMUX_PMUXO_Pos;

        return tmp;
}




static inline void hri_port_set_PMUX_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PMUX[index].reg |= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pmux_reg_t hri_port_get_PMUX_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        uint8_t tmp;
        tmp = ((Port *)hw)->Group[submodule_index].PMUX[index].reg;
        tmp &= mask;
        return tmp;
}

static inline void hri_port_write_PMUX_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PMUX[index].reg = data;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_clear_PMUX_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PMUX[index].reg &= ~mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_toggle_PMUX_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pmux_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PMUX[index].reg ^= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pmux_reg_t hri_port_read_PMUX_reg(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        return ((Port *)hw)->Group[submodule_index].PMUX[index].reg;
}




static inline void hri_port_set_PINCFG_PMUXEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg |= PORT_PINCFG_PMUXEN;
        PORT_CRITICAL_SECTION_LEAVE();
}
static inline bool hri_port_get_PINCFG_PMUXEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        uint8_t tmp;
        tmp = ((Port *)hw)->Group[submodule_index].PINCFG[index].reg;
        tmp = (tmp & PORT_PINCFG_PMUXEN) >> PORT_PINCFG_PMUXEN_Pos;

        return (bool)tmp;
}
static inline void hri_port_write_PINCFG_PMUXEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index, bool value)
{
        uint8_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((Port *)hw)->Group[submodule_index].PINCFG[index].reg;
        tmp &= ~PORT_PINCFG_PMUXEN;
        tmp |= value << PORT_PINCFG_PMUXEN_Pos;
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_port_clear_PINCFG_PMUXEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg &= ~PORT_PINCFG_PMUXEN;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_port_toggle_PINCFG_PMUXEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg ^= PORT_PINCFG_PMUXEN;

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_set_PINCFG_INEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg |= PORT_PINCFG_INEN;
        PORT_CRITICAL_SECTION_LEAVE();
}
static inline bool hri_port_get_PINCFG_INEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        uint8_t tmp;
        tmp = ((Port *)hw)->Group[submodule_index].PINCFG[index].reg;
        tmp = (tmp & PORT_PINCFG_INEN) >> PORT_PINCFG_INEN_Pos;

        return (bool)tmp;
}
static inline void hri_port_write_PINCFG_INEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index, bool value)
{
        uint8_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((Port *)hw)->Group[submodule_index].PINCFG[index].reg;
        tmp &= ~PORT_PINCFG_INEN;
        tmp |= value << PORT_PINCFG_INEN_Pos;
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_port_clear_PINCFG_INEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg &= ~PORT_PINCFG_INEN;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_port_toggle_PINCFG_INEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg ^= PORT_PINCFG_INEN;

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_set_PINCFG_PULLEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg |= PORT_PINCFG_PULLEN;
        PORT_CRITICAL_SECTION_LEAVE();
}
static inline bool hri_port_get_PINCFG_PULLEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        uint8_t tmp;
        tmp = ((Port *)hw)->Group[submodule_index].PINCFG[index].reg;
        tmp = (tmp & PORT_PINCFG_PULLEN) >> PORT_PINCFG_PULLEN_Pos;

        return (bool)tmp;
}
static inline void hri_port_write_PINCFG_PULLEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index, bool value)
{
        uint8_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((Port *)hw)->Group[submodule_index].PINCFG[index].reg;
        tmp &= ~PORT_PINCFG_PULLEN;
        tmp |= value << PORT_PINCFG_PULLEN_Pos;
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_port_clear_PINCFG_PULLEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg &= ~PORT_PINCFG_PULLEN;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_port_toggle_PINCFG_PULLEN_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg ^= PORT_PINCFG_PULLEN;

        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_set_PINCFG_DRVSTR_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg |= PORT_PINCFG_DRVSTR;
        PORT_CRITICAL_SECTION_LEAVE();
}
static inline bool hri_port_get_PINCFG_DRVSTR_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        uint8_t tmp;
        tmp = ((Port *)hw)->Group[submodule_index].PINCFG[index].reg;
        tmp = (tmp & PORT_PINCFG_DRVSTR) >> PORT_PINCFG_DRVSTR_Pos;

        return (bool)tmp;
}
static inline void hri_port_write_PINCFG_DRVSTR_bit(const void *const hw, uint8_t submodule_index, uint8_t index, bool value)
{
        uint8_t tmp;
        PORT_CRITICAL_SECTION_ENTER();
        tmp = ((Port *)hw)->Group[submodule_index].PINCFG[index].reg;
        tmp &= ~PORT_PINCFG_DRVSTR;
        tmp |= value << PORT_PINCFG_DRVSTR_Pos;
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg = tmp;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_port_clear_PINCFG_DRVSTR_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg &= ~PORT_PINCFG_DRVSTR;

        PORT_CRITICAL_SECTION_LEAVE();
}
static inline void hri_port_toggle_PINCFG_DRVSTR_bit(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg ^= PORT_PINCFG_DRVSTR;

        PORT_CRITICAL_SECTION_LEAVE();
}







static inline void hri_port_set_PINCFG_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pincfg_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg |= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pincfg_reg_t hri_port_get_PINCFG_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pincfg_reg_t mask)
{
        uint8_t tmp;
        tmp = ((Port *)hw)->Group[submodule_index].PINCFG[index].reg;
        tmp &= mask;
        return tmp;
}

static inline void hri_port_write_PINCFG_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pincfg_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg = data;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_clear_PINCFG_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pincfg_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg &= ~mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_toggle_PINCFG_reg(const void *const hw, uint8_t submodule_index, uint8_t index, hri_port_pincfg_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].PINCFG[index].reg ^= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_pincfg_reg_t hri_port_read_PINCFG_reg(const void *const hw, uint8_t submodule_index, uint8_t index)
{
        return ((Port *)hw)->Group[submodule_index].PINCFG[index].reg;
}










static inline void hri_port_set_WRCONFIG_reg(const void *const hw, uint8_t submodule_index, hri_port_wrconfig_reg_t mask)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].WRCONFIG.reg |= mask;
        PORT_CRITICAL_SECTION_LEAVE();
}

static inline void hri_port_write_WRCONFIG_reg(const void *const hw, uint8_t submodule_index, hri_port_wrconfig_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();
        ((Port *)hw)->Group[submodule_index].WRCONFIG.reg = data;
        PORT_CRITICAL_SECTION_LEAVE();
}








static inline hri_port_dir_reg_t hri_port_get_DIR_DIR_bf(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        return (((Port *)hw)->Group[submodule_index].DIR.reg & PORT_DIR_DIR(mask)) >> PORT_DIR_DIR_Pos;
}

static inline void hri_port_set_DIR_DIR_bf(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        ((Port *)hw)->Group[submodule_index].DIRSET.reg = PORT_DIR_DIR(mask);

}

static inline void hri_port_toggle_DIR_DIR_bf(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        ((Port *)hw)->Group[submodule_index].DIRTGL.reg = PORT_DIR_DIR(mask);

}

static inline void hri_port_clear_DIR_DIR_bf(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        ((Port *)hw)->Group[submodule_index].DIRCLR.reg = PORT_DIR_DIR(mask);

}

static inline void hri_port_write_DIR_DIR_bf(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();

        ((Port *)hw)->Group[submodule_index].DIRCLR.reg = PORT_DIR_DIR_Msk;
        ((Port *)hw)->Group[submodule_index].DIRSET.reg = PORT_DIR_DIR(data);
	PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_dir_reg_t hri_port_read_DIR_DIR_bf(const void *const hw, uint8_t submodule_index)
{

        return (((Port *)hw)->Group[submodule_index].DIR.reg & PORT_DIR_DIR_Msk) >> PORT_DIR_DIR_Pos;
}









static inline hri_port_dir_reg_t hri_port_get_DIR_reg(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{


        return ((Port *)hw)->Group[submodule_index].DIR.reg & mask;
}

static inline void hri_port_set_DIR_reg(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        ((Port *)hw)->Group[submodule_index].DIRSET.reg = mask;

}

static inline void hri_port_toggle_DIR_reg(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        ((Port *)hw)->Group[submodule_index].DIRTGL.reg = mask;

}

static inline void hri_port_clear_DIR_reg(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t mask)
{

        ((Port *)hw)->Group[submodule_index].DIRCLR.reg = mask;


}

static inline void hri_port_write_DIR_reg(const void *const hw, uint8_t submodule_index, hri_port_dir_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();

	((Port *)hw)->Group[submodule_index].DIRCLR.reg = 0xffffffff;
	((Port *)hw)->Group[submodule_index].DIRSET.reg = data;

        PORT_CRITICAL_SECTION_LEAVE();

}

static inline hri_port_dir_reg_t hri_port_read_DIR_reg(const void *const hw, uint8_t submodule_index)
{


        return ((Port *)hw)->Group[submodule_index].DIR.reg;
}







static inline hri_port_out_reg_t hri_port_get_OUT_OUT_bf(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        return (((Port *)hw)->Group[submodule_index].OUT.reg & PORT_OUT_OUT(mask)) >> PORT_OUT_OUT_Pos;
}

static inline void hri_port_set_OUT_OUT_bf(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        ((Port *)hw)->Group[submodule_index].OUTSET.reg = PORT_OUT_OUT(mask);

}

static inline void hri_port_toggle_OUT_OUT_bf(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        ((Port *)hw)->Group[submodule_index].OUTTGL.reg = PORT_OUT_OUT(mask);

}

static inline void hri_port_clear_OUT_OUT_bf(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        ((Port *)hw)->Group[submodule_index].OUTCLR.reg = PORT_OUT_OUT(mask);

}

static inline void hri_port_write_OUT_OUT_bf(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();

        ((Port *)hw)->Group[submodule_index].OUTCLR.reg = PORT_OUT_OUT_Msk;
        ((Port *)hw)->Group[submodule_index].OUTSET.reg = PORT_OUT_OUT(data);
	PORT_CRITICAL_SECTION_LEAVE();
}

static inline hri_port_out_reg_t hri_port_read_OUT_OUT_bf(const void *const hw, uint8_t submodule_index)
{

        return (((Port *)hw)->Group[submodule_index].OUT.reg & PORT_OUT_OUT_Msk) >> PORT_OUT_OUT_Pos;
}









static inline hri_port_out_reg_t hri_port_get_OUT_reg(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{


        return ((Port *)hw)->Group[submodule_index].OUT.reg & mask;
}

static inline void hri_port_set_OUT_reg(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        ((Port *)hw)->Group[submodule_index].OUTSET.reg = mask;

}

static inline void hri_port_toggle_OUT_reg(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        ((Port *)hw)->Group[submodule_index].OUTTGL.reg = mask;

}

static inline void hri_port_clear_OUT_reg(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t mask)
{

        ((Port *)hw)->Group[submodule_index].OUTCLR.reg = mask;


}

static inline void hri_port_write_OUT_reg(const void *const hw, uint8_t submodule_index, hri_port_out_reg_t data)
{
        PORT_CRITICAL_SECTION_ENTER();

	((Port *)hw)->Group[submodule_index].OUTCLR.reg = 0xffffffff;
	((Port *)hw)->Group[submodule_index].OUTSET.reg = data;

        PORT_CRITICAL_SECTION_LEAVE();

}

static inline hri_port_out_reg_t hri_port_read_OUT_reg(const void *const hw, uint8_t submodule_index)
{


        return ((Port *)hw)->Group[submodule_index].OUT.reg;
}






#ifdef __cplusplus
}
#endif

#endif /* _HRI_PORT_V100_H_INCLUDED */

