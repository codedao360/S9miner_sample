/*
 * sd.h
 *
 *  Created on: 2020��6��25��
 *      Author: DENG
 */

#ifndef SRC_SD_H_
#define SRC_SD_H_



int SD_Init(void);
int SD_Transfer_read(char *FileName,u32 DestinationAddress,u32 ByteLength);
int SD_Transfer_write(char *FileName,u32 SourceAddress,u32 ByteLength);

#endif /* SRC_SD_H_ */
