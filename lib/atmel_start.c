/*
 * Code generated from Atmel Start.
 *
 * This file will be overwritten when reconfiguring your Atmel Start project.
 * Please copy examples or other code you want to keep to a separate file
 * to avoid losing it when reconfiguring.
 */

#include "atmel_start.h"
#include <utils.h>
#include <hal_init.h>
#include <hpl_irq.h>
#include <hpl_pm1_v201_base.h>
#include <hpl_gclk1_v210_base.h>
#include <peripheral_gclk_config.h>

#if CONF_DMAC_MAX_USED_DESC > 0
#    include <hpl_dma.h>

	COMPILER_ALIGNED(16)
	DmacDescriptor _descriptor_section[CONF_DMAC_MAX_USED_DESC]
	SECTION_DMAC_DESCRIPTOR;

	COMPILER_ALIGNED(16)
	DmacDescriptor _write_back_section[CONF_DMAC_MAX_USED_DESC]
	SECTION_DMAC_DESCRIPTOR;

	struct _dma_resource _resource[CONF_DMAC_MAX_USED_CH];

	uint32_t dmac_ch_used = CONF_DMAC_MAX_USED_CH;
	uint32_t dmac_resource_used = CONF_DMAC_MAX_USED_DESC;

	/* The USB module requires a GCLK_USB of 48 MHz ~ 0.25% clock
	 * for low speed and full speed operation. */
	#if ( CONF_GCLK_USB_FREQUENCY > ( 48000000 + 48000000/400 )) ||	\
		( CONF_GCLK_USB_FREQUENCY < ( 48000000 - 48000000/400 ))
	#    warning USB clock should be 48MHz ~ 0.25% clock, check your configuration!
	#endif
#endif

/*! The buffer size for ADC */
#define ADC_0_BUFFER_SIZE 16

extern struct _irq_descriptor *_irq_table[PERIPH_COUNT_IRQn];
extern void Default_Handler(void);

struct timer_descriptor TIMER_0;
struct adc_async_descriptor ADC_0;

static uint8_t ADC_0_buffer[ADC_0_BUFFER_SIZE];

/**
 * \brief Timer initialization function
 *
 * Enables Timer peripheral, clocks and initializes Timer driver
 */
static void TIMER_0_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, TC3);
	_gclk_enable_channel(TC3_GCLK_ID, CONF_GCLK_TC3_SRC);
	timer_init(&TIMER_0, TC3, _tc_get_timer());
}

void EXTERNAL_IRQ_0_init(void)
{
	_gclk_enable_channel(EIC_GCLK_ID, CONF_GCLK_EIC_SRC);

	ext_irq_init();

	// Set pin direction to input
	gpio_set_pin_direction(PA16, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(PA16,
	        // <y> Pull configuration
	        // <id> pad_pull_config
	        // <GPIO_PULL_OFF"> Off
	        // <GPIO_PULL_UP"> Pull-up
	        // <GPIO_PULL_DOWN"> Pull-down
			GPIO_PULL_OFF);

	gpio_set_pin_mux(PA16, GPIO_MUX_A);

	// Set pin direction to input
	gpio_set_pin_direction(PA17, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(PA17,
	        // <y> Pull configuration
	        // <id> pad_pull_config
	        // <GPIO_PULL_OFF"> Off
	        // <GPIO_PULL_UP"> Pull-up
	        // <GPIO_PULL_DOWN"> Pull-down
			GPIO_PULL_OFF);

	gpio_set_pin_mux(PA17, GPIO_MUX_A);

	// Set pin direction to input
	gpio_set_pin_direction(PA18, GPIO_DIRECTION_IN);

	gpio_set_pin_pull_mode(PA18,
	        // <y> Pull configuration
	        // <id> pad_pull_config
	        // <GPIO_PULL_OFF"> Off
	        // <GPIO_PULL_UP"> Pull-up
	        // <GPIO_PULL_DOWN"> Pull-down
			GPIO_PULL_OFF);

	gpio_set_pin_mux(PA18, GPIO_MUX_A);
}

/**
 * \brief ADC initialization function
 *
 * Enables ADC peripheral, clocks and initializes ADC driver
 */
static void ADC_0_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBC, ADC);
	_gclk_enable_channel(ADC_GCLK_ID, CONF_GCLK_ADC_SRC);
	adc_async_init(&ADC_0, ADC, ADC_0_buffer, ADC_0_BUFFER_SIZE);

	// Disable digital pin circuitry
	gpio_set_pin_direction(PA02, GPIO_DIRECTION_OFF);
	gpio_set_pin_mux(PA02, GPIO_MUX_B);

	// Disable digital pin circuitry
	gpio_set_pin_direction(PA03, GPIO_DIRECTION_OFF);
	gpio_set_pin_mux(PA03, GPIO_MUX_B);
}

