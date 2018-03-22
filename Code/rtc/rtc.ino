#include <DS1307.h>


// DS1307 rtc([SDA], [SCL]);
DS1307 rtc(A4, A5);

void setup() {
  // Zet de klok aan en zorgt ervoor dat de write protection wordt uitgezet wat inhoudt dat je nu waardes op de rtc kan schrijven
  rtc.halt(false);


  Serial.begin(9600);

 

  /*rtc.setDOW(SATURDAY);        // Stel de dag in (DOW staat voor DayOFtheWeek)
    rtc.setTime(10, 23, 15);     // Stel de tijd in, in 24u format. Uur-min-sec
    rtc.setDate(17, 3, 2018);   // Stel de datum in. Dag-maad-jaar*/

}

void loop() {
   // Stuur dag
    Serial.print(rtc.getDOWStr());
    Serial.print(" ");

    // Stuur datum
    Serial.print(rtc.getDateStr());
    Serial.print(" -- ");

    // Stuur tijd
    Serial.println(rtc.getTimeStr());



    delay (1000); 
}
