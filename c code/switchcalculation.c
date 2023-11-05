#include<stdio.h>
int main()
{
    int a,b,d,e,f,g;
    char c;
    printf("Enter the value of a,b\n:");
    scanf("%d%d",&a,&b);
    printf("Enter the value of c as a operatror like + - * /\n");
    scanf(" %c", &c);
    switch(c)
    {
        case '+'  :
      d=a+b;
      printf("%d",d);
      break;
      case '-'  :
      e=a-b;
      printf("%d",e);
      break;
      case '*'  :
      f=a*b;
      printf("%d",f);
      break;
      case '/'  :
      g=a/b;
      printf("%d",g);
      break;
      default:
      printf("Enter the symbol only + - * / \n");
    }
    return 0;

}