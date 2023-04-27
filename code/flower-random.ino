// ---------- PARAMETER SETTING ---------- \\
// flower parameter // number of LEDs on petal
const byte nleds = 20;
const int ton = 33;

// decalare variables
byte i = 1;
byte j = 1;

// ---------- SETUP CODE ---------- \\
// the code below is performed only once at the beginning before the main loop
void setup(){
  // set all pins to inputs, all LEDs OFF
  DDRB &= ~(1 << PB0);
  DDRB &= ~(1 << PB1);
  DDRB &= ~(1 << PB2);
  DDRB &= ~(1 << PB3);
  DDRB &= ~(1 << PB4);
}

// ---------- LED FUNCTION ---------- \\
// function to turn ON a single LED (and turn OFF all the other ones)
// this part should not be changes, it is related to the hardware
void setLED(byte ledNum){
  if(ledNum == 0){
    // All LEDs OFF
    DDRB &= ~(1 << PB0);
    DDRB &= ~(1 << PB1);
    DDRB &= ~(1 << PB2);
    DDRB &= ~(1 << PB3);
    DDRB &= ~(1 << PB4);
  }
  if(ledNum == 1){
    // PB0 -> PB1
    DDRB |= (1 << PB0);
    DDRB |= (1 << PB1);
    DDRB &= ~(1 << PB2);
    DDRB &= ~(1 << PB3);
    DDRB &= ~(1 << PB4);
    
    PORTB |= (1 << PB0);            
    PORTB &= ~(1 << PB1);
  }
  if(ledNum == 2){
    // PB1 -> PB2
    DDRB |= (1 << PB1);
    DDRB |= (1 << PB2);
    DDRB &= ~(1 << PB0);
    DDRB &= ~(1 << PB3);
    DDRB &= ~(1 << PB4);
        
    PORTB |= (1 << PB1);
    PORTB &= ~(1 << PB2);
  }
  if(ledNum == 3){
    // PB2 -> PB1
    DDRB |= (1 << PB2);
    DDRB |= (1 << PB1);
    DDRB &= ~(1 << PB0);
    DDRB &= ~(1 << PB3);
    DDRB &= ~(1 << PB4);
        
    PORTB |= (1 << PB2);   
    PORTB &= ~(1 << PB1);
  }
  if(ledNum == 4){
    // PB2 -> PB3
    DDRB |= (1 << PB2);
    DDRB |= (1 << PB3);
    DDRB &= ~(1 << PB1);
    DDRB &= ~(1 << PB0);
    DDRB &= ~(1 << PB4);
        
    PORTB |= (1 << PB2);   
    PORTB &= ~(1 << PB3);
  }
  if(ledNum == 5){
    // PB3 -> PB2
    DDRB |= (1 << PB3);
    DDRB |= (1 << PB2);
    DDRB &= ~(1 << PB1);
    DDRB &= ~(1 << PB0);
    DDRB &= ~(1 << PB4); 
       
    PORTB |= (1 << PB3);    
    PORTB &= ~(1 << PB2);
  }
  if(ledNum == 6){
    // PB1 -> PB0
    DDRB |= (1 << PB1);
    DDRB |= (1 << PB0);
    DDRB &= ~(1 << PB2);
    DDRB &= ~(1 << PB3);
    DDRB &= ~(1 << PB4);
        
    PORTB |= (1 << PB1);
    PORTB &= ~(1 << PB0);
  }
  if(ledNum == 7){
    // PB2 -> PB0
    DDRB |= (1 << PB2);
    DDRB |= (1 << PB0);
    DDRB &= ~(1 << PB1);
    DDRB &= ~(1 << PB3);
    DDRB &= ~(1 << PB4);
     
    PORTB |= (1 << PB2);   
    PORTB &= ~(1 << PB0);
  }
  if(ledNum == 8){
    // PB0 -> PB3
    DDRB |= (1 << PB0);
    DDRB |= (1 << PB3);
    DDRB &= ~(1 << PB2);
    DDRB &= ~(1 << PB1);
    DDRB &= ~(1 << PB4);
    
    PORTB |= (1 << PB0);
    PORTB &= ~(1 << PB3);
  }
  if(ledNum == 9){
    // PB3 -> PB0
    DDRB |= (1 << PB3);
    DDRB |= (1 << PB0);
    DDRB &= ~(1 << PB1);
    DDRB &= ~(1 << PB2);
    DDRB &= ~(1 << PB4);
    
    PORTB |= (1 << PB3);    
    PORTB &= ~(1 << PB0);
  }
  if(ledNum == 10){
    // PB4 -> PB3
    DDRB |= (1 << PB4);
    DDRB |= (1 << PB3);
    DDRB &= ~(1 << PB1);
    DDRB &= ~(1 << PB2);
    DDRB &= ~(1 << PB0);  
      
    PORTB |= (1 << PB4); 
    PORTB &= ~(1 << PB3);
  }
  if(ledNum == 11){
    // PB0 -> PB4
    DDRB |= (1 << PB0);
    DDRB |= (1 << PB4);
    DDRB &= ~(1 << PB2);
    DDRB &= ~(1 << PB3);
    DDRB &= ~(1 << PB1);
    
    PORTB |= (1 << PB0);
    PORTB &= ~(1 << PB4);
  }
  if(ledNum == 12){
    // PB2 -> PB4
    DDRB |= (1 << PB2);
    DDRB |= (1 << PB4);
    DDRB &= ~(1 << PB1);
    DDRB &= ~(1 << PB3);
    DDRB &= ~(1 << PB0); 
       
    PORTB |= (1 << PB2);   
    PORTB &= ~(1 << PB4);
  }
  if(ledNum == 13){
    // PB0 -> PB2
    DDRB |= (1 << PB0);
    DDRB |= (1 << PB2);
    DDRB &= ~(1 << PB1);
    DDRB &= ~(1 << PB3);
    DDRB &= ~(1 << PB4);
    
    PORTB |= (1 << PB0);            
    PORTB &= ~(1 << PB2);
  }
  if(ledNum == 14){
    // PB3 -> PB1
    DDRB |= (1 << PB3);
    DDRB |= (1 << PB1);
    DDRB &= ~(1 << PB0);
    DDRB &= ~(1 << PB2);
    DDRB &= ~(1 << PB4);
        
    PORTB |= (1 << PB3);    
    PORTB &= ~(1 << PB1);
  }
  if(ledNum == 15){
    // PB3 -> PB4
    DDRB |= (1 << PB3);
    DDRB |= (1 << PB4);
    DDRB &= ~(1 << PB1);
    DDRB &= ~(1 << PB2);
    DDRB &= ~(1 << PB0); 
       
    PORTB |= (1 << PB3);    
    PORTB &= ~(1 << PB4);
  }
  if(ledNum == 16){
    // PB4 -> PB0
    DDRB |= (1 << PB4);
    DDRB |= (1 << PB0);
    DDRB &= ~(1 << PB1);
    DDRB &= ~(1 << PB2);
    DDRB &= ~(1 << PB3);
    
    PORTB |= (1 << PB4);   
    PORTB &= ~(1 << PB0);
  }
  if(ledNum == 17){
    // PB4 -> PB2
    DDRB |= (1 << PB4);
    DDRB |= (1 << PB2);
    DDRB &= ~(1 << PB1);
    DDRB &= ~(1 << PB0);
    DDRB &= ~(1 << PB3);
        
    PORTB |= (1 << PB4);   
    PORTB &= ~(1 << PB2);
  }
  if(ledNum == 18){
    // PB1 -> PB3
    DDRB |= (1 << PB1);
    DDRB |= (1 << PB3);
    DDRB &= ~(1 << PB2);
    DDRB &= ~(1 << PB0);
    DDRB &= ~(1 << PB4);
        
    PORTB |= (1 << PB1);
    PORTB &= ~(1 << PB3);
  }
  if(ledNum == 19){
    // PB1 -> PB4
    DDRB |= (1 << PB1);
    DDRB |= (1 << PB4);
    DDRB &= ~(1 << PB2);
    DDRB &= ~(1 << PB3);
    DDRB &= ~(1 << PB0);
        
    PORTB |= (1 << PB1);
    PORTB &= ~(1 << PB4);
  }
  if(ledNum == 20){
    // PB4 -> PB1
    DDRB |= (1 << PB4);
    DDRB |= (1 << PB1);
    DDRB &= ~(1 << PB0);
    DDRB &= ~(1 << PB2);
    DDRB &= ~(1 << PB3); 
       
    PORTB |= (1 << PB4);   
    PORTB &= ~(1 << PB1);
  }
}

// ---------- MAIN LOOP ---------- \\
// once the programm enters this loop, it repeats indefinitly until power-off or reset 
void loop(){

  // RANDOM LED CYCLE
  // to avoid having the same LED in a row
  while(i == j){
    i = random(nleds)+1;
  }
  setLED(i);
  delay(ton);
  setLED(0);
  j = i;
}
