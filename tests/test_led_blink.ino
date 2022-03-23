const int       ledPin = LED_BUILTIN;
const long      interval = 1000;

unsigned long   previousMillis = 0;
int             ledState = LOW;



void setup() {
    pinMode(ledPin, OUTPUT);
}

void loop() {
    unsigned long currentMillis = millis();

    if (currentMillis - previousMillis >= interval) {

        previousMillis = currentMillis;

        if (ledState == LOW) {
            ledState = HIGH;
        }
        else {
            ledState = LOW;
        }

        digitalWrite(ledPin, ledState);
    }
}
