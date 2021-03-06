# Aim
LEDs have a strict need for the right voltage and the right current. So, the correct series of resistors has to be selected by calculation.

Arduino-based device should take on any LED and measure the operation point voltage.

Information about the LED, including recommendations for a series of resistors at different source voltages should be displayed.

# Design Approach
Design consists of 5 different LEDs all working with a forward current of around 20mA. Correct set of resistors are calculated. ARduino UNO R3 takes on any LED and    measures the operation point voltage. Recommendations for a series of resistors at different source voltages is displayed. 

1. In order to meet strict voltage and current requirement of LEDs, correct series of resistors are selected using Ohm's law. 
2. 5 different voltage rating LEDs are used to show functionalities.
3. The program calculates the resistance value to be used for a particular LED to function.
4. Using switches we can read the voltage drop across the particular LED to calculate the resistor required for that particular LED.
5. Resistance values or resistance ranges is shown in LCD display with LED color or number Voltage rating and resistor value or resistance range required.
6. Led operating voltage will be 5v-R*20mA

# Compnents Required

|Components   | Quantity  |
|-------------|-----------|
|LED Green    | 1         |
|LED Red    | 1         |
|LED White    | 1         |
|LED Orange    | 1         |
|LED Blue   | 1         |
|Arduino UNO R3  | 1         |
|Bread Board   | 1         |
|Jumper Wires   | 30         |
|Switches(Tactile)    | 5         |
|Resistors 50 ohm  | 1        |
|Resistors 60 ohm  | 1        |
|Resistors 80 ohm  | 1        |
|Resistors 100 ohm  | 1        
|Resistors 150 ohm  | 1        |
