    #define DXL_BUS_SERIAL1 1  //Dynamixel on Serial1(USART1)  <-OpenCM9.04
    
    Dynamixel Dxl(DXL_BUS_SERIAL1);
  
    
    void setup() {
      // Initialize the dynamixel bus:
      // Dynamixel 2.0 Baudrate -> 0: 9600, 1: 57600, 2: 115200, 3: 1Mbps  
      Dxl.begin(3);  
      
      for(int i=1;i<=16;i++)
      {
        Dxl.jointMode(i);
      }
  
      Dxl.goalPosition(1, 512);
      Dxl.goalPosition(2, 512);
      Dxl.goalPosition(3, 262);
      Dxl.goalPosition(4, 761);
      Dxl.goalPosition(5, 512);
      Dxl.goalPosition(6, 512);
      Dxl.goalPosition(7, 512);
      Dxl.goalPosition(8, 512);
      Dxl.goalPosition(9, 422);
      Dxl.goalPosition(10, 601);
      Dxl.goalPosition(11, 611);
      Dxl.goalPosition(12, 412);
      Dxl.goalPosition(13, 556);
      Dxl.goalPosition(14, 467);
      Dxl.goalPosition(15, 512);
      Dxl.goalPosition(16, 512);
    }
    
    struct nodo{
      int m1;
      int m2;
      int m3;
      int m4;
      int m5;
      int m6;
      int m7;
      int m8;
      int m9;
      int m10;
      int m11;
      int m12;
      int m13;
      int m14;
      int m15;
      int m16;
    };
      nodo posiciones[83];
    
    void constructorPosiciones()
    {
    
      posiciones[0].m1=512;
      posiciones[0].m2=512;
      posiciones[0].m3=262;
      posiciones[0].m4=761;
      posiciones[0].m5=512;
      posiciones[0].m6=512;
      posiciones[0].m7=512;
      posiciones[0].m8=512;
      posiciones[0].m9=422;
      posiciones[0].m10=601;
      posiciones[0].m11=611;
      posiciones[0].m12=412;
      posiciones[0].m13=556;
      posiciones[0].m14=467;
      posiciones[0].m15=512;
      posiciones[0].m16=512;
      
      posiciones[1].m1=512;
      posiciones[1].m2=512;
      posiciones[1].m3=262;
      posiciones[1].m4=761;
      posiciones[1].m5=512;
      posiciones[1].m6=512;
      posiciones[1].m7=512;
      posiciones[1].m8=512;
      posiciones[1].m9=241;
      posiciones[1].m10=782;
      posiciones[1].m11=611;
      posiciones[1].m12=412;
      posiciones[1].m13=556;
      posiciones[1].m14=467;
      posiciones[1].m15=512;
      posiciones[1].m16=512;
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
    //Esta funcion  hace mover le robot de posicion a poscion
    //Entradas:
    //Actual: es la posicion actual (nodo) del robot;
    //destino: es la posicion (nodo) al cual se desa llegar;
    //sentieinto: Es el valor de sentimeito que tiene el robot donde:
    //1->enfado
    //2->trizteza
    //3->alegria
    void moverDeNodoANodo(int actual, int destino, int sentimiento)
    {
      int proporcion;
      if(sentimiento ==1)
      {
      ledsCuerpoOn(1);
      proporcion=20;
      }
      else if(sentimiento== 2)
      {
      proporcion=100;
      ledsCuerpoOn(4);
      }
      else
      {
        proporcion =45;
        ledsCuerpoOn(3);
      }
      double tm1=abs(posiciones[actual].m1-posiciones[destino].m1)/10;
      double tm2=abs(posiciones[actual].m2-posiciones[destino].m2)/10;
      double tm3=abs(posiciones[actual].m3-posiciones[destino].m3)/10;
      double tm4=abs(posiciones[actual].m4-posiciones[destino].m4)/10;
      double tm5=abs(posiciones[actual].m5-posiciones[destino].m5)/10;
      double tm6=abs(posiciones[actual].m6-posiciones[destino].m6)/10;
      double tm7=abs(posiciones[actual].m7-posiciones[destino].m7)/10;
      double tm8=abs(posiciones[actual].m8-posiciones[destino].m8)/10;
      double tm9=abs(posiciones[actual].m9-posiciones[destino].m9)/10;
      double tm10=abs(posiciones[actual].m10-posiciones[destino].m10)/10;
      double tm11=abs(posiciones[actual].m11-posiciones[destino].m11)/10;
      double tm12=abs(posiciones[actual].m12-posiciones[destino].m12)/10;
      double tm13=abs(posiciones[actual].m13-posiciones[destino].m13)/10;
      double tm14=abs(posiciones[actual].m14-posiciones[destino].m14)/10;
      double tm15=abs(posiciones[actual].m15-posiciones[destino].m15)/10;
      double tm16=abs(posiciones[actual].m16-posiciones[destino].m16)/10;
      
    for(int i=1;i<10;i++)
    {
      if(posiciones[actual].m1>posiciones[destino].m1)
        Dxl.goalPosition(1,(posiciones[actual].m1)-(tm1*i));
      else
         Dxl.goalPosition(1,(posiciones[actual].m1)+(tm1*i));
         
         if(posiciones[actual].m2>posiciones[destino].m2)
        Dxl.goalPosition(2,(posiciones[actual].m2)-(tm2*i));
      else
         Dxl.goalPosition(2,(posiciones[actual].m2)+(tm2*i));
         
         if(posiciones[actual].m3>posiciones[destino].m3)
        Dxl.goalPosition(3,(posiciones[actual].m3)-(tm3*i));
      else
         Dxl.goalPosition(3,(posiciones[actual].m3)+(tm3*i));
         
         if(posiciones[actual].m4>posiciones[destino].m4)
        Dxl.goalPosition(4,(posiciones[actual].m4)-(tm4*i));
      else
         Dxl.goalPosition(4,(posiciones[actual].m4)+(tm4*i));
         
         if(posiciones[actual].m5>posiciones[destino].m5)
        Dxl.goalPosition(5,(posiciones[actual].m5)-(tm5*i));
      else
         Dxl.goalPosition(5,(posiciones[actual].m5)+(tm5*i));
         
         if(posiciones[actual].m6>posiciones[destino].m6)
        Dxl.goalPosition(6,(posiciones[actual].m6)-(tm6*i));
      else
         Dxl.goalPosition(6,(posiciones[actual].m6)+(tm6*i));
         
         if(posiciones[actual].m7>posiciones[destino].m7)
        Dxl.goalPosition(7,(posiciones[actual].m7)-(tm7*i));
      else
         Dxl.goalPosition(7,(posiciones[actual].m7)+(tm7*i));
         
         if(posiciones[actual].m8>posiciones[destino].m8)
        Dxl.goalPosition(8,(posiciones[actual].m8)-(tm8*i));
      else
         Dxl.goalPosition(8,(posiciones[actual].m8)+(tm8*i));
         
         if(posiciones[actual].m9>posiciones[destino].m9)
        Dxl.goalPosition(9,(posiciones[actual].m9)-(tm9*i));
      else
         Dxl.goalPosition(9,(posiciones[actual].m9)+(tm9*i));
         
         if(posiciones[actual].m10>posiciones[destino].m10)
        Dxl.goalPosition(10,(posiciones[actual].m10)-(tm10*i));
      else
         Dxl.goalPosition(10,(posiciones[actual].m10)+(tm10*i));
         
         if(posiciones[actual].m11>posiciones[destino].m11)
        Dxl.goalPosition(11,(posiciones[actual].m11)-(tm11*i));
      else
         Dxl.goalPosition(11,(posiciones[actual].m11)+(tm11*i));
         
         if(posiciones[actual].m12>posiciones[destino].m12)
        Dxl.goalPosition(12,(posiciones[actual].m12)-(tm12*i));
      else
         Dxl.goalPosition(12,(posiciones[actual].m12)+(tm12*i));
         
         if(posiciones[actual].m13>posiciones[destino].m13)
        Dxl.goalPosition(13,(posiciones[actual].m13)-(tm13*i));
      else
         Dxl.goalPosition(13,(posiciones[actual].m13)+(tm13*i));
         
         if(posiciones[actual].m14>posiciones[destino].m14)
        Dxl.goalPosition(14,(posiciones[actual].m14)-(tm14*i));
      else
         Dxl.goalPosition(14,(posiciones[actual].m14)+(tm14*i));
         
         if(posiciones[actual].m15>posiciones[destino].m15)
        Dxl.goalPosition(15,(posiciones[actual].m15)-(tm15*i));
      else
         Dxl.goalPosition(15,(posiciones[actual].m15)+(tm15*i));
         
         if(posiciones[actual].m16>posiciones[destino].m16)
        Dxl.goalPosition(16,(posiciones[actual].m16)-(tm16*i));
      else
         Dxl.goalPosition(16,(posiciones[actual].m16)+(tm16*i));
  
      delay(proporcion);
    }
    Dxl.goalPosition(1,posiciones[destino].m1);
    Dxl.goalPosition(2,posiciones[destino].m2);
    Dxl.goalPosition(3,posiciones[destino].m3);
    Dxl.goalPosition(4,posiciones[destino].m4);
    Dxl.goalPosition(5,posiciones[destino].m5);
    Dxl.goalPosition(6,posiciones[destino].m6);
    Dxl.goalPosition(7,posiciones[destino].m7);
    Dxl.goalPosition(8,posiciones[destino].m8);
    Dxl.goalPosition(9,posiciones[destino].m9);
    Dxl.goalPosition(10,posiciones[destino].m10);
    Dxl.goalPosition(11,posiciones[destino].m11);
    Dxl.goalPosition(12,posiciones[destino].m12);
    Dxl.goalPosition(13,posiciones[destino].m13);
    Dxl.goalPosition(14,posiciones[destino].m14);
    Dxl.goalPosition(15,posiciones[destino].m15);
    Dxl.goalPosition(16,posiciones[destino].m16);
    
    }
    
    void loop() {
      constructorPosiciones();
      moverDeNodoANodo(0,1,1);
      moverDeNodoANodo(1,1,1);
      moverDeNodoANodo(1,0,1);
      moverDeNodoANodo(0,0,1);
     delay(1000);
      moverDeNodoANodo(0,1,2);
      moverDeNodoANodo(1,1,2);
      moverDeNodoANodo(1,0,2);
      moverDeNodoANodo(0,0,2);
     delay(1000);
      moverDeNodoANodo(0,1,3);
      moverDeNodoANodo(1,1,3);
      moverDeNodoANodo(1,0,3);
      moverDeNodoANodo(0,0,3);
     delay(1000);   
  
    }