void USB_0_PORT_init(void)
{
	gpio_set_pin_direction(PA24,
	        // <y> Pin direction
	        // <id> pad_direction
	        // <GPIO_DIRECTION_OFF"> Off
	        // <GPIO_DIRECTION_IN"> In
	        // <GPIO_DIRECTION_OUT"> Out
			GPIO_DIRECTION_OUT);

	gpio_set_pin_level(PA24,
	        // <y> Initial level
	        // <id> pad_initial_level
	        // <false"> Low
	        // <true"> High
			false);

	gpio_set_pin_pull_mode(PA24,
	        // <y> Pull configuration
	        // <id> pad_pull_config
	        // <GPIO_PULL_OFF"> Off
	        // <GPIO_PULL_UP"> Pull-up
	        // <GPIO_PULL_DOWN"> Pull-down
			GPIO_PULL_OFF);

	gpio_set_pin_mux(PA24, GPIO_MUX_G);

	gpio_set_pin_direction(PA25,
	        // <y> Pin direction
	        // <id> pad_direction
	        // <GPIO_DIRECTION_OFF"> Off
	        // <GPIO_DIRECTION_IN"> In
	        // <GPIO_DIRECTION_OUT"> Out
			GPIO_DIRECTION_OUT);

	gpio_set_pin_level(PA25,
	        // <y> Initial level
	        // <id> pad_initial_level
	        // <false"> Low
	        // <true"> High
			false);

	gpio_set_pin_pull_mode(PA25,
	        // <y> Pull configuration
	        // <id> pad_pull_config
	        // <GPIO_PULL_OFF"> Off
	        // <GPIO_PULL_UP"> Pull-up
	        // <GPIO_PULL_DOWN"> Pull-down
			GPIO_PULL_OFF);

	gpio_set_pin_mux(PA25, GPIO_MUX_G);
}

void USB_0_CLOCK_init(void)
{
	_pm_enable_bus_clock(PM_BUS_APBB, USB);
	_pm_enable_bus_clock(PM_BUS_AHB, USB);
	_gclk_enable_channel(USB_GCLK_ID, CONF_GCLK_USB_SRC);
}

void USB_0_init(void)
{
	USB_0_CLOCK_init();
	usb_d_init();
	USB_0_PORT_init();
}

void TC3_Handler(void)
{
	if (_irq_table[ TCC0_IRQn + 3 ]) {
		_irq_table[ TCC0_IRQn + 3 ]->handler(
				_irq_table[ TCC0_IRQn + 3 ]->parameter);
	} else {
		Default_Handler();
	}
}

void EIC_Handler(void)
{
	if (_irq_table[ EIC_IRQn + 0 ]) {
		_irq_table[ EIC_IRQn + 0 ]->handler(
				_irq_table[ EIC_IRQn + 0 ]->parameter);
	} else {
		Default_Handler();
	}
}

void ADC_Handler(void)
{
	if (_irq_table[ ADC_IRQn + 0 ]) {
		_irq_table[ ADC_IRQn + 0 ]->handler(
				_irq_table[ ADC_IRQn + 0 ]->parameter);
	} else {
		Default_Handler();
	}
}

void GCLK_Handler(void)
{
	if (_irq_table[  +0 ]) {
		_irq_table[  +0 ]->handler(_irq_table[  +0 ]->parameter);
	} else {
		Default_Handler();
	}
}

void SYSCTRL_Handler(void)
{
	if (_irq_table[ SYSCTRL_IRQn + 0 ]) {
		_irq_table[ SYSCTRL_IRQn + 0 ]->handler(
				_irq_table[ SYSCTRL_IRQn + 0 ]->parameter);
	} else {
		Default_Handler();
	}
}

void PM_Handler(void)
{
	if (_irq_table[ PM_IRQn + 0 ]) {
		_irq_table[ PM_IRQn + 0 ]->handler(_irq_table[ PM_IRQn + 0 ]->parameter);
	} else {
		Default_Handler();
	}
}

void USB_Handler(void)
{
	if (_irq_table[ USB_IRQn + 0 ]) {
		_irq_table[ USB_IRQn + 0 ]->handler(
				_irq_table[ USB_IRQn + 0 ]->parameter);
	} else {
		Default_Handler();
	}
}

void DSU_Handler(void)
{
	if (_irq_table[  +0 ]) {
		_irq_table[  +0 ]->handler(_irq_table[  +0 ]->parameter);
	} else {
		Default_Handler();
	}
}

void system_init(void)
{
	init_mcu();

	TIMER_0_init();
	EXTERNAL_IRQ_0_init();
	ADC_0_init();

	USB_0_init();
}
