
/*
 * $Id: typedefs.h,v 1.154 2003/02/25 12:22:35 robertc Exp $
 *
 *
 * SQUID Web Proxy Cache          http://www.squid-cache.org/
 * ----------------------------------------------------------
 *
 *  Squid is the result of efforts by numerous individuals from
 *  the Internet community; see the CONTRIBUTORS file for full
 *  details.   Many organizations have provided support for Squid's
 *  development; see the SPONSORS file for full details.  Squid is
 *  Copyrighted (C) 2001 by the Regents of the University of
 *  California; see the COPYRIGHT file for full details.  Squid
 *  incorporates software developed and/or copyrighted by other
 *  sources; see the CREDITS file for full details.
 *
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *  
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *  
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111, USA.
 *
 */

#include "squid.h"

#ifndef SQUID_TYPEDEFS_H
#define SQUID_TYPEDEFS_H

typedef unsigned int store_status_t;
typedef unsigned int ping_status_t;
typedef unsigned int swap_status_t;
typedef signed int sfileno;
typedef signed int sdirno;

typedef struct
{
    size_t bytes;
    size_t kb;
}

kb_t;

typedef struct _acl_time_data acl_time_data;

typedef struct _acl_name_list acl_name_list;

typedef struct _acl_deny_info_list acl_deny_info_list;

typedef struct AuthUser auth_user_t;

class AuthUserRequest;
typedef AuthUserRequest auth_user_request_t;

typedef struct AuthUserHashPointer auth_user_hash_pointer;

typedef struct AuthUserIP auth_user_ip_t;

typedef struct _acl_proxy_auth_match_cache acl_proxy_auth_match_cache;

typedef struct _authscheme_entry authscheme_entry_t;

typedef struct _authScheme authScheme;

typedef struct _acl_snmp_comm acl_snmp_comm;

typedef class ACLList acl_list;

typedef struct _acl_address acl_address;

typedef struct _acl_tos acl_tos;

class ACLChecklist;

typedef struct _wordlist wordlist;

typedef struct _ushortlist ushortlist;

typedef struct _relist relist;

typedef struct _sockaddr_in_list sockaddr_in_list;

typedef struct _https_port_list https_port_list;

typedef struct _SquidConfig SquidConfig;

typedef struct _SquidConfig2 SquidConfig2;

typedef struct _close_handler close_handler;

typedef struct _dread_ctrl dread_ctrl;

typedef struct _dnsserver_t dnsserver_t;

typedef struct _dwrite_q dwrite_q;

typedef struct _ETag ETag;

class fde;

typedef struct _fileMap fileMap;

typedef struct _HttpReply http_reply;

typedef struct _HttpStatusLine HttpStatusLine;

typedef struct _HttpHeaderFieldAttrs HttpHeaderFieldAttrs;

typedef struct _HttpHeaderFieldInfo HttpHeaderFieldInfo;

typedef struct _HttpHeader HttpHeader;

typedef struct _HttpHdrCc HttpHdrCc;

typedef struct _HttpHdrSc HttpHdrSc;

typedef struct _HttpHdrScTarget HttpHdrScTarget;

typedef struct _TimeOrTag TimeOrTag;

typedef struct _HttpHeaderEntry HttpHeaderEntry;

typedef struct _HttpHeaderFieldStat HttpHeaderFieldStat;

typedef struct _HttpHeaderStat HttpHeaderStat;

typedef struct _HttpBody HttpBody;

typedef struct _HttpReply HttpReply;

typedef struct _ConnStateData ConnStateData;

typedef struct _ConnCloseHelperData ConnCloseHelperData;

typedef struct _ipcache_addrs ipcache_addrs;

typedef struct _domain_ping domain_ping;

typedef struct _domain_type domain_type;

typedef struct _DynPool DynPool;

typedef struct _Packer Packer;

typedef struct _StoreDigestCBlock StoreDigestCBlock;

typedef struct _DigestFetchState DigestFetchState;

typedef struct _PeerDigest PeerDigest;

typedef struct _peer peer;

typedef struct _net_db_name net_db_name;

typedef struct _net_db_peer net_db_peer;

typedef struct _netdbEntry netdbEntry;

typedef struct _ping_data ping_data;

typedef struct _ps_state ps_state;

typedef struct _HierarchyLogEntry HierarchyLogEntry;

typedef struct _pingerEchoData pingerEchoData;

typedef struct _pingerReplyData pingerReplyData;

typedef struct _icp_common_t icp_common_t;

typedef struct _Meta_data Meta_data;

typedef struct _iostats iostats;

class MemBuf;

class store_client;

class StoreEntry;

class SwapDir;

typedef struct _helper_flags helper_flags;

typedef struct _helper_stateful_flags helper_stateful_flags;

typedef struct _http_state_flags http_state_flags;

typedef struct _header_mangler header_mangler;

typedef struct _body_size body_size;

class request_t;

typedef struct _AccessLogEntry AccessLogEntry;

typedef struct _cachemgr_passwd cachemgr_passwd;

typedef struct _refresh_t refresh_t;

typedef struct _CommWriteStateData CommWriteStateData;

typedef struct _ErrorState ErrorState;

typedef struct _dlink_node dlink_node;

typedef struct _dlink_list dlink_list;

typedef struct _StatCounters StatCounters;

typedef struct _storeSwapLogData storeSwapLogData;

typedef struct _authConfig authConfig;

