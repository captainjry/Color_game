// TCS230 pins connected to Arduino
const int s0 = 2;
const int s1 = 3;
const int s2 = 5;
const int s3 = 4;
const int out = 6;
const int out2 = 7;
const int out3 = 8;
const int out4 = 9;
const int out5 = 10;
const int out6 = 11;
const int out7 = 12;
const int out8 = 13;

// Each block setup

//Block1
int red = 0;
int green = 0;
int blue = 0;

//Block2
int red2 = 0;
int green2 = 0;
int blue2 = 0;

//Block3
int red3 = 0;
int green3 = 0;
int blue3 = 0;

//Block4
int red4 = 0;
int green4 = 0;
int blue4 = 0;

//Block5
int red5 = 0;
int green5 = 0;
int blue5 = 0;

//Block6
int red6 = 0;
int green6 = 0;
int blue6 = 0;

//Block7
int red7 = 0;
int green7 = 0;
int blue7 = 0;

//Block8
int red8 = 0;
int green8 = 0;
int blue8 = 0;

//Variables
int totalScore = 0;
int redCount = 0;
int yellowCount = 0;
int pinkCount = 0;
int orangeCount = 0;
int greenCount = 0;
int blueCount = 0;
int purpleCount = 0;
int whiteCount = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(s0, OUTPUT);
  pinMode(s1, OUTPUT);
  pinMode(s2, OUTPUT);
  pinMode(s3, OUTPUT);
  pinMode(out, INPUT);
  pinMode(out2, INPUT);
  pinMode(out3, INPUT);
  pinMode(out4, INPUT);
  pinMode(out5, INPUT);
  pinMode(out6, INPUT);
  pinMode(out7, INPUT);
  pinMode(out8, INPUT);

  digitalWrite(s0, HIGH);
  digitalWrite(s1, HIGH);
}

void loop()
{
  color();
  Serial.print("R1 =");
  Serial.print(red, DEC);
  Serial.print(" G1 = ");
  Serial.print(green, DEC);
  Serial.print(" B1 = ");
  Serial.print(blue, DEC);
  Serial.print("\t");

  Serial.print("R2 =");
  Serial.print(red2, DEC);
  Serial.print(" G2 = ");
  Serial.print(green2, DEC);
  Serial.print(" B2 = ");
  Serial.print(blue2, DEC);
  Serial.print("\t");

  Serial.print("R3 =");
  Serial.print(red3, DEC);
  Serial.print(" G3 = ");
  Serial.print(green3, DEC);
  Serial.print(" B3 = ");
  Serial.print(blue3, DEC);
  Serial.print("\t");

  Serial.print("R4 =");
  Serial.print(red4, DEC);
  Serial.print(" G4 = ");
  Serial.print(green4, DEC);
  Serial.print(" B4 = ");
  Serial.print(blue4, DEC);
  Serial.print("\t");

  Serial.print("R5 =");
  Serial.print(red5, DEC);
  Serial.print(" G5 = ");
  Serial.print(green5, DEC);
  Serial.print(" B5 = ");
  Serial.print(blue5, DEC);
  Serial.print("\t");

  Serial.print("R6 =");
  Serial.print(red6, DEC);
  Serial.print(" G6 = ");
  Serial.print(green6, DEC);
  Serial.print(" B6 = ");
  Serial.print(blue6, DEC);
  Serial.print("\t");

  Serial.print("R7 =");
  Serial.print(red7, DEC);
  Serial.print(" G7 = ");
  Serial.print(green7, DEC);
  Serial.print(" B7 = ");
  Serial.print(blue7, DEC);
  Serial.print("\t");

  Serial.print("R8 =");
  Serial.print(red8, DEC);
  Serial.print(" G8 = ");
  Serial.print(green8, DEC);
  Serial.print(" B8 = ");
  Serial.print(blue8, DEC);
  Serial.print("\t");



  if (red < blue && red < green && red < 25)
  {
    if (redCount == 0) {
      if (green - blue >= 10 && green - blue <= 25 && green - ( 2 * red ) >= 8)
      {
        Serial.println(" - (Red Color), Correct Answer");
        totalScore += 1;
        Serial.println("Total score ="); Serial.println(totalScore);
        redCount = 1;
      }
      else {
        Serial.println("Incorrect answer");
        redCount = 0;
      }
    }
  }
  else if (red2 < blue2 && red2 < green2 && red2 < 25) {
    if (yellowCount == 0) {
      if (green2 - red2 <= 10 && green2 - red2 >= -3 && blue2 >= green2)
      {
        Serial.println(" - (Yellow Color)");
        totalScore += 1;
        Serial.println("Total score ="); Serial.println(totalScore);
        yellowCount = 1;
      }
      else {
        Serial.println("Incorrect answer");
        yellowCount = 0;
      }
    }
  }
  else if (red3 < blue3 && red3 < green3 && red3 < 25) {
    if (pinkCount == 0) {
      if (blue3 - red3 >= 3 && blue3 - red3 <= 10 &&  green3 - ( 2 * red3 ) <= 5)
      {
        Serial.println(" - (Pink Color)");
        totalScore += 1;
        Serial.println("Total score ="); Serial.println(totalScore);
        pinkCount = 1;
      }
      else {
        Serial.println("Incorrect answer");
        pinkCount = 0;
      }
    }
  }
  else if (red4 < blue4 && red4 < green4 && red4 < 25) {
    if (orangeCount == 0) {
      if (green4 - blue4 >= -5 && green4 - blue4 <= 5 && green4 - ( 2 * red4 ) <= 5 )
      {
        Serial.println(" - (Orange Color)");
        totalScore += 1;
        Serial.println("Total score ="); Serial.println(totalScore);
        orangeCount = 1;
      }
      else {
        Serial.println("Incorrect answer");
        orangeCount = 0;
      }
    }
  }


  else if (greenCount == 0) {
    if (green5 < red5 && green5 < blue5 && green5 < 25)
    {
      Serial.println(" - (Green Color)");
      totalScore += 1;
      Serial.println("Total score ="); Serial.println(totalScore);
      greenCount = 1;
    }
    else {
      Serial.println("Incorrect answer");
      greenCount = 0;
    }
  }

  else if (blueCount == 0) {
    if ((red6 > green6 &&  blue6 < green6) && blue6 < 25 && red6 > 40)
    {
      Serial.println(" - (Blue Color)");
      totalScore += 1;
      Serial.println("Total score ="); Serial.println(totalScore);
      blueCount = 1;
    }
    else {
      Serial.println("Incorrect answer");
      blueCount = 0;
    }
  }

  else if (purpleCount == 0) {
    if (red7 - (2 * blue7) >= -2 && red7 - (2 * blue7) <= 5 && green7 - red7 < 10)
    {
      Serial.println(" - (Purple Color)");
      totalScore += 1;
      Serial.println("Total score ="); Serial.println(totalScore);
      purpleCount = 1;
    }
    else {
      Serial.println("Incorrect answer");
      purpleCount = 0;
    }
  }

  else if (whiteCount == 0) {
    if (blue8 < red8 && blue8 < green8 && (blue8 < 25) && (red8 < 25) && (green8 < 25))
    {

      if (red8 - green8 <= 5 && red8 - green8 >= 0 && (((green8 - blue8) < 5) || ((red8 - blue8) < 5) && blue8 < 50))
      {
        Serial.println(" - (White Color)");
        totalScore += 1;
        Serial.println("Total score ="); Serial.println(totalScore);
        whiteCount = 1;
      }
      else {
        Serial.println("Incorrect answer");
        whiteCount = 0;
      }
    }
  }

  Serial.println();

  delay(300);
}


