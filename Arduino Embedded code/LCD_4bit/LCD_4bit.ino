#define F_CPU 16000000UL
 
#include<avr/io.h>
 
#include<util/delay.h>
 
#include<string.h>
 
#include<stdlib.h>
 
//D4-D7 connected to D4-D7
 
 
 
#define rs PB0    //pin8
 
#define en PB1    //pin9
 
 
 
 
 
 
 
/**** Decimal Values to Display Special Characters ****/
 
unsigned int s1[]={10,21,17,17,17,10,4,0};
 
unsigned int s2[]={0,10,0,4,4,17,10,4};
 
unsigned int s3[]={0,10,0,4,4,0,14,17};
 
unsigned int s4[]={1,3,5,9,9,11,27,24};
 
unsigned int s5[]={0,17,10,17,4,0,14,17};
 
unsigned int s6[]={0,10,0,4,4,0,31,0};
 
unsigned int s7[]={10,0,4,0,14,17,17,14};
 
unsigned int s8[]={0,10,0,31,17,14,0,0};
 
/******************************************************/
 
 
 
int main()
 
{
 
                int i;
 
                DDRB = 0x03;
 
                DDRD = 0xF0;
 
               
 
                _delay_ms(200);
 
                start();
 
               
 
                while(1)
 
                {
 
                                clearScreen();
 
                                Send_A_String("Send_A_String()");
 
                                _delay_ms(100);//////
 
                                while(!(PINB & (1<<PB2))){}
 
                               
 
               
 
                                clearScreen();
 
                                cut("cut() is used to display this.");
 
                                _delay_ms(100);//////
 
                                while(!(PINB & (1<<PB2))){}
 
                               
 
                                clearScreen();
 
                                cut("Send_An_Integer");
 
                                setCursor(1,0);
 
                                Send_An_Integer(sizeof(int));
 
                                _delay_ms(100);//////
 
                                while(!(PINB & (1<<PB2))){}
 
                               
 
                               
 
                                clearScreen();
 
                                setCursor(0,0);
 
                                data('s');
 
                                setCursor(1,1);
 
                                data('e');
 
                                setCursor(0,2);
 
                                data('t');
 
                                setCursor(1,3);
 
                                data('C');
 
                                setCursor(0,4);
 
                                data('u');
 
                                setCursor(1,5);
 
                                data('r');
 
                                setCursor(0,6);
 
                                data('s');
 
                                setCursor(1,7);
 
                                data('o');
 
                                setCursor(0,8);
 
                                data('r');
 
                                setCursor(1,9);
 
                                data('(');
 
                                setCursor(0,10);
 
                                data(')');
 
                                _delay_ms(100);//////
 
                                while(!(PINB & (1<<PB2))){}
 
                               
 
                               
 
                                clearScreen();
 
                                cursor();
 
                                Send_A_String("Cursor is ON");
 
                                _delay_ms(100);//////
 
                                while(!(PINB & (1<<PB2))){}
 
                                noCursor();
 
                               
 
                               
 
                                clearScreen();
 
                                blink();
 
                                Send_A_String("Blinking is ON");
 
                                _delay_ms(100);//////
 
                                while(!(PINB & (1<<PB2))){}
 
                                noBlink();
 
               
 
                               
 
                                clearScreen();
 
                                Send_A_String("Display will");
 
                                setCursor(1,0);
 
                                Send_A_String("Flicker 5 times");
 
                                for(i=0;i<5;i++)
 
                                {
 
                                                _delay_ms(500);
 
                                                noDisplay();
 
                                                _delay_ms(500);
 
                                                display();
 
                                }
 
                                _delay_ms(100);//////
 
                                while(!(PINB & (1<<PB2))){}
 
                               
 
                               
 
                                clearScreen();
 
                                setCursor(0,5);
 
                                Send_A_String("Scroll");
 
                                setCursor(1,6);
 
                                Send_A_String("Left");
 
                                _delay_ms(1000);
 
                                scrollDisplayLeft();
 
                                _delay_ms(1000);
 
                                scrollDisplayLeft();
 
                                _delay_ms(1000);
 
                                scrollDisplayLeft();
 
                                _delay_ms(1000);
 
                                scrollDisplayLeft();
 
                                _delay_ms(1000);
 
                                while(!(PINB & (1<<PB2))){}
 
                               
 
                               
 
                               
 
                                clearScreen();
 
                                setCursor(0,5);
 
                                Send_A_String("Scroll");
 
                                setCursor(1,5);
 
                                Send_A_String("Right");
 
                                _delay_ms(1000);
 
                                scrollDisplayRight();
 
                                _delay_ms(1000);
 
                                scrollDisplayRight();
 
                                _delay_ms(1000);
 
                                scrollDisplayRight();
 
                                _delay_ms(1000);
 
                                scrollDisplayRight();
 
                                _delay_ms(1000);
 
                                while(!(PINB & (1<<PB2))){}
 
               
 
                               
 
                                clearScreen();
 
                                autoscroll();
 
                                char autos[]={'a','u','t','o','s','c','r','o','l','l','(',')',' ',' ',' '};
 
                                setCursor(0,15);
 
                                for(i=0;i<15;i++)
 
                                {
 
                                                data(autos[i]);
 
                                                _delay_ms(100);
 
                                }
 
                                noAutoscroll();
 
                                _delay_ms(100);//////
 
                                while(!(PINB & (1<<PB2))){}
 
                               
 
                               
 
                                clearScreen();
 
                                createChar(0,s1);
 
                                setCursor(0,0);
 
                                data(0);
 
                                createChar(1,s2);
 
                                setCursor(0,2);
 
                                data(1);
 
                                createChar(2,s3);
 
                                setCursor(0,4);
 
                                data(2);
 
                                createChar(3,s4);
 
                                setCursor(0,6);
 
                                data(3);
 
                                createChar(4,s5);
 
                                setCursor(0,8);
 
                                data(4);
 
                                createChar(5,s6);
 
                                setCursor(0,10);
 
                                data(5);
 
                                createChar(6,s7);
 
                                setCursor(0,12);
 
                                data(6);
 
                                createChar(7,s8);
 
                                setCursor(0,14);
 
                                data(7);
 
                                _delay_ms(100);//////
 
                                while(!(PINB & (1<<PB2))){}
 
                }
 
               
 
                return 0;
 
}
 


