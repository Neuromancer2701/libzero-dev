RTOS Support
============

A real-time operating system (RTOS) offers tasks, scheduling and intertask
communication for application.

When a RTOS is chosen (e.g., the FreeRTOS), the RTOS core source code is
included in the project so that the RTOS and RTOS-optimized drivers can be used
in application. The RTOS-optimized drivers are designed for RTOS and don't work
without RTOS core. Because the shared resources are not protected, it's up
to the user to protect them.

To support different RTOSes, an internal used only hal_rtos is introduced. It
works as adapter layer to support semaphore operations in the RTOS-optimized
drivers on different RTOS porting.
