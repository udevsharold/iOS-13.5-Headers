/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:03 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskMessage.h>

@class NSError;

@interface CATTaskMessageError : CATTaskMessage {

	NSError* _taskError;

}

@property (nonatomic,retain) NSError * taskError;              //@synthesize taskError=_taskError - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)taskError;
-(id)initWithTaskUUID:(id)arg1 taskError:(id)arg2 ;
-(void)setTaskError:(NSError *)arg1 ;
@end

