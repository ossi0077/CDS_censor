#define A_cds A0

void setup()
{
	//�ø��� ��� ���巹��Ʈ ����
	Serial.begin(9600);
}

void loop()
{
	//analogRead�� ������ ���а��� �н��ϴ�.
	//analogRead�� 0~5V�� ������ 0~1024�� ���������� ������ŵ�ϴ�.
	//���� ����� ���Ͽ� �������� ������ ���� �����մϴ�.
	double value = analogRead(A_cds) * 0.0048828125;
	Serial.print("value : ");
	Serial.println(value);
	delay(1000);
}