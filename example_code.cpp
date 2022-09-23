#define A_cds A0

void setup()
{
	//시리얼 통신 보드레이트 설정
	Serial.begin(9600);
}

void loop()
{
	//analogRead로 들어오는 전압값을 읽습니다.
	//analogRead는 0~5V의 전압을 0~1024의 정수값으로 대응시킵니다.
	//따라서 상수를 곱하여 가독성이 좋도록 값을 변경합니다.
	double value = analogRead(A_cds) * 0.0048828125;
	Serial.print("value : ");
	Serial.println(value);
	delay(1000);
}