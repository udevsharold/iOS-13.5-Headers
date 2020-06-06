/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:59 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct _NEFlowDirector* NEFlowDirectorRef;

typedef struct _NEFlow* NEFlowRef;

typedef struct __CFError* CFErrorRef;

typedef struct __CFDictionary* CFDictionaryRef;

typedef struct __CFString* CFStringRef;

typedef struct __SCNetworkService* SCNetworkServiceRef;

typedef struct __SCPreferences* SCPreferencesRef;

typedef struct __CFData* CFDataRef;

typedef struct ne_filter_globals* ne_filter_globalsRef;

typedef struct __SecIdentity* SecIdentityRef;

typedef struct __CNNetwork* CNNetworkRef;

typedef struct __CNPluginResponse* CNPluginResponseRef;

typedef struct __CNPluginCommand* CNPluginCommandRef;

typedef struct ccec_projective_point {
	unsigned long long xyz[1];
} ccec_projective_point;

typedef struct ccec_full_ctx {
	ccec_cp cp;
	unsigned char pad[8];
	ccec_projective_point point[0];
} ccec_full_ctx;

typedef union {
	ccec_full_ctx dhECPKey256[9];
	ccec_full_ctx dhECPKey384[13];
	ccec_full_ctx dhECPKey521[19];
} SCD_Union_NE16;

typedef union {
	unsigned char dhCurveKey25519[32];
} SCD_Union_NE17;

typedef union {
	SCD_Union_NE16 dhECPKey;
	SCD_Union_NE17 dhCurveKey;
} SCD_Union_NE18;

typedef struct OpaqueSecDHContext* OpaqueSecDHContextRef;

typedef struct __SecCertificate* SecCertificateRef;

typedef struct __SecPolicy* SecPolicyRef;

typedef struct EAPClientPluginData_s {
	void private;
	BOOL log_enabled;
	unsigned log_level;
	unsigned mtu;
	unsigned generation;
	void unique_id;
	unsigned unique_id_length;
	char* username;
	unsigned username_length;
	__CFData encryptedEAPIdentity;
	char* password;
	unsigned password_length;
	__CFDictionary properties;
	BOOL system_mode;
	__SecIdentity sec_identity;
	void* reserved[6];
} EAPClientPluginData_s;

typedef struct EAPClientModule_s* EAPClientModule_sRef;

typedef struct NEVirtualInterface_s* NEVirtualInterface_sRef;

typedef struct {
	int field1;
	unsigned char field2[12];
} SCD_Struct_NE25;

typedef struct nw_protocol {
	unsigned char flow_id[16];
	nw_protocol_identifier identifier;
	nw_protocol_callbacks callbacks;
	nw_protocol output_handler;
	void handle;
	nw_protocol default_input_handler;
	void output_handler_context;
} nw_protocol;

typedef struct nw_frame_array_s {
	nw_frame tqh_first;
	nw_frame tqh_last;
} nw_frame_array_s;

typedef struct NEIPSecDB_s* NEIPSecDB_sRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct channel* channelRef;

typedef struct channel_attr* channel_attrRef;

typedef struct __slot_desc* slot_descRef;

typedef struct interpose_frame {
	unsigned char ring_id;
	char* buffer;
	unsigned bufferLength;
	unsigned long long packet;
	__user_buflet buflet;
} interpose_frame;

typedef struct channel_ring_desc* channel_ring_descRef;

typedef struct network_config_cellular_blocked_observer_s* network_config_cellular_blocked_observer_sRef;

typedef struct __SCNetworkInterface* SCNetworkInterfaceRef;