void color()
{
  digitalWrite(s2, LOW);
  digitalWrite(s3, LOW);
  //count OUT, pRed, RED
  red = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  red2 = pulseIn(out2, digitalRead(out2) == HIGH ? LOW : HIGH);
  red3 = pulseIn(out3, digitalRead(out3) == HIGH ? LOW : HIGH);
  red4 = pulseIn(out4, digitalRead(out4) == HIGH ? LOW : HIGH);
  red5 = pulseIn(out5, digitalRead(out5) == HIGH ? LOW : HIGH);
  red6 = pulseIn(out6, digitalRead(out6) == HIGH ? LOW : HIGH);
  red7 = pulseIn(out7, digitalRead(out7) == HIGH ? LOW : HIGH);
  red8 = pulseIn(out8, digitalRead(out8) == HIGH ? LOW : HIGH);
  digitalWrite(s3, HIGH);

  //count OUT, pBLUE, BLUE
  blue = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  blue2 = pulseIn(out2, digitalRead(out2) == HIGH ? LOW : HIGH);
  blue3 = pulseIn(out3, digitalRead(out3) == HIGH ? LOW : HIGH);
  blue4 = pulseIn(out4, digitalRead(out4) == HIGH ? LOW : HIGH);
  blue5 = pulseIn(out5, digitalRead(out5) == HIGH ? LOW : HIGH);
  blue6 = pulseIn(out6, digitalRead(out6) == HIGH ? LOW : HIGH);
  blue7 = pulseIn(out7, digitalRead(out7) == HIGH ? LOW : HIGH);
  blue8 = pulseIn(out8, digitalRead(out8) == HIGH ? LOW : HIGH);
  digitalWrite(s2, HIGH);

  //count OUT, pGreen, GREEN
  green = pulseIn(out, digitalRead(out) == HIGH ? LOW : HIGH);
  green2 = pulseIn(out2, digitalRead(out2) == HIGH ? LOW : HIGH);
  green3 = pulseIn(out3, digitalRead(out3) == HIGH ? LOW : HIGH);
  green4 = pulseIn(out4, digitalRead(out4) == HIGH ? LOW : HIGH);
  green5 = pulseIn(out5, digitalRead(out5) == HIGH ? LOW : HIGH);
  green6 = pulseIn(out6, digitalRead(out6) == HIGH ? LOW : HIGH);
  green7 = pulseIn(out7, digitalRead(out7) == HIGH ? LOW : HIGH);
  green8 = pulseIn(out8, digitalRead(out8) == HIGH ? LOW : HIGH);
}
