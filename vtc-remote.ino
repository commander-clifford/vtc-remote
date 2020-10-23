


// constants won't change. They're used here to set pin numbers:
const int button1 = 1;     // the number of the pushbutton pin, each button pin has a 10k pull up resistor on the board
const int button2 = 2;     // the number of the pushbutton pin, each button pin has a 10k pull up resistor on the board
const int ledPin =  13;      // the number of the LED pin

// variables will change:
int button1Flag = 0;
int button2Flag = 0;
int button1Pressed = 0;
int button2Pressed = 0;
int buttonState = 1; // variable for reading pushbutton status

void setup() {
  Serial.begin(9600);
  Serial.println("START UP"); // TODO: why doesn't this print??

  // initialize the LED pin as an output:
  pinMode(ledPin, OUTPUT);

  // initialize the pushbutton pin as an input:
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

void loop() {

  if (digitalRead(button1)==LOW){

    if (button1Flag==false && button1Pressed==false) {
      button1Flag=1;
      Serial.println("test 1 ->ON");
    }
    else if (button1Flag==true && button1Pressed==false) {
      button1Flag=0;
      Serial.println("test 2 ->OFF");
    }
    // This will fire while button is pressed
    button1Pressed = true;
    // Serial.println("Button is pressed");
    delay(10);
  } else {
    // This will fire while button is released
    button1Pressed = false;
    // Serial.println("Button is released");
  }












  // // read the state of the pushbutton value:
  // buttonState = digitalRead(button1);
  //
  // // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  // if (buttonState == LOW) {
  //   // turn LED on:
  //   // digitalWrite(ledPin, HIGH);
  //   Serial.println("button1");
  // } else {
  //   // turn LED off:
  //   // digitalWrite(ledPin, LOW);
  // }




  // // read the state of the pushbutton value:
  // buttonState = digitalRead(button2);
  //
  // // check if the pushbutton is pressed. If it is, the buttonState is HIGH:
  // if (buttonState == LOW) {
  //   // turn LED on:
  //   // digitalWrite(ledPin, HIGH);
  //   Serial.println("button2");
  // } else {
  //   // turn LED off:
  //   // digitalWrite(ledPin, LOW);
  // }






}