void start();
 
void command(char);
 
void data(char);
 
void Send_A_String(char *StringOfCharacters);
 
void cut(char *str);
 
void Send_An_Integer(int x);
 
void setCursor(int row,int column);
 
void clearScreen();
 
void home();
 
void cursor();
 
void noCursor();
 
void blink();
 
void noBlink();
 
void display();
 
void noDisplay();
 
void scrollDisplayLeft();
 
void scrollDisplayRight();
 
void autoscroll();
 
void noAutoscroll();
 
void createChar(int num,unsigned int *charArray);
 
//D4-D7 connected to D4-D7
 
int base_address[8]={64,72,80,88,96,104,112,120};
 
 
 
void start() 
 
{
 
                DDRB = 0x03;    // PB0 and PB1 declared as output
 
                DDRD = 0xF0;    // PD4,PD5,PD6,PD7 declared as output
 
                command(0x28);              // To initialize LCD in 2 lines, 5X8 dots and 4bit mode.
 
                command(0x0C);             // Display ON cursor OFF. E for cursor ON and C for cursor OFF
 
                command(0x06);              // Entry mode-increment cursor by 1
 
                command(0x01);              // Clear screen
 
                command(0x80);              // Sets cursor to (0,0)
 
}
 
 
 
 
 
 
 
 
 
void command(char LcdCommand)  // Basic function used in giving command
 
