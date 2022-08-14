#define nail 14
#define diodeR 13
#define diodeG 10
#define diodeY 7
int val;
//Flower watering

void setup() 
  {
  // 
  Serial.begin(9600);
  Serial.print("Good day, Master");
  pinMode(nail, INPUT);
  pinMode(diodeR, OUTPUT); 
  pinMode(diodeG, OUTPUT);
  pinMode(diodeY, OUTPUT);
 
  }
  
void loop()
{
  val = analogRead(nail);
  val = map(val, 0,102,0,102);
  val = constrain(val,0,102);
  
 if (val < 80)
    {
       Serial.println ("Huston, we have a problem!");
        //switch on lighning diode RED
        digitalWrite(diodeR,1);
        digitalWrite(diodeG,0);
    }
   else
    
       {  
        Serial.println ("Humidity level is Ok");
        //switch on lighning diode GREEN
        digitalWrite(diodeR,0);
        digitalWrite(diodeG,1);
        }
   if  (val >70&&val<90)   
        {
          digitalWrite(diodeY,1);
          Serial.println ("It's close, Pal!");
          //switch on lighning diode YELLOW
        }
     if (val<75 && val > 85);
     {
          digitalWrite(diodeY,0);  
          
     }
   
      
}
