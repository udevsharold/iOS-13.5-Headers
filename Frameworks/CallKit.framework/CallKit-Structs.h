/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CXVoicemailUpdateHasSet {
	unsigned sender : 1;
	unsigned dateReceived : 1;
	unsigned audioFileURL : 1;
	unsigned played : 1;
	unsigned trashed : 1;
} CXVoicemailUpdateHasSet;

typedef struct sqlite3* sqlite3Ref;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct CXCallUpdateHasSet {
	unsigned remoteHandle : 1;
	unsigned localizedCallerName : 1;
	unsigned emergency : 1;
	unsigned usingBaseband : 1;
	unsigned blocked : 1;
	unsigned ttyType : 1;
	unsigned supportsTTYWithVoice : 1;
	unsigned mayRequireBreakBeforeMake : 1;
	unsigned hasVideo : 1;
	unsigned audioCategory : 1;
	unsigned audioMode : 1;
	unsigned audioInterruptionProvider : 1;
	unsigned audioInterruptionOperationMode : 1;
	unsigned verificationStatus : 1;
	unsigned priority : 1;
	unsigned requiresInCallSounds : 1;
	unsigned inCallSoundRegion : 1;
	unsigned supportsHolding : 1;
	unsigned supportsGrouping : 1;
	unsigned supportsUngrouping : 1;
	unsigned supportsDTMF : 1;
	unsigned supportsUnambiguousMultiPartyState : 1;
	unsigned supportsAddCall : 1;
	unsigned supportsSendingToVoicemail : 1;
	unsigned videoStreamToken : 1;
	unsigned crossDeviceIdentifier : 1;
	unsigned ISOCountryCode : 1;
	unsigned localSenderIdentityUUID : 1;
	unsigned localSenderIdentityAccountUUID : 1;
	unsigned remoteParticipantHandles : 1;
	unsigned activeRemoteParticipantHandles : 1;
	unsigned handoffContext : 1;
	unsigned context : 1;
	unsigned prefersExclusiveAccessToCellularNetwork : 1;
	unsigned remoteUplinkMuted : 1;
	unsigned shouldSuppressInCallUI : 1;
	unsigned requiresAuthentication : 1;
	unsigned mutuallyExclusiveCall : 1;
} CXCallUpdateHasSet;

typedef struct sqlite3_stmt* sqlite3_stmtRef;

