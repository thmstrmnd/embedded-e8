## ASSEMBLY E8
**An open source IoT hardware integration project that extends the capabilities of ESP826 with components that are ready to buy in the market. As a result, fast prototyping and independent development is achieved.**

### Table of Contents
1. Mission
2. General 
3. Development Principles
3. Bill of Materials
4. Software Used
5. Fundamentals of Electronics
6. Layman's Diagram

### Mission
The mission of this project is to be a gateway of IoT education for the young, enthusiasts or professionals and to accelerate adoption of the IoT technology in the Philippines in private and business sectors to improve productivity.

### General 
ESP8266 is truly impressive microcontroller because of its low cost and small form factor making IoT truly possible to be democratized. However, there are two major challenges of using ESP8266. The first one is lack of analog to digital (ADC) pins, hence by default only one sensor can be used. The second one is it's base voltage 3.3 Volts is not enough to trigger relays. Though there are sensors and relays that are rated 3.3V, they are not commonly available in the market. The most common ones are rated 5V. It is the intention of this project to solve these problems consolidate it into one integrated solution. 

We will also focus on a comprehensive documentation so that majority of the users will easily comprehend the technical aspects. This documentation is expected to be updated frequently. 

There will be 2 types of build. First, the breadboard version and second, the prototyping PCB version. Take note that we will not design nor etch a PCB board. 

The sequel of this project is called Cloud-E8 where you can now hook this up on the web. You can track your sensor data realtime, control your devices in the field and save these data on a database. 

### Development Principles
Two main principles of this build: 
1. Quick and easy to understand 
2. Quick and easy to deploy

The build is modularized into 4 parts:
1. The microcontroller and the safety bus
2. The 5v-3.3V input/output pins
3. The Analog Pins for sensors 
4. The digital outputs and PWMs 

### Bill of Materials
#### For Breadboard Setup 
1. WeMos D1 Mini | Qty 1 | https://wiki.wemos.cc/products:d1:d1_mini
2. Multiplexer | Qty 1 | https://learn.sparkfun.com/tutorials/multiplexer-breakout-hookup-guide
3. Level Converter | Qty 1 | https://learn.sparkfun.com/tutorials/bi-directional-logic-level-converter-hookup-guide
4. Transistor Arrays | Qty 2 | https://www.mouser.com/ds/2/408/ULN2004APG_datasheet_en_20101203-1135705.pdf
5. Half-sized Breadboard | Qty 3 |
6. LEDs Blue and Green | Qty 1 each
#### For Prototype PCB
1. WeMos D1 Mini, Multiplexer, Level Converter, Transistor Arrays, LEDs Blue and Green
2. Stand-off | Qty 6

### Software Tools
1. Arduino IDE (Free) - for writing ESP codes
2. DraftSight (Free) - for drawing schematics
3. Linux Mint (Free) - desktop OS
4. Sketchup (Free) - for 3D Modelling
