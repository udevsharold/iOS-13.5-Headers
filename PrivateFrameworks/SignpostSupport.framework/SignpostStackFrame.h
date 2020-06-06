/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:50:52 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSUUID;

@interface SignpostStackFrame : NSObject {

	NSUUID* _symbolOwnerUUID;
	unsigned long long _offset;

}

@property (nonatomic,readonly) NSUUID * symbolOwnerUUID;               //@synthesize symbolOwnerUUID=_symbolOwnerUUID - In the implementation block
@property (nonatomic,readonly) unsigned long long offset;              //@synthesize offset=_offset - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(unsigned long long)offset;
-(NSUUID *)symbolOwnerUUID;
-(id)initWithUUID:(id)arg1 offset:(unsigned long long)arg2 ;
-(id)_serializableArrayRepresentation;
-(id)initWithArrayRepresentation:(id)arg1 ;
@end

