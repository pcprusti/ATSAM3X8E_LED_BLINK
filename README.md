# LED BLINK on ATSAM3X8E MCU
The LED Blink Demo on the ATSAM3X8E microcontroller serves as a foundational exercise for embedded developers working with ARM Cortex-M3 architecture. 
This demo illustrates how to configure GPIO pins and implement timing control to toggle an LED at regular intervals—typically using either delay loops. 
It's often the first step in verifying toolchain setup, clock configuration, and basic peripheral access on development boards like the Arduino Due, which is based on the ATSAM3X8E.

```
+---------------------------+
|        System init        |
| - Enable PMC for PIOB     |
| - Set clock (F_CPU)       |
+------------+--------------+
             |
             v
+---------------------------+
|   Configure GPIO output   |
| - PB27 (LED) as output    |
| - PIO_OER        |
+------------+--------------+
             |
             v
+---------------------------+
|        Main loop          |
+------------+--------------+
             |
             v                   
+---------------------------+    
| LED ON (PIO_SODR)         |    
+------------+--------------+    
             |                   
             v
+---------------------------+
| software_delay(ms)        |
| - Busy-wait loop          |
| - Calibrated to F_CPU     |
+------------+--------------+
             |
             v
+---------------------------+
| LED OFF (PIO_CODR)        |
+------------+--------------+
             |
             v
+---------------------------+
| software_delay(ms)        |
+------------+--------------+
             |
             +------------------> (repeat)
```

By successfully running this demo, developers confirm that:

The microcontroller is properly powered and programmed

* GPIO registers are accessible and functioning

* Timing mechanisms (e.g. delay functions) are correctly calibrated

* This simple yet essential project lays the groundwork for more advanced applications such as sensor interfacing, real-time control, and multitasking systems.

 # Platform: Arduino Due / Microchip Studio
