
#include <stdio.h>

struct complex {
  float x;
  float y;
};

char * add_complex(struct complex C, struct complex D)
{
    static char sum_complex[20]={0};
    char operator = '+';
    int i;
    float cd1,cd2;
    cd1 = C.x + D.x;
    cd2 = C.y + D.y;
    if(cd1 != 0)
        sprintf(sum_complex,"%.1f",cd1);
    if(cd2 != 0)
    {
        if(cd2 < 0){
            operator = '-';
            cd2 *= -1.0;
        }
        for(i=0;sum_complex[i];i++);
        if(!i && operator == '-'){
          sprintf(&sum_complex[i],"%c%.1fi",operator,cd2);
        }else if(!i && operator == '+'){
          sprintf(&sum_complex[i],"%.1fi",cd2);
        }else{
          sprintf(&sum_complex[i]," %c %.1fi",operator,cd2);
        }
    }
    else 
    {
      for(i=0;sum_complex[i];i++);
      if (!i)
        sprintf(&sum_complex[i],"%.1fi",cd2);
      // else
      //   sprintf(&sum_complex[i]," %c %.1fi",operator,cd2);
    }
    return sum_complex;
}

char * multiply_complex(struct complex C, struct complex D)
{
    static char multiply_complex[20]={0};
    char operator = '+';
    int i;
    float cd1,cd2;
    cd1 = C.x * D.x - C.y * D.y;
    cd2 = C.x * D.y + C.y * D.x;
    if(cd1 != 0)
        sprintf(multiply_complex,"%.1f",cd1);
    if(cd2 != 0)
    {
        if(cd2 < 0){
            operator = '-';
            cd2 *= -1.0;
        }
        for(i=0;multiply_complex[i];i++);
        if(!i && operator == '-'){
          sprintf(&multiply_complex[i],"%c%.1fi",operator,cd2);
        }else if(!i && operator == '+'){
          sprintf(&multiply_complex[i],"%.1fi",cd2);
        }else{
          sprintf(&multiply_complex[i]," %c %.1fi",operator,cd2);
        }
    }
    else 
    {
      for(i=0;multiply_complex[i];i++);
      if (!i)
        sprintf(&multiply_complex[i],"%.1fi",cd2);
      // else
      //   sprintf(&multiply_complex[i]," %c %.1fi",operator,cd2);
    }
    return multiply_complex;
}

void print_complex(char * str1,char * str2)
{
    printf("%s%s\n",str1,str2);
}

int main()
{
  struct complex C,D;

  printf("Enter C: ");
  scanf("%f %f", &C.x, &C.y);
  
  printf("Enter D: ");
  scanf("%f %f", &D.x, &D.y);
  char *E,*F;

  E = add_complex(C, D);
  F = multiply_complex(C, D);

  print_complex("C + D = ", E);
  print_complex("C x D = ", F);

  return 0;
}

