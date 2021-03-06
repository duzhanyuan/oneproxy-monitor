 /*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 * 
 * @FileName: socketutil.h
 * @Description: TODO
 * All rights Reserved, Designed By huih
 * @Company: onexsoft
 * @Author: hui
 * @Version: V1.0
 * @Date: 2017年1月20日 上午10:07:44
 *  
 */

#ifndef UTIL_SOCKETUTIL_H_
#define UTIL_SOCKETUTIL_H_

#include "systemapi.h"
#include "stringbuf.h"

class SocketUtil {
public:
static int socket_writeData(int fd, const void* data, const unsigned int dataLen, int microsecond = 500);
static int socket_readData(int fd, void* data, const unsigned int dataLen, int microsecond = 500);
static int socket_readAllData(int fd, StringBuf& sb, int microsecond=500);
};


#endif /* UTIL_SOCKETUTIL_H_ */
