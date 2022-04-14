/*   Total population = 80000, total literacy = 48%, total literate men = 35%, total men = 52%, now calculate total men,women,literate men and women as well as Illeterate men and women     */

#include<stdio.h>

int main()
{
  int total = 80000, total_lit, total_men, total_women, lit_men, lit_women, ill_men, ill_women;
  
  printf("Total Number of Population : %d \n ",total);
  
  total_lit = total*48/100;
  total_men = total*52/100;
  lit_men = total*35/100;
  
  total_women = total - total_men;
  
  lit_women = total_women - lit_men;
  
  
  ill_men = total_men - lit_men;
  ill_women = total_women - lit_women;
  
  
  printf("Total men : %d \n ",total_men);
  printf("Total women : %d \n ",total_women);
  printf("Total literate men : %d \n ",lit_men);
  printf("Total literate women : %d \n ",lit_women);
  printf("Total Illeterate men : %d \n ",ill_men);
  printf("Total Illeterate women : %d \n ",ill_women);
  
  
  return 0;


}
