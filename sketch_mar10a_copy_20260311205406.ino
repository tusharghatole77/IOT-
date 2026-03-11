//this is my first code
#define my_led 7 //global decleration , LED pin no 7

void setup() {
  // put your setup code here, to run once:
 pinMode(my_led, OUTPUT);
}
void loop() {
  // put your main code here, to run repeatedly:
  digitalwrite(my_led, HIGH);

}
