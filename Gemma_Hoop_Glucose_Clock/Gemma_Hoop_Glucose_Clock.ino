// This is a beta-stage example of how to visualize glucose data on a Gemma Hoop LED ring. 
// Writen By Etiowo Usoro 


#include <Adafruit_NeoPixel.h>

#define PIN       4
#define NUM_LEDS 24

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(NUM_LEDS, PIN);

// Begin Colors Dictionary
uint32_t AntiqueWhite  = 0xFAEBD7;
uint32_t Aqua  = 0x00FFFF;
uint32_t Aquamarine  = 0x7FFFD4;
uint32_t Azure  = 0xF0FFFF;
uint32_t Beige  = 0xF5F5DC;
uint32_t Bisque  = 0xFFE4C4;
uint32_t Black  = 0x000000;
uint32_t BlanchedAlmond  = 0xFFEBCD;
uint32_t Blue  = 0x0000FF;
uint32_t BlueViolet  = 0x8A2BE2;
uint32_t Brown  = 0xA52A2A;
uint32_t Burlywood  = 0xDEB887;
uint32_t CadetBlue  = 0x5F9EA0;
uint32_t Chartreuse  = 0x7FFF00;
uint32_t Chocolate  = 0xD2691E;
uint32_t Coral  = 0xFF7F50;
uint32_t CornflowerBlue  = 0x6495ED;
uint32_t Cornsilk  = 0xFFF8DC;
uint32_t Crimson  = 0xDC143C;
uint32_t Cyan  = 0x00FFFF;
uint32_t DarkBlue  = 0x00008B;
uint32_t DarkCyan  = 0x008B8B;
uint32_t DarkGoldenrod  = 0xB8860B;
uint32_t DarkGray  = 0xA9A9A9;
uint32_t DarkGreen  = 0x006400;
uint32_t DarkKhaki  = 0xBDB76B;
uint32_t DarkMagenta  = 0x8B008B;
uint32_t DarkOliveGreen  = 0x556B2F;
uint32_t DarkOrange  = 0xFF8C00;
uint32_t DarkOrchid  = 0x9932CC;
uint32_t DarkRed  = 0x8B0000;
uint32_t DarkSalmon  = 0xE9967A;
uint32_t DarkSeaGreen  = 0x8FBC8F;
uint32_t DarkSlateBlue  = 0x483D8B;
uint32_t DarkSlateGray  = 0x2F4F4F;
uint32_t DarkTurquoise  = 0x00CED1;
uint32_t DarkViolet  = 0x9400D3;
uint32_t DeepPink  = 0xFF1493;
uint32_t DeepSkyBlue  = 0x00BFFF;
uint32_t DimGray  = 0x696969;
uint32_t DodgerBlue  = 0x1E90FF;
uint32_t FireBrick  = 0xB22222;
uint32_t FloralWhite  = 0xFFFAF0;
uint32_t ForestGreen  = 0x228B22;
uint32_t Fuchsia  = 0xFF00FF;
uint32_t Gainsboro  = 0xDCDCDC;
uint32_t GhostWhite  = 0xF8F8FF;
uint32_t Gold  = 0xFFD700;
uint32_t Goldenrod  = 0xDAA520;
uint32_t Gray  = 0x808080;
uint32_t Green  = 0x008000;
uint32_t GreenYellow  = 0xADFF2F;
uint32_t Honeydew  = 0xF0FFF0;
uint32_t HotPink  = 0xFF69B4;
uint32_t IndianRed  = 0xCD5C5C;
uint32_t Indigo  = 0x4B0082;
uint32_t Ivory  = 0xFFFFF0;
uint32_t Khaki  = 0xF0E68C;
uint32_t Lavender  = 0xE6E6FA;
uint32_t LavenderBlush  = 0xFFF0F5;
uint32_t LawnGreen  = 0x7CFC00;
uint32_t LemonChiffon  = 0xFFFACD;
uint32_t LightBlue  = 0xADD8E6;
uint32_t LightCoral  = 0xF08080;
uint32_t LightCyan  = 0xE0FFFF;
uint32_t LightGoldenrodYellow  = 0xFAFAD2;
uint32_t LightGreen  = 0x90EE90;
uint32_t LightGrey  = 0xD3D3D3;
uint32_t LightPink  = 0xFFB6C1;
uint32_t LightSalmon  = 0xFFA07A;
uint32_t LightSeaGreen  = 0x20B2AA;
uint32_t LightSkyBlue  = 0x87CEFA;
uint32_t LightSlateGray  = 0x778899;
uint32_t LightSteelBlue  = 0xB0C4DE;
uint32_t LightYellow  = 0xFFFFE0;
uint32_t Lime  = 0x00FF00;
uint32_t LimeGreen  = 0x32CD32;
uint32_t Linen  = 0xFAF0E6;
uint32_t Magenta  = 0xFF00FF;
uint32_t Maroon  = 0x800000;
uint32_t MediumAquamarine  = 0x66CDAA;
uint32_t MediumBlue  = 0x0000CD;
uint32_t MediumOrchid  = 0xBA55D3;
uint32_t MediumPurple  = 0x9370DB;
uint32_t MediumSeaGreen  = 0x3CB371;
uint32_t MediumSlateBlue  = 0x7B68EE;
uint32_t MediumSpringGreen  = 0x00FA9A;
uint32_t MediumTurquoise  = 0x48D1CC;
uint32_t MediumVioletRed  = 0xC71585;
uint32_t MidnightBlue  = 0x191970;
uint32_t MintCream  = 0xF5FFFA;
uint32_t MistyRose  = 0xFFE4E1;
uint32_t Moccasin  = 0xFFE4B5;
uint32_t NavajoWhite  = 0xFFDEAD;
uint32_t Navy  = 0x000080;
uint32_t OldLace  = 0xFDF5E6;
uint32_t Olive  = 0x808000;
uint32_t OliveDrab  = 0x6B8E23;
uint32_t Orange  = 0xFFA500;
uint32_t OrangeRed  = 0xFF4500;
uint32_t Orchid  = 0xDA70D6;
uint32_t PaleGoldenrod  = 0xEEE8AA;
uint32_t PaleGreen  = 0x98FB98;
uint32_t PaleTurquoise  = 0xAFEEEE;
uint32_t PaleVioletRed  = 0xDB7093;
uint32_t PapayaWhip  = 0xFFEFD5;
uint32_t PeachPuff  = 0xFFDAB9;
uint32_t Peru  = 0xCD853F;
uint32_t Pink  = 0xFFC0CB;
uint32_t Plum  = 0xDDA0DD;
uint32_t PowderBlue  = 0xB0E0E6;
uint32_t Purple  = 0x800080;
uint32_t Red  = 0xFF0000;
uint32_t RosyBrown  = 0xBC8F8F;
uint32_t RoyalBlue  = 0x4169E1;
uint32_t SaddleBrown  = 0x8B4513;
uint32_t Salmon  = 0xFA8072;
uint32_t SandyBrown  = 0xF4A460;
uint32_t SeaGreen  = 0x2E8B57;
uint32_t Seashell  = 0xFFF5EE;
uint32_t Sienna  = 0xA0522D;
uint32_t Silver  = 0xC0C0C0;
uint32_t SkyBlue  = 0x87CEEB;
uint32_t SlateBlue  = 0x6A5ACD;
uint32_t SlateGray  = 0x708090;
uint32_t Snow  = 0xFFFAFA;
uint32_t SpringGreen  = 0x00FF7F;
uint32_t SteelBlue  = 0x4682B4;
uint32_t Tan  = 0xD2B48C;
uint32_t Teal  = 0x008080;
uint32_t Thistle  = 0xD8BFD8;
uint32_t Tomato  = 0xFF6347;
uint32_t Turquoise  = 0x40E0D0;
uint32_t Violet  = 0xEE82EE;
uint32_t Wheat  = 0xF5DEB3;
uint32_t White  = 0xFFFFFF;
uint32_t WhiteSmoke  = 0xF5F5F5;
uint32_t Yellow  = 0xFFFF00;
uint32_t YellowGreen  = 0x9ACD32;
// End  color dictionary

