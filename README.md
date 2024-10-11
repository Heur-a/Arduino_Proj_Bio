# Arduino Project: Gas and Temperature Meter

This project implements a system to measure ozone (O3) concentration and temperature using an Arduino. It uses various classes to organize the logic, including sensor reading, data publishing via Bluetooth Low Energy (BLE), and LED management.

## Table of Contents

- [Arduino Project: Gas and Temperature Meter](#arduino-project-gas-and-temperature-meter)
  - [Table of Contents](#table-of-contents)
  - [Requirements](#requirements)
  - [Project Setup](#project-setup)
  - [Classes](#classes)
    - [LED](#led)
      - [Methods:](#methods)
    - [Meter](#meter)
      - [Methods:](#methods-1)
    - [Publisher](#publisher)
      - [Methods:](#methods-2)
    - [SerialPort](#serialport)
      - [Methods:](#methods-3)
    - [EmitterService](#emitterservice)
      - [Methods:](#methods-4)
  - [Usage](#usage)
  - [Contributions](#contributions)
  - [License](#license)

## Requirements

- *Hardware*:
  - Arduino (any compatible model)
  - Ozone sensor
  - Temperature sensor (optional)
  - BLE module
  - LED (optional)

- *Software*:
  - Arduino IDE
  - BLE library (depending on the module used)

## Project Setup

1. *Connect the Sensors*: Make sure to connect the ozone sensor and the temperature sensor to the appropriate pins on your Arduino.
2. *Set up the BLE Module*: Connect the BLE module and verify that it is properly configured to communicate with the Arduino.
3. *Install Libraries*: Ensure that you have installed all the necessary libraries for BLE and any other required by the sensors.

## Classes

### LED
This class manages the control of an LED connected to the Arduino. It includes methods to turn it on, off, toggle its state, and make it blink for a specific duration.

#### Methods:
- turnOn(): Turns on the LED.
- turnOff(): Turns off the LED.
- toggle(): Changes the state of the LED.
- blink(long duration): Turns on the LED for a set duration.

### Meter
This class handles reading the values from the gas and temperature sensors.

#### Methods:
- startMeter(): Configures the pins for the sensors.
- measureGas(): Reads the ozone concentration and returns the calibrated value in ppm.
- measureTemperature(): Returns a sample temperature (to be modified according to the sensor used).

### Publisher
This class handles publishing the measurement data through the BLE module.

#### Methods:
- turnOnEmitter(): Activates the BLE emitter.
- publishCO2(double co2Value, uint8_t counter, long waitTime): Publishes CO2 data.
- publishTemperature(int16_t temperatureValue, uint8_t counter, long waitTime): Publishes temperature data.

### SerialPort
This class allows communication through the serial port.

#### Methods:
- waitAvailable(): Waits for the serial port to be available.
- write(T message): Sends a message through the serial port.

### EmitterService
This class manages the BLE service and related characteristics.

#### Methods:
- activateService(): Activates the BLE service and its characteristics.
- addCharacteristic(Characteristic& char): Adds a characteristic to the service.

## Usage

1. Upload the code to your Arduino using the Arduino IDE.
2. Open the serial port to view real-time measurements.
3. Make sure the BLE module is powered on and functioning.
4. Observe the ozone and temperature readings in the serial monitor.

## Contributions

Contributions are welcome. If you wish to contribute, please fork the repository and send a pull request.

## License

This project is licensed under the GNU license. For more details, check the LICENSE file.

Made with :heart: by Àlex Escrivà Caravaca.
