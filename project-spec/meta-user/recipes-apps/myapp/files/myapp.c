/*
* Copyright (C) 2013-2022  Xilinx, Inc.  All rights reserved.
* Copyright (c) 2022-2023 Advanced Micro Devices, Inc. All Rights Reserved.
*
* Permission is hereby granted, free of charge, to any person
* obtaining a copy of this software and associated documentation
* files (the "Software"), to deal in the Software without restriction,
* including without limitation the rights to use, copy, modify, merge,
* publish, distribute, sublicense, and/or sell copies of the Software,
* and to permit persons to whom the Software is furnished to do so,
* subject to the following conditions:
*
* The above copyright notice and this permission notice shall be included
* in all copies or substantial portions of the Software.
*
* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
* IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
* FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
* IN NO EVENT SHALL XILINX  BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY,
* WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
* CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
*
* Except as contained in this notice, the name of the Xilinx shall not be used
* in advertising or otherwise to promote the sale, use or other dealings in this
* Software without prior written authorization from Xilinx.
*
*/

#include <stdio.h>
#include "asm/unistd.h"
#include "linux/unistd.h"
#include "sys/syscall.h"

int main(int argc, char **argv)
{
    int *p;
    printf("%d\n",sizeof(p));
    printf("Hello World Remastered!\n");
    printf("pid:%d\n",syscall(__NR_getpid,0));
    printf("kill:%d\n",__NR_kill);
    printf("getpid:%d\n",__NR_getpid);
    printf("My syscall:%d\n",syscall(451));
    printf("Simulated FPGA:%d\n",syscall(452));
//    printf("Number of Syscalls :%d\n",__NR_syscalls);
//x    printf("my syscall:%d\n",__NR_hello_world);    
//    syscall(__NR_hello_world,0);
    return 0;
}
