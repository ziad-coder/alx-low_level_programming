#include "main.h"


/**
   
 * print_number - print numbers chars
 
 * @n: integer params
 
 * Return: 0
 
 */


void print_number(int c)
  
{
  
  unsigned int c1;
  
  
  c1 = c;
  
  
  if (c < 0)
    
    {
      
      _putchar('-');
      
      c1 = -c;
      
    }
  
  
  if (c1 / 10 != 0)
    
    {
      
      print_number(c1 / 10);
      
    }
  
  _putchar((c1 % 10) + '0');
  
}
