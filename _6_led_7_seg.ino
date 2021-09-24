int ssd [10][7] = {{1, 1, 1, 1, 1, 1, 0}, {0, 1, 1, 0, 0, 0, 0}, {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1}, {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 0, 0}, {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 0, 0, 1, 1}};
int pins[7] = {13,12, 11, 10, 9, 8, 7};
int select[2] = {6, 5};

void setup() {
  for (int i = 0; i < 7; i++) {
    pinMode(pins[i], OUTPUT);
  }
  pinMode(select[0], OUTPUT);
  pinMode(select[1], OUTPUT);
  pinMode(select[2], OUTPUT);
    pinMode(select[3], OUTPUT);
      pinMode(select[4], OUTPUT);
        pinMode(select[5], OUTPUT);
  
  digitalWrite(select[0], 1);
  digitalWrite(select[1], 1);
  digitalWrite(select[2], 1);
  digitalWrite(select[3], 1);
  digitalWrite(select[4], 1);
  digitalWrite(select[5], 1);

}

void loop() {
  for (int f = 0; f < 10; f++) {
    for (int k = 0; k < 10; k++)
    {
      for (int t = 0; t < 500; t++)
      {
        digitalWrite(select[0], 0);

        for (int i = 0; i < 7; i++) {
          digitalWrite(pins[i], ssd[k][i]);
        }
        delay(1);
        digitalWrite(select[0], 1);
        digitalWrite(select[1], 0);
        for ( int i = 0; i < 10; i++) {
          digitalWrite(pins[i], ssd[f][i]);
        }

        delay(1);
        digitalWrite(select[1], 1);
      }
    }
  }
}