{                              // to LCD
 
                char UpperHalf, LowerHalf;
 
               
 
                UpperHalf = LcdCommand & 0xF0;          // upper 4 bits of command
 
                PORTD &= 0x0F;                  // flushes upper half of PortD to 0, but retains lower half of PortD
 
                PORTD |= UpperHalf;
 
                PORTB &= ~(1<<rs);
 
                PORTB |= (1<<en);
 
                _delay_ms(10);
 
                PORTB &= ~(1<<en);
 
                _delay_ms(10);
 
               
 
                LowerHalf = ((LcdCommand<<4) & 0xF0); //lower 4 bits of command
 
                PORTD &= 0x0F;                  // flushes upper half of PortD to 0, but retains lower half of PortD
 
                PORTD |= LowerHalf;
 
                PORTB &= ~(1<<rs);
 
                PORTB |= (1<<en);
 
                _delay_ms(10);
 
                PORTB &= ~(1<<en);
 
                _delay_ms(10);
 
}
 
                 
 
void data(char AsciiChar)    // Basic function used in giving data
 
{                            // to LCD
 
                char UpperHalf, LowerHalf;
 
               
 
                UpperHalf = AsciiChar & 0xF0;  // upper 4 bits of data
 
                PORTD &= 0x0F;       // flushes upper half of PortD to 0, but retains lower half of PortD
 
                PORTD |= UpperHalf;
 
                PORTB |= (1<<rs);
 
                PORTB |= (1<<en);
 
                _delay_ms(10);
 
                PORTB &= ~(1<<en);
 
                _delay_us(400);
 
               
 
                LowerHalf = ((AsciiChar<<4) & 0xF0); //lower 4 bits of data
 
                PORTD &= 0x0F;       // flushes upper half of PortD to 0, but retains lower half of PortD
 
                PORTD |= LowerHalf;
 
                PORTB |= (1<<rs);
 
                PORTB |= (1<<en);
 
                _delay_ms(10);
 
                PORTB &= ~(1<<en);
 
                _delay_us(400);              
 
}
 
 
 
               
 
 
 
 
 
void Send_A_String(char *StringOfCharacters)     // Takes input a string and displays it
 
{                                                // max character in a string should be
 
                while(*StringOfCharacters > 0)           // less than 16, after 16th character
 
                {                                        // everything will be ignored.
 
                                data(*StringOfCharacters++);
 
                }
 
}
 
 
 
 
 
void cut(char *str)                 // It's a souped up version of Send_A_String
 
{                                   // It takes a string, if number of characters
 
                int i=0;                    // is greater than 16, it moves the cursor to
 
                if(strlen(str)<16)          // next line and starts printing there
 
                {Send_A_String(str);}       //
 
                                    // It has its own limitations, maximum number
 
                else                        // of character is 32, after 32nd character
 
                {                           // it'll ignore the rest.
 
                                while(i<16)
 
                                {
 
                                                data(str[i]);
 
                                                i=i+1;
 
                                }
 
                                command(0xC0);
 
                                while(str[i]!='\0' && i<32)
 
                                {
 
                                                data(str[i]);
 
                                                i=i+1;
 
                                }
 
                               
 
                }             
 
}
 
 
 
 
 
void Send_An_Integer(int x)     // Takes an integer as input and displays it
 
{                               // value of integer should be in between
 
                char buffer[8];         // the range of "int",
 
                itoa(x,buffer,10);      //  else it'll print garbage values.
 
                Send_A_String(buffer);  // It use Send_A_String() for displaying.
 
}
 
 
 
 
 
 
 
void setCursor(int row,int column)             // Indexing starts from 0.
 
