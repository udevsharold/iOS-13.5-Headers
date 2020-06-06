/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iAdServices.framework/iAdServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface ADAdSpaceEventInfo : NSObject <NSSecureCoding> {

	unsigned long long _screenfuls;
	unsigned long long _slotPosition;
	unsigned long long _reuseCount;
	long long _lastErrorCode;

}

@property (assign,nonatomic) unsigned long long screenfuls;                //@synthesize screenfuls=_screenfuls - In the implementation block
@property (assign,nonatomic) unsigned long long slotPosition;              //@synthesize slotPosition=_slotPosition - In the implementation block
@property (assign,nonatomic) unsigned long long reuseCount;                //@synthesize reuseCount=_reuseCount - In the implementation block
@property (assign,nonatomic) long long lastErrorCode;                      //@synthesize lastErrorCode=_lastErrorCode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setLastErrorCode:(long long)arg1 ;
-(unsigned long long)screenfuls;
-(unsigned long long)slotPosition;
-(id)initWithRecipientInfo:(id)arg1 reuseCount:(unsigned long long)arg2 ;
-(void)setScreenfuls:(unsigned long long)arg1 ;
-(void)setSlotPosition:(unsigned long long)arg1 ;
-(long long)lastErrorCode;
-(unsigned long long)reuseCount;
-(void)setReuseCount:(unsigned long long)arg1 ;
@end

