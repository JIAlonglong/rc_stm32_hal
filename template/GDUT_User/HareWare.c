#include "HareWare.h"
#include "main.h"
void MotorInit(void)
{
	/*********���ֳ�ʼ��*********/
	//��������ʼ��
	ElmoInit(&hcan1);
	ElmoInit(&hcan2);

		//���������ֵ���ٶȻ� acc/dec 100,000,000
	VelLoopCfg(&hcan1, LEFT_FRONT_ID, 100000000, 100000000);
	VelLoopCfg(&hcan1, RIGHT_FRONT_ID, 100000000, 100000000);
	VelLoopCfg(&hcan1, LEFT_REAR_ID, 100000000, 100000000);
	VelLoopCfg(&hcan1, RIGHT_REAR_ID, 100000000, 100000000);
	
	//����ת����λ�û� acc/dec 1,500,000,000 vel 430*32768 14,000,000
	PosLoopCfg(&hcan1, LEFT_FRONT_TURNING_ID, 1500000000, 1500000000,14000000);
	PosLoopCfg(&hcan1, RIGHT_FRONT_TURNING_ID, 1500000000, 1500000000,14000000);
	PosLoopCfg(&hcan1, LEFT_REAR_TURNING_ID, 1500000000, 1500000000,14000000);
	PosLoopCfg(&hcan1, RIGHT_REAR_TURNING_ID, 1500000000, 1500000000,14000000);
	
		//���ʹ��
	MotorOn(&hcan1,LEFT_FRONT_ID);
	MotorOn(&hcan1,RIGHT_FRONT_ID);
	MotorOn(&hcan1,LEFT_REAR_ID);
	MotorOn(&hcan1,RIGHT_REAR_ID);
	MotorOn(&hcan1,LEFT_FRONT_TURNING_ID);
	MotorOn(&hcan1,RIGHT_FRONT_TURNING_ID);
	MotorOn(&hcan1,LEFT_REAR_TURNING_ID);
	MotorOn(&hcan1,RIGHT_REAR_TURNING_ID);
}