{                                              // Therefore,
 
                switch(row)                            // 0<=row<=1 and 0<=column<=15.
 
                {                                      //
 
                                case 0:                        // If arguments are outside the
 
                                                switch(column)         // the specified range, then function
 
                                                {                      // will not work and ignore the values
 
                                                                case 0:
 
                                                                                command(0x80);break;
 
                                                                case 1:
 
                                                                                command(0x81);break;
 
                                                                case 2:
 
                                                                                command(0x82);break;
 
                                                                case 3:
 
                                                                                command(0x83);break;
 
                                                                case 4:
 
                                                                                command(0x84);break;
 
                                                                case 5:
 
                                                                                command(0x85);break;
 
                                                                case 6:
 
                                                                                command(0x86);break;
 
                                                                case 7:
 
                                                                                command(0x87);break;
 
                                                                case 8:
 
                                                                                command(0x88);break;
 
                                                                case 9:
 
                                                                                command(0x89);break;
 
                                                                case 10:
 
                                                                                command(0x8A);break;
 
                                                                case 11:
 
                                                                                command(0x8B);break;
 
                                                                case 12:
 
                                                                                command(0x8C);break;
 
                                                                case 13:
 
                                                                                command(0x8D);break;
 
                                                                case 14:
 
                                                                                command(0x8E);break;
 
                                                                case 15:
 
                                                                                command(0x8F);break;
 
                                                                default:
 
                                                                                break;
 
                                                }
 
                                                break;
 
                                case 1:
 
                                                switch(column)
 
                                                {
 
                                                                case 0:
 
                                                                                command(0xC0);break;
 
                                                                case 1:
 
                                                                                command(0xC1);break;
 
                                                                case 2:
 
                                                                                command(0xC2);break;
 
                                                                case 3:
 
                                                                                command(0xC3);break;
 
                                                                case 4:
 
                                                                                command(0xC4);break;
 
                                                                case 5:
 
                                                                                command(0xC5);break;
 
                                                                case 6:
 
                                                                                command(0xC6);break;
 
                                                                case 7:
 
                                                                                command(0xC7);break;
 
                                                                case 8:
 
                                                                                command(0xC8);break;
 
                                                                case 9:
 
                                                                                command(0xC9);break;
 
                                                                case 10:
 
                                                                                command(0xCA);break;
 
                                                                case 11:
 
                                                                                command(0xCB);break;
 
                                                                case 12:
 
                                                                                command(0xCC);break;
 
                                                                case 13:
 
                                                                                command(0xCD);break;
 
                                                                case 14:
 
                                                                                command(0xCE);break;
 
                                                                case 15:
 
                                                                                command(0xCF);break;
 
                                                                default:
 
                                                                                break;
 
                                                }
 
                                                break;
 
                                default:
 
                                                break;
 
                }
 
 
 
}
 
 
 
 
 
 
 
 
 
void clearScreen()         // Clears the screen and
 
{                          // returns cursor to (0,0) position
 
                command(0x01);
 
}
 
void home()                // Returns cursor to (0,0) position
 
{
 
                command(0x02);
 
}
 
 
 
 
 
 
 
void cursor()              // Shows cursor as an underscore
 
{
 
                command(0x0E);
 
}
 
void noCursor()            // Hides the cursor
 
{
 
                command(0x0C);
 
}
 
 
 
 
 
 
 
void blink()               // Shows cursor as a blinking black spot
 
{
 
                command(0x0F);
 
}
 
void noBlink()             // Hides the cursor
 
{
 
                command(0x0C);
 
}
 
 
 
 
 
 
 
void display()             // Display ON with Cursor OFF
 
{
 
                command(0x0C);
 
}
 
void noDisplay()           // Display OFF
 
{
 
                command(0x08);
 
}
 
 
 
 
 
 
 
void scrollDisplayLeft()   // Scrolls the contents of the
 
{                          // display(text and cursor) one space to the left
 
                command(0x18);
 
}
 
void scrollDisplayRight()  // Scrolls the contents of the
 
{                          // display(text and cursor) one space to the right
 
                command(0x1C);
 
}
 
 
 
 
 
 
 
void autoscroll()          // This causes each character output to the display to push previous
 
{                          // characters over by one space in right to left direction
 
                command(0x07);
 
}
 
void noAutoscroll()        // Turns off automatic scrolling of the LCD.
 
{
 
                command(0x06);
 
}
 
 
 
 
 
 
 
 
 
void createChar(int num,unsigned int *charArray)// Takes input two arguments
 
{                                               // 1st is a number between 0-7,
 
                int i=0;                                //              which maps to eight base address
 
                command(base_address[num]);             // 2nd is an array of 8 integers,
 
                while(i<8)                              //         each integer is formed by 5 bits
 
                {                                       //   which determine the pixels in the
 
                                data(charArray[i]);             //         row same as the index of that integer
 
                                i++;                            //
 
                }                                       // Before printing the character, one must
 
}   
