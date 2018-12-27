## ASSEMBLY E8
**An open source IoT hardware integration project that extends the capabilities of ESP826 with components that are ready to buy in the market. As a result, fast prototyping and independent development is achieved.**

## Table of Contents
1. [Mission](#mission)
2. [General](#general) 
3. [Development Principles](#devprinciples)
3. [Bill of Materials](#bom)
4. [Software Tools](#tools)
5. [Connection Diagram](#connection)
6. [Microcontroller Setup and Code Upload](#setup)
7. [Final Assembly and Quick Reference](#final)
8. More Technical Notes* 
9. Use Cases*

## Mission <a name="mission"></a>
The mission of this project is to be a gateway of IoT education for the young, enthusiasts or professionals and to accelerate adoption of the IoT technology in the Philippines in private and business sectors to improve productivity.

## General <a name="general"></a>
ESP8266 is truly impressive microcontroller because of its low cost and small form factor making IoT truly possible to be democratized. However, there are two major challenges of using ESP8266. The first one is lack of analog to digital (ADC) pins, hence by default only one sensor can be used. The second one is it's base voltage 3.3 Volts is not enough to trigger relays. Though there are sensors and relays that are rated 3.3V, they are not commonly available in the market. The most common ones are rated 5V. It is the intention of this project to solve these problems consolidate it into one integrated solution. 

We will also focus on a comprehensive documentation so that majority of the users will easily comprehend the technical aspects. This documentation is expected to be updated frequently. 

There will be 2 types of build. First, the breadboard version and second, the prototyping PCB version. Take note that we will not design nor etch a PCB board. 

The sequel of this project is called Cloud-E8 where you can now hook this up on the web. You can track your sensor data realtime, control your devices in the field and save these data on a database. 

## Development Principles <a name="devprinciples"></a>
Two main principles of this build: 
1. Quick and easy to understand 
2. Quick and easy to deploy

The build is modularized into 4 parts:
1. The microcontroller and the safety bus
2. The 5v-3.3V input/output pins
3. The Analog Pins for sensors 
4. The digital outputs and PWMs 

## Bill of Materials <a name="bom"></a>
### For Breadboard Setup 
1. WeMos D1 Mini | Qty 1 | https://wiki.wemos.cc/products:d1:d1_mini
2. Multiplexer | Qty 1 | https://learn.sparkfun.com/tutorials/multiplexer-breakout-hookup-guide
3. Level Converter | Qty 1 | https://learn.sparkfun.com/tutorials/bi-directional-logic-level-converter-hookup-guide
4. ULN2003 or ULN2004APG | Qty 1 | https://www.mouser.com/ds/2/408/ULN2004APG_datasheet_en_20101203-1135705.pdf
5. Half-sized Breadboard | Qty 3 | 
6. 1N4001 Diode | Qty 9 |  
7. Terminal Blocks | Qty 7 Pairs |

All these components are available locally. You can buy them in Lazada as well. 

### For Prototype PCB 
Note: To follow after few months.

## Software Tools <a name="tools"></a>
1. Arduino IDE (Free) - for writing and uploading ESP codes
2. DraftSight (Free) - for drawing schematics
3. Linux Mint (Free) - desktop OS

## Connection Diagram <a name="connection"></a>
Now you can start wiring components. Follow this [link](https://github.com/IoTPH/Assembly-E8/tree/master/ConnectionDiagram) for your guide. 

## Microcontroller Setup and Code Upload <a name="setup"></a>
1. Download Arduino IDE: https://www.arduino.cc/en/Main/Software
2. Open the IDE and click: File -> Preferences -> Additional Boards Manager --> Paste this link: http://arduino.esp8266.com/stable/package_esp8266com_index.json
3. Then click: Tools -> Board -> Board Manager -> search ESP8266 Community, then click install
4. Then click again the Tools -> Board -> NodeMCU 1.0 (ESP12E Module)
5. Then click again the Tools -> PORT -> USB0 (or anything that works)
6. The click Sketch -> Upload | Note: This procedure uploads the bare minimum code and checks whether there are potential errors. There are two common errors. The first one is on the PORT setting. Go back to Tools -> PORT then choose the right one. The second one is the admin permission error. For linux users, here's the reference on how to fix it: https://tinyurl.com/yamurc2q
7. By now, you should be ready to make your sketch (code). Follow this [link](https://github.com/IoTPH/Assembly-E8/tree/master/WorkableCodeSketches). 

## Final Assembly and Quick Reference <a name="final"></a>
### Connection Diagram
![Connection Diagram](AE8-diagram.png)
### Breadboard Layout
![Breadboard Layout](AE8-breadboard.jpg)
