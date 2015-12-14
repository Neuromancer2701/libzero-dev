/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */
#ifndef ATMEL_START_H_INCLUDED
#define ATMEL_START_H_INCLUDED



#ifdef __cplusplus
		extern "C" {
#endif

#define PA02  GPIO(GPIO_PORTA, 2)
#define PA03  GPIO(GPIO_PORTA, 3)
#define PA16  GPIO(GPIO_PORTA, 16)
#define PA17  GPIO(GPIO_PORTA, 17)
#define PA18  GPIO(GPIO_PORTA, 18)
#define PA24  GPIO(GPIO_PORTA, 24)
#define PA25  GPIO(GPIO_PORTA, 25)

#include <hal_gpio.h>
#include <hal_timer.h>
#include <hpl_tc1_v112_base.h>
#include <hal_ext_irq.h>
#include <hal_adc_async.h>

#include "hal_usb_device.h"
#include <hal_crc_sync.h>

extern struct timer_descriptor TIMER_0;
extern struct adc_async_descriptor ADC_0;

extern struct crc_sync_descriptor CRC_0;

void USB_0_CLOCK_init(void);
void USB_0_init(void);
void USB_0_example(void);

#define CONF_DMAC_MAX_USED_DESC ( /*TC3*/ 0 + /*EIC*/ 0 + /*ADC*/ 0 + /*GCLK*/ 0 + /*SYSCTRL*/ 0 + /*PM*/ 0 + /*USB*/ 0 + /*DSU*/ 0 )
#define CONF_DMAC_MAX_USED_CH ( /*TC3*/ 0 + /*EIC*/ 0 + /*ADC*/ 0 + /*GCLK*/ 0 + /*SYSCTRL*/ 0 + /*PM*/ 0 + /*USB*/ 0 + /*DSU*/ 0 )

/**
 * \brief Perform system initialization, initialize pins and clocks for
 * peripherals
 */
void system_init(void);

#ifdef __cplusplus
		}
#endif
#endif // ATMEL_START_H_INCLUDED
