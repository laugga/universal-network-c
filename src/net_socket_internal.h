/*
 
 net_socket_internal.h
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

#ifndef __universal_network_socket_internal_h__
#define __universal_network_socket_internal_h__

static NetError net_socket_set_nonblock(NetError * error, net_socket_t s);
static NetError net_socket_set_dispatch_sources(NetError * error, net_socket_t s);

static void net_socket_suspend_write(net_socket_t s);
static void net_socket_resume_write(net_socket_t s);

static void net_socket_destroy_async(net_socket_t s); // Asynchronous method called when both read+write dispatch sources cancel handlers are done

#endif