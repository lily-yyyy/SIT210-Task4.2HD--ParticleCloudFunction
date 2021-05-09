int red_led = A3;
int green_led = A2;
int blue_led = A0;

void setup()
{
   pinMode(red_led, OUTPUT);
   pinMode(green_led, OUTPUT);
   pinMode(blue_led, OUTPUT);
   Particle.function("led",ledToggle);
   digitalWrite(red_led, LOW);
   digitalWrite(green_led, LOW);
   digitalWrite(blue_led, LOW);
}
void loop()
{
}

int ledToggle(String command) 
{
    if (command=="on1") 
    {
        digitalWrite(red_led, HIGH);
        digitalWrite(green_led, LOW);
        digitalWrite(blue_led, LOW);
        return 1;
    }
    else if (command=="on2") 
    {
        digitalWrite(red_led, LOW);
        digitalWrite(green_led , HIGH);
        digitalWrite(blue_led , LOW);
        return 0;
    }
    else if (command=="on3") 
    {
        digitalWrite(red_led, LOW);
        digitalWrite(green_led , LOW);
        digitalWrite(blue_led , HIGH);
        return 0;
    }
    else
    {
        
        return -1;
    }
}