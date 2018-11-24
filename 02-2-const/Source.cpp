// const �տ� pointer�� ������ �� ���� �Ұ�.
// const �տ� pointer�� ������ �ּ� ���� �Ұ�.

int main(void)
{
	int val1 = 10;
	int val2 = 20;

	// �� ���� �Ұ�
	const int *ptr1 = &val1;
	*ptr1 = val2; // �� ���� �Ұ�
	ptr1 = &val2; // �ּ� ���� ����

	// �ּ� ���� �Ұ�
	int * const ptr2 = &val1;
	*ptr2 = val2; // �� ���� ����
	ptr2 = &val2; // �ּ� ���� �Ұ�

	// �� , �ּ� ��� ���� �Ұ�
	const int * const ptr3 = &val1;
	*ptr3 = val2;
	ptr3 = &val2;

	return 0;
}