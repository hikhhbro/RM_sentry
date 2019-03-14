/**
	|--------------------------------- Copyright --------------------------------|
	|                                                                            |
	|                      (C) Copyright 2019,����ƽͷ��,                         |
	|           1 Xuefu Rd, Huadu Qu, Guangzhou Shi, Guangdong Sheng, China      |
	|                           All Rights Reserved                              |
	|                                                                            |
	|           By(GCU The wold of team | ����������ѧ����ѧԺ������Ұ�Ƕ�)         |
	|                    https://github.com/GCUWildwolfteam                      |
	|----------------------------------------------------------------------------|
	|--FileName    : enconder.h                                                
	|--Version     : v1.0                                                            
	|--Author      : ����ƽͷ��                                                       
	|--Date        : 2019-03-14               
	|--Libsupports : 
	|--Description :                                                       
	|--FunctionList                                                       
	|-------1. ....                                                       
	|          <version>:                                                       
	|     <modify staff>:                                                       
	|             <data>:                                                       
	|      <description>:                                                        
	|-------2. ...                                                       
	|-----------------------------declaration of end-----------------------------|
 **/
#ifndef __ENCONDER_H 
#define __ENCONDER_H 
#include "baseclass.h"
typedef struct incrementalEnconderStruct
{
	uint32_t last_data;//��¼�ϴε�CNTֵ
	int16_t counter;
	TIM_HandleTypeDef* htim;//��ȡ��ʱ����ַָ��
	float coefficient;//ÿ���׵��������ĵ���
}incrementalEnconderStruct;
	HAL_StatusTypeDef EnconderInit(incrementalEnconderStruct* ies, \
											TIM_HandleTypeDef* htim, uint16_t radius, int16_t poles);
	uint32_t GetPosition(incrementalEnconderStruct* ies);
#endif	// __ENCONDER_H
/*-----------------------------------file of end------------------------------*/

