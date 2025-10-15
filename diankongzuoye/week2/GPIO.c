#include <stdio.h>
enum GPIO_Speed
{
    GPIO_Speed_2MHz,
    GPIO_Speed_10MHz,
    GPIO_Speed_50MHz
};

struct GPIO
{
    enum GPIO_Speed GPIO_Speed;
}s1;
struct GPIO *p;



void GPIO_StructureInit(enum GPIO_Speed *x);

int main()
{
p=&s1;

GPIO_StructureInit(&(*p).GPIO_Speed);


return 0;
};
void GPIO_StructureInit(enum GPIO_Speed *x)
{

*x=GPIO_Speed_2MHz;

};





