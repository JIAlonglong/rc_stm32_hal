#include "HareWare.h"
#include "main.h"
void MotorInit(void)
{
	//��������ʼ��
	ElmoInit(&hcan1);
	ElmoInit(&hcan2);

}
