/******************************************************************/
/* Author	: Ahmed Salah										  */
/* Date		: 31 Aug 2020										  */
/* Version	: V01												  */
/******************************************************************/
#ifndef LEDMRX_PRIVATE_H
#define LEDMRX_PRIVATE_H


/*
*********************************************************************************************************
*                                       PRIVATE FUNCTION PROTOTYPES
*********************************************************************************************************
*/
void DisableAllCols(void);
void SetRowValues(u8 Copy_u8Data);
void ActivateColumn(const u8* const Value_u8Data, u8 Copy_u8ID);

#endif
//***************************************************************************************************************