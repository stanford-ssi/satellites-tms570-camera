/** @file sys_main.c 
 *   @brief Application main file
 *   @date 05-Oct-2016
 *   @version 04.06.00
 *
 *   This file contains an empty main function,
 *   which can be used for the application.
 */

/* 
 * Copyright (C) 2009-2016 Texas Instruments Incorporated - www.ti.com
 *
 *
 *  Redistribution and use in source and binary forms, with or without
 *  modification, are permitted provided that the following conditions
 *  are met:
 *
 *    Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 *    Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the
 *    distribution.
 *
 *    Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 *  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 *  "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 *  LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 *  A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 *  OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 *  SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 *  LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 *  DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 *  THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 *  (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 *  OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 */


/* USER CODE BEGIN (0) */
/* USER CODE END */

/* Include Files */

#include "sys_common.h"

/* USER CODE BEGIN (1) */
#include "mibspi.h"
/* USER CODE END */

/** @fn void main(void)
 *   @brief Application main function
 *   @note This function is empty by default.
 *
 *   This function is called after startup.
 *   The user can use this function to implement the application.
 */

/* USER CODE BEGIN (2) */
//void SIMOtest();
//void SOMItest();
/* USER CODE END */

int main(void)
{
    /* USER CODE BEGIN (3) */

    //ones data set
    uint16_t txBuffer[] = {0xDEAD, 0xBEEF, 0x1234, 0x5678, 0xFFFF, 0xFFFF, 0xFFFF, 0xFFFF};

    //zeros data set
    uint16_t txBuffer2[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

    mibspiInit();

    while(1){
        int n;
        for (n=0; n<50; n=n+1){
            mibspiSetData(mibspiREG3, 0, txBuffer);
            mibspiTransfer(mibspiREG3,0);
        }


    }

    /* USER CODE END */

    return 0;
}


/* USER CODE BEGIN (4) */



//void SOMItest() {
//    //ones data set
//    uint16_t txBuffer[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
//
//    //zeros data set
//    uint16_t txBuffer2[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};
//
//    mibspiInit();
//
//    while(1){
//        int n, m;
//        for (n=0; n<500000; n++){
//            mibspiSetData(mibspiREG3, 0, txBuffer);
//            mibspiTransfer(mibspiREG3,0);
//        }
//        for (m=0;m<500000;m++){
//            mibspiSetData(mibspiREG3, 0, txBuffer2);
//            mibspiTransfer(mibspiREG3,0);
//        }
//    }
//
//}

/* USER CODE END */
