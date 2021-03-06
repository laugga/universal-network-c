/*
 
 net_addr.h
 universal-network-c
 
 Copyright (cc) 2012 Luis Laugga.
 Some rights reserved, all wrongs deserved.
 
 Licensed under a Creative Commons Attribution-ShareAlike 3.0 License;
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://creativecommons.org/licenses/by-sa/3.0/
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" basis,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
*/

#ifndef __universal_network_net_addr_h__
#define __universal_network_net_addr_h__

#include <netinet/in.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netdb.h>
#include <ifaddrs.h>
#include <net/if.h>
#include <arpa/inet.h>
#include <stdbool.h>

#include "net_error.h"

#define kNetHostMaxLen 256

typedef struct sockaddr_in net_addr_t;

void net_addr_zero(net_addr_t * addr);
void net_addr_set(net_addr_t * addr, const unsigned int host, const unsigned short port, bool doHostToNetwork);
void net_addr_copy(net_addr_t * dest, const net_addr_t * src);

unsigned int net_addr_get_host(net_addr_t * addr);
unsigned short net_addr_get_port(net_addr_t * addr);

bool net_addr_is_equal(const net_addr_t *, const net_addr_t *);
bool net_addr_is_valid(net_addr_t *); // Not zeroes

NetError net_addr_resolve(net_addr_t * addr, const char * name, const unsigned short port);
NetError net_addr_local(net_addr_t * addr);

void net_addr_log(net_addr_t * addr); // Debug

#endif
