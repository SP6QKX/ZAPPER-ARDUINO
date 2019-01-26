// Easy ZAPPER - Frequency generator 20Khz or 30Khz square wave using cheap ARDUINO
// An example - how easy can make a square wave generator called ZAPPER .
// Signal Output ARDUINO PORT 3 - Also you can simply steering eg. MOSFET which output will be much stronger :)
//-------------------------------------------------------------------------------------------------------------
setup() {
pinMode(3, OUTPUT);        // Output Port 3 
}
void loop() {
digitalWrite(3, HIGH); 
delayMicroseconds (21);   // For 30Khz change to 13
digitalWrite(3, LOW);
delayMicroseconds (22);   // For 30Khz change to 14
}   
//--------------------------------------------------------------------------------------------------------------
// That all folks :) .
