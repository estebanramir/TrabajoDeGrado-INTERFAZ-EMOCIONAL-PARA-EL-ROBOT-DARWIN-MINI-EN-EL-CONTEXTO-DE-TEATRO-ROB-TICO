#define DXL_BUS_SERIAL1 1  //Dynamixel on Serial1(USART1)  <-OpenCM9.04

#define ID_NUM 5

Dynamixel Dxl(DXL_BUS_SERIAL1);

void setup() {
  // Initialize the dynamixel bus:
  // Dynamixel 2.0 Baudrate -> 0: 9600, 1: 57600, 2: 115200, 3: 1Mbps  
  Dxl.begin(3);  
  Dxl.jointMode(ID_NUM); //jointMode() is to use position mode
  Dxl.jointMode(6);
}

void loop() {
  
  for(int i=100;i<1000;i+=1)
  {
  ledsCuerpoOn(i/100);
  }
  ledsCuerpoOff();
  delay(1000);
}

//esta funcion prende todos los leds del cuerpo del robot del color deseado.
//recibe como paraemtro de entrada el color deseado:
//1->Rojo
//2->Verde
//3->Amarillo
//4->Azul
//5->Morado
//6->Azuulito Gay
//7->Blanco

void ledsCuerpoOn(int color)
{
 for(int i=1;i<17;i++)
  {
  Dxl.ledOn(i, color);
  }
}
void ledsCuerpoOff()
{
 for(int i=1;i<17;i++)
  {
  Dxl.ledOff(i);
  }
}

