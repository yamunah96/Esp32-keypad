#include <Keypad.h>
#define row_num 4
#define col_num 4

char keys[row_num][col_num]={
  { '1', '2', '3', 'A' },
  { '4', '5', '6', 'B' },
  { '7', '8', '9', 'C' },
  { '*', '0', '#', 'D' }
};

byte row_pins[row_num]={19,18,5,17};
byte col_pins[col_num]={16,14,2,15};

String password="11111";
String input="";

Keypad mykeypad=Keypad(makeKeymap(keys),row_pins,col_pins,row_num,col_num);
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Serial.print("Enter password:  ");
  
}

void loop() {
  // get keys
  char key= mykeypad.getKey();
  // Serial.println(key);
  if(key){
    // if '#' pressesd, check password
    if(key == '#'){
      Serial.println();
        if(input.compareTo(password) == 0){
          Serial.println("Access granted, welcome!...");
          while(true);
        }
        else{
          Serial.println("Access denined...");
          Serial.print("Try again!....");
        }
        input="";

    }
    else if(key == '*'){
        input ="";
        Serial.println();
        Serial.print("Password cleared, enter again:  ");
    }
    else{
      input.concat(key);
      Serial.print(key);
    }
  }
}

