#include <Servo.h>

Servo servo[6];
int val[6] = {0, 90, 0, 15, 170, 140};

bool mode = true;

int spped = 40;

int prasino = 11;
int kokkino = 12;

void setup() {

  Serial.begin(9600);
  
  servo[1].attach(3);
  servo[2].attach(5);
  servo[3].attach(6);
  servo[4].attach(9);
  servo[5].attach(10);

  servo[1].write(val[1]);
  servo[2].write(val[2]);
  servo[3].write(val[3]);
  servo[4].write(val[4]);
  servo[5].write(val[5]);

  delay(1000);

  pinMode(prasino, OUTPUT);
  pinMode(kokkino, OUTPUT);
  digitalWrite(prasino, LOW); 
  digitalWrite(kokkino, HIGH); 

  //z
  val[1] = 90;
  val[2] = 78;
  val[3] = 40;
  val[4] = 30;
  val[5] = 100;
  moveServos(val[1], val[2], val[3], val[4], val[5], spped, true);

  //h
  val[1] = 30;
  val[2] = 78;
  val[3] = 40;
  val[4] = 30;
  val[5] = 130;
  spped = 10;
  moveServos(val[1], val[2], val[3], val[4], val[5], spped, true);
  val[1] = 150;
  val[2] = 78;
  val[3] = 40;
  val[4] = 30;
  val[5] = 130;
  spped = 10;
  moveServos(val[1], val[2], val[3], val[4], val[5], spped, true);
  val[1] = 80;
  val[2] = 145;
  val[3] = 77;
  val[4] = 37;
  val[5] = 140;
  spped = 20;
  moveServos(val[1], val[2], val[3], val[4], val[5], spped, true);
  spped = 40;

  //z
  val[1] = 90;
  val[2] = 78;
  val[3] = 40;
  val[4] = 30;
  val[5] = 100;
  moveServos(val[1], val[2], val[3], val[4], val[5], spped, true);

  //j
  moveServos(116, 156, 82, 36, 110, spped, true);
  moveServos(116, 156, 82, 36, 140, spped, true);
  moveServos(116, 128, 88, 20, 140, spped, true);
  moveServos(95, 103, 60, 30, 140, 20, false);//
  moveServos(80, 145, 77, 37, 140, 30, false);
  ledBlink();
  ledGreen();
  delay(1000);
  moveServos(80, 78, 40, 30, 140, 20, false);//
  moveServos(50, 78, 40, 0, 140, 20, false);//
  ledRed();
  moveServos(28, 118, 60, 20, 140, spped, true);
  PutDownD();
  moveServos(28, 142, 41, 60, 115, spped, true);
  moveServos(28, 142, 41, 80, 115, spped, true);
  moveServos(90, 78, 40, 30, 100, 30, false);
  val[1] = 90;
  val[2] = 78;
  val[3] = 40;
  val[4] = 30;
  val[5] = 100;
  moveServos(val[1], val[2], val[3], val[4], val[5], spped, true);

  //k
  moveServos(110, 155, 78, 40, 110, spped, true);
  moveServos(110, 155, 78, 40, 140, spped, true);
  moveServos(110, 136, 94, 20, 140, spped, true);
  moveServos(95, 103, 60, 30, 140, 20, false);//
  moveServos(80, 145, 77, 37, 140, 30, false);
  ledBlink();
  ledGreen();
  delay(1000);
  moveServos(80, 78, 40, 30, 140, 20, false);//
  moveServos(50, 78, 40, 0, 140, 20, false);//
  ledRed();
  moveServos(24, 78, 40, 30, 140, spped, true);
  moveServos(20, 118, 60, 20, 140, spped, true);
  PutDownD();
  moveServos(20, 142, 41, 60, 115, spped, true);
  moveServos(20, 142, 41, 80, 115, spped, true);
  moveServos(90, 78, 40, 30, 100, 30, false);
  val[1] = 90;
  val[2] = 78;
  val[3] = 40;
  val[4] = 30;
  val[5] = 100;
  moveServos(val[1], val[2], val[3], val[4], val[5], spped, true);

  //l
  moveServos(104, 155, 78, 41, 110, spped, true);
  moveServos(104, 155, 78, 41, 140, spped, true);
  moveServos(104, 136, 100, 20, 140, spped, true);
  moveServos(80, 145, 77, 37, 140, 30, false);
  ledBlink();
  ledGreen();
  delay(1000);
  moveServos(80, 78, 40, 30, 140, 20, false);//
  moveServos(50, 78, 40, 0, 140, 20, false);//
  ledRed();
  moveServos(18, 78, 40, 30, 140, spped, true);
  moveServos(12, 118, 62, 20, 140, spped, true);
  PutDownD();
  moveServos(12, 142, 41, 60, 115, spped, true);
  moveServos(12, 142, 41, 80, 115, spped, true);
  moveServos(90, 78, 40, 30, 100, 30, false);
  val[1] = 90;
  val[2] = 78;
  val[3] = 40;
  val[4] = 30;
  val[5] = 100;
  moveServos(val[1], val[2], val[3], val[4], val[5], spped, true);

  //x
  val[1] = 90;
  val[2] = 10;
  val[3] = 15;
  val[4] = 168;
  val[5] = 140;
  moveServos(val[1], val[2], val[3], val[4], val[5], spped, true);

}

