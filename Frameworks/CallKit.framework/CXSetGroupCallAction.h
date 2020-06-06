/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/CallKit.framework/CallKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CallKit/CallKit-Structs.h>
#import <CallKit/CXCallAction.h>

@class NSUUID;

@interface CXSetGroupCallAction : CXCallAction {

	NSUUID* _callUUIDToGroupWith;

}

@property (nonatomic,copy) NSUUID * callUUIDToGroupWith;              //@synthesize callUUIDToGroupWith=_callUUIDToGroupWith - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)customDescription;
-(void)updateSanitizedCopy:(id)arg1 withZone:(NSZone*)arg2 ;
-(NSUUID *)callUUIDToGroupWith;
-(void)setCallUUIDToGroupWith:(NSUUID *)arg1 ;
-(id)initWithCallUUID:(id)arg1 callUUIDToGroupWith:(id)arg2 ;
@end

