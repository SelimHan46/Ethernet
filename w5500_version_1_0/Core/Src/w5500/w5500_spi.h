/*
 * w5500_spi.h
 *
 *  Created on: 22 Tem 2024
 *      Author: 90543
 */

#ifndef SRC_W5500_W5500_SPI_H_
#define SRC_W5500_W5500_SPI_H_

uint8_t SPIReadWrite(uint8_t data);
void wizchip_select(void);
void wizchip_deselect(void);
uint8_t wizchip_read();
void wizchip_write(uint8_t wb);
void wizchip_readburst(uint8_t* pBuf, uint16_t len);
void wizchip_writeburst(uint8_t* pBuf, uint16_t len);
void W5500IOInit();
void W5500Init();

#endif /* SRC_W5500_W5500_SPI_H_ */