void loop(){

delay(1000);
  
}

void moveServos(int a, int b, int c, int d, int e, int interval, bool wait){

  bool da = false;
  bool db = false;
  bool dc = false;
  bool dd = false;
  bool de = false;

  int pa = servo[1].read();
  int pb = servo[2].read();
  int pc = servo[3].read();
  int pd = servo[4].read();
  int pe = servo[5].read();

  if (pa < a){
    da = true;
  }
  if (pb < b){
    db = true;
  }
  if (pc < c){
    dc = true;
  }
  if (pd < d){
    dd = true;
  }
  if (pe < e){
    de = true;
  }

  for (int i = 0; i < 180; i++){
    
    if (da){
      if (pa < a){
        pa++;
        servo[1].write(pa);
        //delay(interval);
      }
    }
    else{
      if (pa > a){
        pa--;
        servo[1].write(pa);
        //delay(interval);
      }
    }

    if (db){
      if (pb < b){
        pb++;
        servo[2].write(pb);
        //delay(interval);
      }
    }
    else{
      if (pb > b){
        pb--;
        servo[2].write(pb);
        //delay(interval);
      }
    }

    if (dc){
      if (pc < c){
        pc++;
        servo[3].write(pc);
        //delay(interval);
      }
    }
    else{
      if (pc > c){
        pc--;
        servo[3].write(pc);
        //delay(interval);
      }
    }

    if (dd){
      if (pd < d){
        pd++;
        servo[4].write(pd);
        //delay(interval);
      }
    }
    else{
      if (pd > d){
        pd--;
        servo[4].write(pd);
        //delay(interval);
      }
    }

    if (de){
      if (pe < e){
        pe++;
        servo[5].write(pe);
        //delay(interval);
      }
    }
    else{
      if (pe > e){
        pe--;
        servo[5].write(pe);
        //delay(interval);
      }
    }

    delay(interval);

    if (pa == a and pb == b and pc == c and pd == d and pe == e){
      break;
    }
  }

  if (wait){
    delay(350);
  }
  
}

void printCondition(){
  
  Serial.print("a");
  Serial.print(val[1]);
  Serial.print(" ");
  Serial.print("b");
  Serial.print(val[2]);
  Serial.print(" ");
  Serial.print("c");
  Serial.print(val[3]);
  Serial.print(" ");
  Serial.print("d");
  Serial.print(val[4]);
  Serial.print(" ");
  Serial.print("e");
  Serial.println(val[5]);
  Serial.println(" ");
  
}

void PutDownD(){

  int pb = servo[2].read();
  int pc = servo[3].read();
  int pd = servo[4].read();

  for (int i = 0; i < 100; i++){
    if (pb < 142){
      pb += 1;
      servo[2].write(pb);
    }

    if (pc > 41){
      pc -= 1;
      servo[3].write(pc);
    }

    if (pd < 60){
      pd += 2;
      servo[4].write(pd);
    }

    if (pb == 104 and pc == 41 and pd == 60){
      break;
    }

    delay(30);
    
  }

  val[2] = pb;
  val[3] = pc;
  val[4] = pd;
  delay(350);

}

void ledRed(){
  digitalWrite(kokkino, HIGH);
  digitalWrite(prasino, LOW);  
}

void ledGreen(){
  digitalWrite(kokkino, LOW);
  digitalWrite(prasino, HIGH);  
}

void ledBlink(){

  for(int i = 0; i < 10; i++){
    digitalWrite(kokkino, LOW);
    delay(250);
    digitalWrite(kokkino, HIGH);
    delay(250);  
  }
  
}