uint8_t  mode   = 0,              // Current animation effect
         offset = 0;              // Position of spinner animation

uint32_t color  = Blue;           // Starting color
uint32_t hourcolor  = OrangeRed;  // hour hand start

int      hour =  1;               // Time of day to cycle through data
int      AmPm =  1;               // am/pm indicator
int      dif = 0;
int      amount = 1;              // number of LEDs to light up for rotation animation
int      rotation = 0;            // 1 is counterclockwise, 0 is static, -1 is clockwise
int      brightness = 20;        // value for pulse animation
int      pulse = 1;               // increment/decrement for brightness (pulse animation)
uint32_t prevTime;                // Time of last animation mode switch


int myData[] = {168.25, 141.583, 123.5, 128.5, 151.417, 191.667, 243.545, 283.417, 294.571, 283.333, 168.167, 77, 106.417, 90.833, 72.769, 113.5, 137.667, 62.25, 106.5, 100.5, 105.167, 90.083, 101.333, 103.083}; 

void setup() {
  pixels.begin();
  pixels.setBrightness(60); // ~1/3 brightness
  prevTime = millis();      // Starting time
  
}


void loop() {
  uint8_t  i;
  uint32_t t;

  switch(mode) {
 
   case 0: // Animations
      if (brightness == 10)  pulse = -1;
      if (brightness == 200) pulse = 1;
      brightness = brightness - pulse;

    // [Glucose rotation start]
    for(i=0; i<NUM_LEDS; i++) {             // For each LED...

      uint32_t c = 0;                       // Assume pixel will be "off" color
      
      if(((offset + i) & 7) < amount) {     // For each 8 pixels, 2 will be...
        c = color;                          // ...assigned the current color
        if(amount==1){                      // if no change in glucose, make led pulse (as opposed to rotating)
          // uint8_t r = color >> 16;
          // uint8_t g = color >> 8;
          // uint8_t b = color;
          // if(r>1) r = r - brightness;
          // if(g>1) g = g - brightness;
          // if(b>1) b = b - brightness;
          // uint32_t c2 = (uint32_t)r << 16 | (uint32_t)g << 8 | (uint32_t)b;
          // // color=c;
          // c=c2;
          // // uint32_t color = (r << 16) | (g << 8) | b;
          delay(5);
          // color = Red;
        }
      }
      pixels.setPixelColor(i, c);           // Set color of pixel 'i'
    }

      pixels.setPixelColor(0, hourcolor);
      pixels.setPixelColor((hour-1)*2, hourcolor);
    // [clock face end]
    pixels.show();                 

    if (abs(dif)<15) break;
    
    delay(150*(log(150) - log(abs(dif)+1)));                     // 50 millisecond delay
    offset = offset + rotation;       // Shift animation by 1 pixel on next frame
    break;

    
  }

  t = millis();                       // Current time in milliseconds
  
  if((t - prevTime) > 3000) {         // Every few seconds...
    mode++;                           // Advance to next animation mode
    hour++;
    AmPm++;
    brightness = 255;
    if(AmPm==13) {                    // Convert colors from Am to PM | reset hours
      hour       = 1;
      hourcolor  = Green;             // PM Hand color 
    }
    if(AmPm>24) {
    AmPm = 1;
    hour = 1;
    hourcolor  = OrangeRed;           // AM hand color

    }
    if(mode >= 1) {                   // End of modes?
      mode = 0;                       // Start over from beginning
      int gluc = myData[AmPm-1];
      if (gluc<66) {
        color = Red;                  // Low color      - Red
        }else if (gluc<160) {
          color = Blue;               // In range color - Blue 
        }else if (gluc>=160) {
          color = 0xD43BC5;           // High color     - Purple
        }
       
      if (AmPm==1) {                  // Calculate amount of change          
        dif = 0;
      } else{
        dif = myData[AmPm-1] - myData[AmPm-2];
      }
        if (abs(dif) >= 30) {         // rate of change (arrow) calculations 
          amount = 3; 
        } else if (abs(dif)>15) {
          amount = 2;
        } else {
          amount = 1;               
        }
        if (dif<0) {                // Counterclockwise, Static, or Clockwise direction
          rotation = 1;             
        } else if (dif==0) {
          rotation = 0;             
        } else if (dif>0) {
          rotation = -1;            
        } 
          
            
       
    

    }
    pixels.clear();                // Set all pixels to 'off' state
    prevTime = t;                  // Record the time of the last mode change
  }
}
