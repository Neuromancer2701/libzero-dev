/* Auto-generated config file peripheral_gclk_config.h */
#ifndef PERIPHERAL_GCLK_CONFIG_H
#define PERIPHERAL_GCLK_CONFIG_H

// <<< Use Configuration Wizard in Context Menu >>>



// <y> TC Clock Source
// <id> tc_gclk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for TC.
#ifndef CONF_GCLK_TC3_SRC
#    define CONF_GCLK_TC3_SRC GCLK_CLKCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_TC3_FREQUENCY
 * \brief TC3's Clock frequency
 */
#ifndef CONF_GCLK_TC3_FREQUENCY
#    define CONF_GCLK_TC3_FREQUENCY 8000000
#endif


// <y> EIC Clock Source
// <id> eic_gclk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for EIC.
#ifndef CONF_GCLK_EIC_SRC
#    define CONF_GCLK_EIC_SRC GCLK_CLKCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_EIC_FREQUENCY
 * \brief EIC's Clock frequency
 */
#ifndef CONF_GCLK_EIC_FREQUENCY
#    define CONF_GCLK_EIC_FREQUENCY 8000000
#endif


// <y> ADC Clock Source
// <id> adc_gclk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for ADC.
#ifndef CONF_GCLK_ADC_SRC
#    define CONF_GCLK_ADC_SRC GCLK_CLKCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_ADC_FREQUENCY
 * \brief ADC's Clock frequency
 */
#ifndef CONF_GCLK_ADC_FREQUENCY
#    define CONF_GCLK_ADC_FREQUENCY 8000000
#endif

/**
 * \def CONF_CPU_FREQUENCY
 * \brief CPU's Clock frequency
 */
#ifndef CONF_CPU_FREQUENCY
#define CONF_CPU_FREQUENCY 8000000
#endif


// <y> USB Clock Source
// <id> usb_gclk_selection

// <GCLK_CLKCTRL_GEN_GCLK0_Val"> Generic clock generator 0

// <GCLK_CLKCTRL_GEN_GCLK1_Val"> Generic clock generator 1

// <GCLK_CLKCTRL_GEN_GCLK2_Val"> Generic clock generator 2

// <GCLK_CLKCTRL_GEN_GCLK3_Val"> Generic clock generator 3

// <GCLK_CLKCTRL_GEN_GCLK4_Val"> Generic clock generator 4

// <GCLK_CLKCTRL_GEN_GCLK5_Val"> Generic clock generator 5

// <GCLK_CLKCTRL_GEN_GCLK6_Val"> Generic clock generator 6

// <GCLK_CLKCTRL_GEN_GCLK7_Val"> Generic clock generator 7

// <i> Select the clock source for USB.
#ifndef CONF_GCLK_USB_SRC
#    define CONF_GCLK_USB_SRC GCLK_CLKCTRL_GEN_GCLK0_Val
#endif

/**
 * \def CONF_GCLK_USB_FREQUENCY
 * \brief USB's Clock frequency
 */
#ifndef CONF_GCLK_USB_FREQUENCY
#    define CONF_GCLK_USB_FREQUENCY 8000000
#endif


// <<< end of configuration section >>>

#endif // PERIPHERAL_GCLK_CONFIG_H
