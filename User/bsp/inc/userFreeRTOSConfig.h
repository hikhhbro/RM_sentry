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
	|--FileName    : userFreeRTOSConfig.h                                                
	|--Version     : v1.0                                                            
	|--Author      : ����ƽͷ��                                                       
	|--Date        : 2019-03-16               
	|--Libsupports : 
	|--Description : ����FreeRTOS�ӿ�
  |               �û�FreeRTOS���ã���ͷ�ļ�����FreeRTOSConfig.h��������û������                                                      
	|--FunctionList                                                       
	|-------1. ....                                                       
	|          <version>:                                                       
	|     <modify staff>:                                                       
	|             <data>:                                                       
	|      <description>:                                                        
	|-------2. ...                                                       
	|-----------------------------declaration of end-----------------------------|
 **/
#ifndef __USERFREERTOSCONFIG_H 
#define __USERFREERTOSCONFIG_H 
	/* ----------------- �����ջ��С���� -------------------- */
   #define SYS_INIT_HEAP_SIZE    512//ϵͳ��ʼ����
   #define PARSE_HEAP_SIZE       256//���ݽ�������
   #define CHASSIS_HEAP_SIZE     512//��������
   #define GIMBAL_HEAP_SIZE      512//��̨����
   #define LED_TIP_HEAP_SIZE     512//led��ʾ����
   #define SYS_DETEC_HEAP_SIZE   1024//ϵͳ�Լ������У׼����
   #define DEBUG_HEAP_SIZE       1024//Ӳ������������ʾ����
	 #define RAMMER_HEAP_SIZE      512//�����������
	 #define TX_HEAP_SIZE          256//�û���������
	/* -------------- ���ж�ջ��С���� ----------------- */   
	/* ----------------- �����ڴ��С����-------------------- */
   #define TOTAL_HEAP_SIZE 								\
	         ((size_t)((										\
						 SYS_INIT_HEAP_SIZE + 				\
					   PARSE_HEAP_SIZE +						\
					   CHASSIS_HEAP_SIZE +					\
						 GIMBAL_HEAP_SIZE +						\
						 LED_TIP_HEAP_SIZE + 					\
						 DEBUG_HEAP_SIZE + 						\
						 SYS_DETEC_HEAP_SIZE+					\
						 RAMMER_HEAP_SIZE +          \
						 TX_HEAP_SIZE                \
																			 ) * 7))
		

/* -------------- �ض���freertos�����ڴ��С ----------------- */
  #ifdef configTOTAL_HEAP_SIZE
    #undef configTOTAL_HEAP_SIZE
  #endif
  #ifndef configTOTAL_HEAP_SIZE
    #define configTOTAL_HEAP_SIZE   TOTAL_HEAP_SIZE//���¶����������ڴ��С����ֹcubemx����֮���޸�
  #endif
#endif	// __USERFREERTOSCONFIG_H
/*-----------------------------------file of end------------------------------*/

