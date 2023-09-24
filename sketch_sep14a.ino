#define PIN_LED 7
unsigned int cnt;
unsigned int toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT);
  Serial.begin(115200); // Initialize serial port
  while (!Serial) {
    ;// wait for serial port to connect.
  }
  digitalWrite(PIN_LED, 0);
  delay(1000);
  cnt = 0;
  toggle = 1;
}

void loop() {
  while(cnt < 5) {
    cnt++;
    digitalWrite(PIN_LED, toggle);
    toggle = !toggle;
    delay(100);
    digitalWrite(PIN_LED, toggle);
    toggle = !toggle;
    delay(100);
    if(cnt ==5) {
      break;
    }
  }
  digitalWrite(PIN_LED, 1);

  while(1);
}

