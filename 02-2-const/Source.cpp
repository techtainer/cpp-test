// const 앞에 pointer가 없으면 값 변경 불가.
// const 앞에 pointer가 있으면 주소 변경 불가.

int main(void)
{
	int val1 = 10;
	int val2 = 20;

	// 값 변경 불가
	const int *ptr1 = &val1;
	*ptr1 = val2; // 값 변경 불가
	ptr1 = &val2; // 주소 변경 가능

	// 주소 변경 불가
	int * const ptr2 = &val1;
	*ptr2 = val2; // 값 변경 가능
	ptr2 = &val2; // 주소 변경 불가

	// 값 , 주소 모두 변경 불가
	const int * const ptr3 = &val1;
	*ptr3 = val2;
	ptr3 = &val2;

	return 0;
}