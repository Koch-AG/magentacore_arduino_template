#include <Magenta_lib.h>

int Counter = 0;

void setup() {
  magentaobj.init();
}

void loop() {
  magentaobj.read_io();

  Counter ++;
  if(Counter <= 100)
  {
    magentaobj.sample(1);
  }
  
  if(Counter > 100)
  {
    magentaobj.sample(0);
    if(Counter >= 200){
      Counter = 0;
    }
  }

  if(magentaobj.button_1){
    printf("Hello World!\n");
  }
  
}
