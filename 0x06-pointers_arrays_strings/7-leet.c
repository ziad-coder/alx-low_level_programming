#include "main.h"

/**
   
 * leet - encode into 1337speak
 
 * @n: input value
 
 * Return: n value
 
 */

char *leet(char *n)
  
{
  
  int x, s;
  
  char s1[] = "aAeEoOtTlL";
  
  char s2[] = "4433007711";
  
  
  for (x = 0; n[x] != '\0'; x++)
    
    {
      
      for (s = 0; s < 10; s++)
	
	{
	  
	  if (n[x] == s1[s])
	    
	    {
	      
	      n[x] = s2[s];
	      
	    }
	  
	}
      
    }
  
  return (n);
  
}
