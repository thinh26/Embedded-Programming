int latchPin = 0; // khai báo các chân kết nối thanh ghi dịch
int clockPin = 2;
int dataPin  = 1;

int pins [8] = {3, 4, 5, 6, 7, 8, 9, 10}; // các chân cathode chung

byte A[8] = {   B00111100, // mã để hiển thị ký tự A lên led ma trận
                B01100110,
                B01100110,
                B01111110,
                B01100110,
                B01100110,
                B01100110,
                B01100110
            };

byte B[8] = {   B01111100, // mã để hiển thị ký tự B lên led ma trận
                B01000010,
                B01000010,
                B01111100,
                B01000010,
                B01000010,
                B01000010,
                B01111100
            };
byte C[8] = {   B00111100, // mã để hiển thị ký tự C lên led ma trận
                B01000010,
                B01000000,
                B01000000,
                B01000000,
                B01000000,
                B01000010,
                B00111100
            };

byte D[8] = {   B01111100, // mã để hiển thị ký tự D lên led ma trận
                B01000010,
                B01000010,
                B01000010,
                B01000010,
                B01000010,
                B01000010,
                B01111100
            };


byte KHONG[8] = {   B00111100, // mã để hiển thị ký tự số 0 lên led ma trận
                    B01000010,
                    B01000010,
                    B01000010,
                    B01000010,
                    B01000010,
                    B01000010,
                    B00111100
            };
byte MOT[8] = {   B00000100, // mã để hiển thị ký tự số 1 lên led ma trận
                  B00001100,
                  B00010100,
                  B00100100,
                  B00000100,
                  B00000100,
                  B00000100,
                  B00000100
            };
byte HAI[8] = {   B01111110, // mã để hiển thị ký tự số 2 lên led ma trận
                  B00000010,
                  B00000010,
                  B01111110,
                  B01000000,
                  B01000000,
                  B01000000,
                  B01111110
            };
byte BA[8] = {    B01111110, // mã để hiển thị ký tự số 3 lên led ma trận
                  B00000010,
                  B00000010,
                  B01111110,
                  B00000010,
                  B00000010,
                  B00000000,
                  B01111110
            };
byte BON[8] = {   B01000010, // mã để hiển thị ký tự số 4 lên led ma trận
                  B01000010,
                  B01000010,
                  B01111110,
                  B00000010,
                  B00000010,
                  B00000010,
                  B00000010
            };
byte NAM[8] = {   B01111110, // mã để hiển thị ký tự số 5 lên led ma trận
                  B01000000,
                  B01000000,
                  B01111100,
                  B00000010,
                  B00000010,
                  B00000010,
                  B01111100
            };

void setup() {
  pinMode(latchPin, OUTPUT); // cấu hình các chân là ngõ ra

  pinMode(clockPin, OUTPUT);

  pinMode(dataPin, OUTPUT);

  for (int i = 0; i < 8; i++) { // vòng lặp để cấu hình các chân cathode chung
    pinMode(pins[i], OUTPUT);
    digitalWrite(pins[i], HIGH);
  }
}

void display_char(byte ch[8]) { // phương pháp ghép kênh
  for (int j = 0; j < 8; j++) {
    digitalWrite(latchPin, LOW);
    digitalWrite(pins[j], LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, ch[j]);
    digitalWrite(latchPin, HIGH);
    //delay(1);
    digitalWrite(latchPin, LOW);
    shiftOut(dataPin, clockPin, LSBFIRST, B00000000); //tắt hết led trước khi hiển thị ký tự tiếp theo
    digitalWrite(latchPin, HIGH);
    digitalWrite(pins[j], HIGH);
  }
}

void loop() {
  int k;
  for ( k = 0; k < 1000; k++) // hiển thị ký tự A là ký tự đã lập trình ở trên trong 1 giây
    display_char(A);
  for ( k = 0; k < 1000; k++) // hiển thị ký tự B là ký tự đã lập trình ở trên trong 1 giây
    display_char(B);
  for ( k = 0; k < 1000; k++) // hiển thị ký tự C là ký tự đã lập trình ở trên trong 1 giây
    display_char(C);
  for ( k = 0; k < 1000; k++) // hiển thị ký tự D là ký tự đã lập trình ở trên trong 1 giây
    display_char(D);
  for ( k = 0; k < 1000; k++) // hiển thị ký tự số 0 là ký tự đã lập trình ở trên trong 1 giây
    display_char(KHONG);
  for ( k = 0; k < 1000; k++) // hiển thị ký tự số 1 là ký tự đã lập trình ở trên trong 1 giây
    display_char(MOT);
  for ( k = 0; k < 1000; k++) // hiển thị ký tự số 2 là ký tự đã lập trình ở trên trong 1 giây
    display_char(HAI);
  for ( k = 0; k < 1000; k++) // hiển thị ký tự số 3 là ký tự đã lập trình ở trên trong 1 giây
    display_char(BA);
  for ( k = 0; k < 1000; k++) // hiển thị ký tự số 4 là ký tự đã lập trình ở trên trong 1 giây
    display_char(BON);
  for ( k = 0; k < 1000; k++) // hiển thị ký tự số 5 là ký tự đã lập trình ở trên trong 1 giây
    display_char(NAM);
  }
