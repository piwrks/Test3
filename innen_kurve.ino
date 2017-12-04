//10 bis 40 °C und 20 bis 80% Hum

void innenkurve()
{
  
  analogWrite(backlight_pin, backlight_on);
  DateTime now = rtc.now(); 
    
  int x, y;
  int res = 0;
     
 waitForTouchRelease();    
  
  myGLCD.clrScr();
  myGLCD.setFont(SmallFont);
  
  myGLCD.setColor(255, 255, 255);
  
  myGLCD.drawLine(0, 19, 799, 19);
  
  myGLCD.setFont(BVS_15);
  
  myGLCD.print("Temperatur Innen", 300, 0, 0);
  //Text noch in Farbe des Graphen
  myGLCD.print("Luftfeuchte Innen", 360, 0, 0);
   //Text noch in Farbe des Graphen

  myGLCD.setColor(255, 255, 255);
 
 //Skala Zeichnen
 
  myGLCD.drawLine(60, 35, 60, 420);
  myGLCD.drawLine(60, 420, 750, 420); //950

  myGLCD.setColor( 77,77,77); 
  
  myGLCD.drawLine(60, 385, 750, 385); //960
  myGLCD.drawLine(60, 350, 750, 350); //970
  myGLCD.drawLine(60, 315, 750, 315); //980
  myGLCD.drawLine(60, 280, 750, 280); //990
  myGLCD.drawLine(60, 245, 750, 245); //1000
  myGLCD.drawLine(60, 210, 750, 210); //1010
  myGLCD.drawLine(60, 175, 750, 175); //1020
  myGLCD.drawLine(60, 140, 750, 140); //1030
  myGLCD.drawLine(60, 105, 750, 105); //1040
  myGLCD.drawLine(60, 70, 750, 70); //1050
  myGLCD.drawLine(60, 35, 750, 35); //1060
  
  
  myGLCD.drawLine(90, 35, 90, 420); //24 Stunden
  myGLCD.drawLine(120, 35, 120, 420); //23 Stunden
  myGLCD.drawLine(150, 35, 150, 420); //22 Stunden
  myGLCD.drawLine(180, 35, 180, 420); //21 Stunden
  myGLCD.drawLine(210, 35, 210, 420); //20 Stunden
 myGLCD.drawLine(240, 35, 240, 420); //19 Stunden
 myGLCD.drawLine(270, 35, 270, 420); //18 Stunden
 myGLCD.drawLine(300, 35, 300, 420); //17 Stunden
 myGLCD.drawLine(330, 35, 330, 420); //16 Stunden
 myGLCD.drawLine(360, 35, 360, 420); //15 Stunden
 myGLCD.drawLine(390, 35, 390, 420); //14 Stunden
 myGLCD.drawLine(420, 35, 420, 420); //13 Stunden
 myGLCD.drawLine(450, 35, 450, 420); //12 Stunden
 myGLCD.drawLine(480, 35, 480, 420); //11 Stunden
 myGLCD.drawLine(510, 35, 510, 420); //10 Stunden
 myGLCD.drawLine(540, 35, 540, 420); //9 Stunden
 myGLCD.drawLine(570, 35, 570, 420); //8 Stunden
 myGLCD.drawLine(600, 35, 600, 420); //7 Stunden
 myGLCD.drawLine(630, 35, 630, 420); //6 Stunden
 myGLCD.drawLine(660, 35, 660, 420); //5 Stunden
 myGLCD.drawLine(690, 35, 690, 420); //4 Stunden
 myGLCD.drawLine(720, 35, 720, 420); //3 Stunden
 myGLCD.drawLine(750, 35, 750, 420); //2 Stunden
// myGLCD.drawLine(780, 35, 780, 420); //1 Stunde
 
 // Beschriftung Skala
 
  myGLCD.setColor(255, 255, 255);
 myGLCD.setFont(SmallFont);
 
 //hPA 
 
  myGLCD.print("950", 20, 415, 0);
  myGLCD.print("960", 20, 380, 0);
  myGLCD.print("970", 20, 345, 0);
  myGLCD.print("980", 20, 310, 0);
  myGLCD.print("990", 20, 275, 0);
  myGLCD.print("1000", 15, 240, 0);
  myGLCD.print("1010", 15, 205, 0);
  myGLCD.print("1020", 15, 170, 0);
  myGLCD.print("1030", 15, 135, 0);
  myGLCD.print("1040", 15, 100, 0);
  myGLCD.print("1050", 15, 65, 0);
  myGLCD.print("1060", 15, 30, 0);
  
 // Uhrzeit
 
     int hour_0;
  hour_0 = (now.hour()-0); 
 if (hour_0 >= 0)
 { sprintf(Stunde,"%02d",(now.hour())-0);  
 myGLCD.print((Stunde), 742.4, 470, 270); 
 myGLCD.print("Uhr", 742.5, 450, 270);}
 else if (hour_0 < 0)
       {sprintf(Stunde,"%02d",(now.hour())+24-0); 
         myGLCD.print((Stunde), 742.5, 470, 270); 
         myGLCD.print("Uhr", 742.5, 450, 270); }
  
       int hour_2;
  hour_2 = (now.hour()-2); 
 if (hour_2 >= 0)
 { sprintf(Stunde,"%02d",(now.hour())-2);  
 myGLCD.print((Stunde), 682.5, 470, 270); 
 myGLCD.print("Uhr", 682.5, 450, 270);}
 else if (hour_2 < 0)
       {sprintf(Stunde,"%02d",(now.hour())+24-2); 
         myGLCD.print((Stunde), 682.5, 470, 270); 
      myGLCD.print("Uhr", 682.5, 450, 270);}

     int hour_4;
  hour_4 = (now.hour()-4); 
 if (hour_4 >= 0)
 { sprintf(Stunde,"%02d",(now.hour())-4);  
 myGLCD.print((Stunde), 622.5, 470, 270);
myGLCD.print("Uhr", 622.5, 450, 270); }
 else if (hour_4 < 0)
       {sprintf(Stunde,"%02d",(now.hour())+24-4); 
         myGLCD.print((Stunde), 622.5, 470, 270);
      myGLCD.print("Uhr", 622.5, 450, 270); } 
 
   int hour_6;
  hour_6 = (now.hour()-6); 
 if (hour_6 >= 0)
 { sprintf(Stunde,"%02d",(now.hour())-6);  
 myGLCD.print((Stunde), 562.5, 470, 270);
  myGLCD.print("Uhr", 562.5, 450, 270); }
 else if (hour_6 < 0)
       {sprintf(Stunde,"%02d",(now.hour())+24-6); 
         myGLCD.print((Stunde), 562.5, 470, 270); 
         myGLCD.print("Uhr", 562.5, 450, 270);} 

   int hour_8;
  hour_8 = (now.hour()-8); 
 if (hour_8 >= 0)
 { sprintf(Stunde,"%02d",(now.hour())-8);  
 myGLCD.print((Stunde), 502.50, 470, 270); 
myGLCD.print("Uhr", 502.5, 450, 270); }
 else if (hour_8 < 0)
       {sprintf(Stunde,"%02d",(now.hour())+24-8); 
         myGLCD.print((Stunde), 502.5, 470, 270);
      myGLCD.print("Uhr", 502.5, 450, 270); }
 
  int hour_10;
  hour_10 = (now.hour()-10); 
 if (hour_10 >= 0)
 { sprintf(Stunde,"%02d",(now.hour())-10);  
 myGLCD.print((Stunde), 442.5, 470, 270);
  myGLCD.print("Uhr", 442.5, 450, 270); }
 else if (hour_10 < 0)
       {sprintf(Stunde,"%02d",(now.hour())+24-10); 
         myGLCD.print((Stunde), 442.5, 470, 270);
        myGLCD.print("Uhr", 442.5, 450, 270); }
 
  int hour_12;
  hour_12 = (now.hour()-12); 
 if (hour_12 >= 0)
 { sprintf(Stunde,"%02d",(now.hour())-12);  
 myGLCD.print((Stunde), 382.5, 470, 270); 
  myGLCD.print("Uhr", 382.5, 450, 270);}
 else if (hour_12 < 0)
       {sprintf(Stunde,"%02d",(now.hour())+24-12); 
         myGLCD.print((Stunde), 382.5, 470, 270); 
        myGLCD.print("Uhr", 382.5, 450, 270);}
    
  int hour_14;
  hour_14 = (now.hour()-14); 
 if (hour_14 >= 0)
 { sprintf(Stunde,"%02d",(now.hour())-14);  
 myGLCD.print((Stunde), 322.5, 470, 270); 
  myGLCD.print("Uhr", 322.5, 450, 270);}
 else if (hour_14 < 0)
       {sprintf(Stunde,"%02d",(now.hour())+24-14); 
         myGLCD.print((Stunde), 322.5, 470, 270);
       myGLCD.print("Uhr", 322.5, 450, 270); }
         
 int hour_16;
  hour_16 = (now.hour()-16); 
 if (hour_16 >= 0)
 { sprintf(Stunde,"%02d",(now.hour())-16);  
 myGLCD.print((Stunde), 262.5, 470, 270); 
   myGLCD.print("Uhr", 262.5, 450, 270);}
 else if (hour_16 < 0)
       {sprintf(Stunde,"%02d",(now.hour())+24-16); 
         myGLCD.print((Stunde), 262.5, 470, 270); 
         myGLCD.print("Uhr", 262.5, 450, 270);}
     
 int hour_18;
  hour_18 = (now.hour()-18); 
 if (hour_18 >= 0)
 { sprintf(Stunde,"%02d",(now.hour())-18);  
 myGLCD.print((Stunde), 202.5, 470, 270); 
 myGLCD.print("Uhr", 202.5, 450, 270);}
 else if (hour_18 < 0)
       {sprintf(Stunde,"%02d",(now.hour())+24-18); 
         myGLCD.print((Stunde), 202.5, 470, 270); 
       myGLCD.print("Uhr", 202.5, 450, 270);}
             
 int hour_20;
  hour_20 = (now.hour()-20); 
 if (hour_20 >= 0)
 { sprintf(Stunde,"%02d",(now.hour())-20);  
 myGLCD.print((Stunde), 142.5, 470, 270);
 myGLCD.print("Uhr", 142.5, 450, 270); }
 else if (hour_20 < 0)
       {sprintf(Stunde,"%02d",(now.hour())+24-20); 
         myGLCD.print((Stunde), 142.5, 470, 270);
       myGLCD.print("Uhr", 142.5, 450, 270); }
         
  int hour_22;
  hour_22 = (now.hour()-22); 
 if (hour_22 >= 0)
 { sprintf(Stunde,"%02d",(now.hour())-22);  
 myGLCD.print((Stunde), 82.5, 470, 270);
myGLCD.print("Uhr", 82.5, 450, 270);  }
 else if (hour_22 < 0)
       {sprintf(Stunde,"%02d",(now.hour())+24-22); 
         myGLCD.print((Stunde), 82.5, 470, 270);
      myGLCD.print("Uhr", 82.5, 450, 270);  }
 
 
//Serial.print(Stunde);
  
  
   //Graphen zeichen
  
  drawinnenkurve();
      
   
  // Zurück zum Hauptbildschirm
    
  while (res==0)
  {
    if (myTouch.dataAvailable())
    {
      myTouch.read();
      x=myTouch.getX();
      y=myTouch.getY();
      
       if ((y>=0) && (y<=480)) // Touchbereich um zurückzukehren
      {
        if ((x>=0) && (x<=800))
        {
          res=2;
          myGLCD.setColor (255, 0, 0);
          myGLCD.drawRoundRect(1, 1, 799, 479);
        }
      }
    }
  }
  
  waitForTouchRelease();
  
myGLCD.clrScr();

 initGraphics();
 
  renderDatum();
  renderTempInnen();
  renderTempAussen();
  renderBarometer();
  rendertaupunkt();
  renderhumidex();
  renderaktuell();
  renderforecast();
  rendermoon();
  rendermoondays();
  rendersonne();
  renderheizung(); 
  drawMillibarGraph(historyBaro, 24);
 
}

