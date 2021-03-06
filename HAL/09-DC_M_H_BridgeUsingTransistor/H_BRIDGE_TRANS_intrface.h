/**************************************************************************************************************************************
* LOG:                                                                   							   								  *
* VERSION					AUTHOR           					DATE 						DESCRIPTION 		   					  *
* 1.0.0 					Kareem Hassaan						20 DEC,2021					- Initial Creation						  *
**************************************************************************************************************************************/
/**************************************************************************************************************************************
* ! Title      	: H-Bridge By Transistor Driver                                                        							      *                     
* ! File Name	: H_BRIDGE_TRANS_intrface.h                                                     							          *
* ! Description : This file has the Definitions needed		         		        							                      *
* ! Compiler  	: GNU AVR cross Compiler                                            							                      *
* ! Target 	  	: Atmega32 Micro-Controller                                         							                      *
* ! Layer 	  	: HAL                   						                                         							  *
**************************************************************************************************************************************/
#ifndef H_BRIDGE_TRANS_INTERFACE_H
#define H_BRIDGE_TRANS_INTERFACE_H
/*************************************************************************************************************************************/
/***************************************************** Functions Prototypes **********************************************************/
/*************************************************************************************************************************************/
/**************************************************************************************************************************************
* Function Name		: H_TRANS_H_BRIDGE_VoidInit																	                      *
* Parameters (in)	: None                                                           							                      *
* Parameters (out)	: None																						                      *
* Return value		: None																						                      *
* Description		: Function to initialize the pins of the H-Bridge to output									                      *
**************************************************************************************************************************************/
void H_TRANS_H_BRIDGE_VoidInit();
/**************************************************************************************************************************************
* Function Name		: H_TRANS_H_BRIDGE_VoidPIN1_ON																                      *
* Parameters (in)	: None                                                           							                      *
* Parameters (out)	: None																						                      *
* Return value		: None																						                      *
* Description		: Function to Make the Pin1 ON (Postive Terminal)									                              *
**************************************************************************************************************************************/
void H_TRANS_H_BRIDGE_VoidPIN1_ON();
/**************************************************************************************************************************************
* Function Name		: H_TRANS_H_BRIDGE_VoidPIN2_ON																                      *
* Parameters (in)	: None                                                           							                      *
* Parameters (out)	: None																						                      *
* Return value		: None																						                      *
* Description		: Function to Make the Pin2 ON (Postive Terminal)									                              *
**************************************************************************************************************************************/
void H_TRANS_H_BRIDGE_VoidPIN2_ON();


#endif /*H_BRIDGE_TRANS_INTERFACE_H*/