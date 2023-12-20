<img src="https://github.com/yamunah96/Esp32-keypad/blob/main/keypad.PNG" width="300" height="300">

<h4>HOW KEYPADS WORK</h4>
<p>1. First, when no buttons are pressed, all of the column pins are held HIGH, and all of the row pins are held LOW</p>
<img src="https://www.circuitbasics.com/wp-content/uploads/2017/05/Arduino-Keypad-Tutorial-How-the-Keypad-Works-STEP-1.png" width="200" height="200">
<p>2. When a button is pressed, the column pin is pulled LOW since the current from the HIGH column flows to the LOW row pin:</p>
<img src="https://www.circuitbasics.com/wp-content/uploads/2017/05/Arduino-Keypad-Tutorial-How-the-Keypad-Works-STEP-2.png" width="200" height="200">
<p>3. The Arduino now knows which column the button is in, so it just needs to find the row the button is in. It does this by switching each one of the rows pins HIGH, and at the same time reading all of the column pins to detect which column pin returns to HIGH:</p>
<img src="https://www.circuitbasics.com/wp-content/uploads/2017/05/Arduino-Keypad-Tutorial-How-the-Keypad-Works-STEP-3.png" width="200" height="200">
<p>4. When the column pin goes HIGH again, the Arduino has found the row pin that is connected to the button:</p>
<img src="https://www.circuitbasics.com/wp-content/uploads/2017/05/Arduino-Keypad-Tutorial-How-the-Keypad-Works-STEP-4.png"  width="200" height="200">