//******************* Barometer Kurve ************************

//Barometer Kurve


void drawinnenkurve()
{
  
int bar1p0y1=420; int bar1p1y1=420; int bar1p2y1=420; int bar1p3y1=420; int bar1p4y1=420; int bar1p5y1=420; int bar1p6y1=420; int bar1p7y1=420;
int bar1p8y1=420; int bar1p9y1=420; int bar1p10y1=420; int bar1p11y1=420; int bar1p12y1=420; int bar1p13y1=420; int bar1p14y1=420; int bar1p15y1=420;
int bar1p16y1=420; int bar1p17y1=420; int bar1p18y1=420; int bar1p19y1=420; int bar1p20y1=420; int bar1p21y1=420; int bar1p22y1=420; int bar1p23y1=420;

//Serial.println(historyBarokurve[0]); 

bar1p0y1=420+((historyBaro[0]-950)*-3.5);
bar1p1y1=420+((historyBaro[1]-950)*-3.5);
bar1p2y1=420+((historyBaro[2]-950)*-3.5);
bar1p3y1=420+((historyBaro[3]-950)*-3.5);
bar1p4y1=420+((historyBaro[4]-950)*-3.5);
bar1p5y1=420+((historyBaro[5]-950)*-3.5);
bar1p6y1=420+((historyBaro[6]-950)*-3.5);
bar1p7y1=420+((historyBaro[7]-950)*-3.5);
bar1p8y1=420+((historyBaro[8]-950)*-3.5);
bar1p9y1=420+((historyBaro[9]-950)*-3.5);
bar1p10y1=420+((historyBaro[10]-950)*-3.5);
bar1p11y1=420+((historyBaro[11]-950)*-3.5);
bar1p12y1=420+((historyBaro[12]-950)*-3.5);
bar1p13y1=420+((historyBaro[13]-950)*-3.5);
bar1p14y1=420+((historyBaro[14]-950)*-3.5);
bar1p15y1=420+((historyBaro[15]-950)*-3.5);
bar1p16y1=420+((historyBaro[16]-950)*-3.5);
bar1p17y1=420+((historyBaro[17]-950)*-3.5);
bar1p18y1=420+((historyBaro[18]-950)*-3.5);
bar1p19y1=420+((historyBaro[19]-950)*-3.5);
bar1p20y1=420+((historyBaro[20]-950)*-3.5); 
bar1p21y1=420+((historyBaro[21]-950)*-3.5);
bar1p22y1=420+((historyBaro[22]-950)*-3.5);
bar1p23y1=420+((historyBaro[23]-950)*-3.5);

  
myGLCD.setColor(135,206,250);
//------------------------------------------------------------------------------------------------------------ -Draw Line at 0.00 Uhr
myGLCD.drawLine(60,bar1p0y1,90,bar1p1y1);
//------------------------------------------------------------------------------------------------------------ -Draw Line at 1.00 Uhr
myGLCD.drawLine(90,bar1p1y1,120,bar1p2y1);
//------------------------------------------------------------------------------------------------------------ -Draw Line at 2.00 Uhr
myGLCD.drawLine(120,bar1p2y1,150,bar1p3y1);
//------------------------------------------------------------------------------------------------------------ -Draw Line at 3.00 Uhr
myGLCD.drawLine(150,bar1p3y1,180,bar1p4y1);
//------------------------------------------------------------------------------------------------------------ -Draw Line at 4.00 Uhr
myGLCD.drawLine(180,bar1p4y1,210,bar1p5y1);
//------------------------------------------------------------------------------------------------------------ -Draw Line at 5.00 Uhr
myGLCD.drawLine(210,bar1p5y1,240,bar1p6y1);
//------------------------------------------------------------------------------------------------------------ -Draw Line at 6.00 Uhr
myGLCD.drawLine(240,bar1p6y1,270,bar1p7y1);
//------------------------------------------------------------------------------------------------------------ -Draw Line at 7.00 Uhr
myGLCD.drawLine(270,bar1p7y1,300,bar1p8y1);
//------------------------------------------------------------------------------------------------------------ -Draw Line at 8.00 Uhr
myGLCD.drawLine(300,bar1p8y1,330,bar1p9y1);
//------------------------------------------------------------------------------------------------------------ -Draw Line at 9.00 Uhr
myGLCD.drawLine(330,bar1p9y1,360,bar1p10y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 10.00 Uhr
myGLCD.drawLine(360,bar1p10y1,390,bar1p11y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 11.00 Uhr
myGLCD.drawLine(390,bar1p11y1,420,bar1p12y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 12.00 Uhr
myGLCD.drawLine(420,bar1p12y1,450,bar1p13y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 13.00 Uhr
myGLCD.drawLine(450,bar1p13y1,480,bar1p14y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 14.00 Uhr
myGLCD.drawLine(480,bar1p14y1,510,bar1p15y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 15.00 Uhr
myGLCD.drawLine(510,bar1p15y1,540,bar1p16y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 16.00 Uhr
myGLCD.drawLine(540,bar1p16y1,570,bar1p17y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 17.00 Uhr
myGLCD.drawLine(570,bar1p17y1,600,bar1p18y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 18.00 Uhr
myGLCD.drawLine(600,bar1p18y1,630,bar1p19y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 19.00 Uhr
myGLCD.drawLine(630,bar1p19y1,660,bar1p20y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 20.00 Uhr
myGLCD.drawLine(660,bar1p20y1,690,bar1p21y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 21.00 Uhr
myGLCD.drawLine(690,bar1p21y1,720,bar1p22y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 22.00 Uhr
myGLCD.drawLine(720,bar1p22y1,750,bar1p23y1);
//----------------------------------------------------------------------------------------------------------- -Draw Line at 23.00 Uhr
//myGLCD.drawLine(750,bar1p23y1,780,bar1p0y1);
}
//------------------------------------}
  
  
