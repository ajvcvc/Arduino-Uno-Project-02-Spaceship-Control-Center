# Arduino-Uno-Project-02-Spaceship-Control-Center

**Goal:**  
Explore **digital inputs and outputs**, write a **first Arduino program**, and learn how to use **variables**.  

In this project, I create a small “control panel” with switches and LEDs.  
A green LED stays lit while the system is in standby mode.  
When the button is pressed, the Arduino receives a digital signal — the green LED turns off, and two red LEDs start blinking alternately.

---

##  Components

- Arduino Uno  
- Breadboard  
- 1 push-button switch  
- 3 LEDs (1 green, 2 red)  
- 3 resistors (current limiting)  
- Jumper wires  

---

##  Circuit Description

- **Pin 2** → Input from the push-button switch  
- **Pins 3, 4, 5** → Outputs controlling the LEDs  
- The button connects to +5 V through a pull-down resistor (or uses Arduino’s internal pull-down logic).  
- When the button is **not pressed**, the green LED is **on**.  
- When the button is **pressed**, the green LED turns **off**, and the two red LEDs **blink alternately**.

---

## Arduino Code

```cpp
int switchState = 0;

void setup() {
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(2, INPUT);
}

void loop() {
  switchState = digitalRead(2);

  if (switchState == LOW) {
    // switch is off
    digitalWrite(3, HIGH);   // green LED ON
    digitalWrite(4, LOW);    // red LED OFF
    digitalWrite(5, LOW);    // red LED OFF
  } 
  else {
    // switch is on
    digitalWrite(3, LOW);    // green LED OFF
    digitalWrite(4, LOW);    // red LED OFF
    digitalWrite(5, HIGH);   // red LED ON
    delay(250);              // wait 250ms
    digitalWrite(4, HIGH);   // switch red LEDs
    digitalWrite(5, LOW);
    delay(250);              // wait 250ms
  }
}