typedef struct _cacheSwap cacheSwap;

typedef struct _StatHist StatHist;

typedef struct _ClientInfo ClientInfo;

typedef struct _cd_guess_stats cd_guess_stats;

typedef struct _CacheDigest CacheDigest;

typedef struct _Version Version;

typedef struct _FwdState FwdState;

typedef struct _FwdServer FwdServer;

typedef struct _helper helper;

typedef struct _helper_stateful statefulhelper;

typedef struct _helper_server helper_server;

typedef struct _helper_stateful_server helper_stateful_server;

typedef struct _helper_request helper_request;

typedef struct _helper_stateful_request helper_stateful_request;

typedef struct _generic_cbdata generic_cbdata;

class storeIOState;

typedef struct _link_list link_list;

typedef struct _storefs_entry storefs_entry_t;

typedef struct _storerepl_entry storerepl_entry_t;

typedef struct _diskd_queue diskd_queue;

typedef struct _Logfile Logfile;

typedef struct _RemovalPolicy RemovalPolicy;

typedef struct _RemovalPolicyWalker RemovalPolicyWalker;

typedef struct _RemovalPurgeWalker RemovalPurgeWalker;

typedef struct _RemovalPolicyNode RemovalPolicyNode;

typedef struct _RemovalPolicySettings RemovalPolicySettings;

typedef struct _http_version_t http_version_t;

#if SQUID_SNMP
typedef variable_list *(oid_ParseFn) (variable_list *, snint *);

typedef struct _snmp_request_t snmp_request_t;
#endif

typedef void CWCB(int fd, char *, size_t size, comm_err_t flag, void *data);
typedef void CNCB(int fd, comm_err_t status, void *);
typedef void IOCB(int fd, char *, size_t size, comm_err_t flag, int xerrno, void *data);

typedef void FREE(void *);
typedef void CBDUNL(void *);
typedef void FOCB(void *, int fd, int errcode);
typedef void EVH(void *);
typedef void PF(int, void *);

/* disk.c / diskd.c callback typedefs */
typedef void DRCB(int, const char *buf, int size, int errflag, void *data);
/* Disk read CB */
typedef void DWCB(int, int, size_t, void *);	/* disk write CB */
typedef void DOCB(int, int errflag, void *data);	/* disk open CB */
typedef void DCCB(int, int errflag, void *data);	/* disk close CB */
typedef void DUCB(int errflag, void *data);	/* disk unlink CB */
typedef void DTCB(int errflag, void *data);	/* disk trunc CB */

typedef void FQDNH(const char *, void *);
typedef void IDCB(const char *ident, void *data);
typedef void IPH(const ipcache_addrs *, void *);
typedef void IRCB(peer *, peer_t, protocol_t, void *, void *data);
typedef void PSC(FwdServer *, void *);
typedef void RH(void *data, char *);
typedef void UH(void *data, wordlist *);
typedef int DEFER(int fd, void *data);
typedef int READ_HANDLER(int, char *, int);
typedef int WRITE_HANDLER(int, const char *, int);
typedef void CBCB(char *buf, ssize_t size, void *data);

typedef void STIOCB(void *their_data, int errflag, storeIOState *);
typedef void STFNCB(void *their_data, int errflag, storeIOState *);
typedef void STRCB(void *their_data, const char *buf, ssize_t len);

typedef void SIH(storeIOState *, void *);	/* swap in */
typedef int QS(const void *, const void *);	/* qsort */
typedef void STABH(void *);
typedef void ERCB(int fd, void *, size_t);
typedef void OBJH(StoreEntry *);
typedef void SIGHDLR(int sig);
typedef void STVLDCB(void *, int, int);
typedef void HLPCB(void *, char *buf);
typedef stateful_helper_callback_t HLPSCB(void *, void *lastserver, char *buf);
typedef int HLPSAVAIL(void *);
typedef void HLPSONEQ(void *);
typedef void HLPCMDOPTS(int *argc, char **argv);
typedef void IDNSCB(void *, rfc1035_rr *, int);

typedef void STFSSHUTDOWN(void);
typedef SwapDir *STFSNEW(void);

typedef double hbase_f(double);
typedef void StatHistBinDumper(StoreEntry *, int idx, double val, double size, int count);

/* append/vprintf's for Packer */
typedef void (*append_f) (void *, const char *buf, int size);
#if STDC_HEADERS
typedef void (*vprintf_f) (void *, const char *fmt, va_list args);
#else
typedef void (*vprintf_f) ();
#endif

/* MD5 cache keys */
typedef unsigned char cache_key;

/* context-based debugging, the actual type is subject to change */
typedef int Ctx;

/* in case we want to change it later */
typedef ssize_t mb_size_t;

/*iteration for headers; use HttpHeaderPos as opaque type, do not interpret */
typedef ssize_t HttpHeaderPos;

/* big mask for http headers */
typedef char HttpHeaderMask[8];

/* a common objPackInto interface; used by debugObj */
typedef void (*ObjPackMethod) (void *obj, Packer * p);

#if USE_HTCP

typedef struct _htcpReplyData htcpReplyData;
#endif

typedef RemovalPolicy *REMOVALPOLICYCREATE(wordlist * args);

typedef int STDIRSELECT(const StoreEntry *);

typedef struct _external_acl external_acl;

typedef struct _external_acl_entry external_acl_entry;

#endif /* SQUID_TYPEDEFS_H */
