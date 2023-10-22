/*
 * SEVENSEGMENT_interface.h
 *
 *  Created on: Oct 13
 *      Author: Tarek Saleh
 */

#ifndef HAL_SEVENSEGMENT_INTERFACE_H_
#define HAL_SEVENSEGMENT_INTERFACE_H_

/*What are the functions of the SSG Hardware*/
//INITIALIZATION,DISPLAY,ENABLE,DISABLE,STOPDISPLAY
ES_t SevenSegment_enuInit(SSG_t * Copy_pAstrSevenSegmentConf);
ES_t SevenSegment_enuDisplayNumber(SSG_t * Copy_pstrSevenSegmentInfo ,u8_t Copy_u8_tNumber);
ES_t SevenSegment_enuEnableCommon(SSG_t * Copy_pstrSevenSegmentInfo);
ES_t SevenSegment_enuDisableCommon(SSG_t * Copy_pstrSevenSegmentInfo);
ES_t SevenSegment_enuEnableDot(SSG_t * Copy_pstrSevenSegmentInfo);
ES_t SevenSegment_enuDisableDot(SSG_t * Copy_pstrSevenSegmentInfo);
ES_t SevenSegment_enuStopDisplay(SSG_t * Copy_pstrSevenSegmentInfo); //stop display the common on GIO
ES_t SevenSegment_enuwrite(u16_t Copy_u16_tNumber);
void SevenSegment_Write(u8_t Copy_u8_tNumber);
ES_t SevenSegment_enuToggleDisplay(SSG_t * Copy_pstrSevenSegmentInfo);

#endif /* HAL_SEVENSEGMENT_INTERFACE_H_ */
