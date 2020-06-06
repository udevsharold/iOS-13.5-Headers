/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:54:43 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ActionKit/FATException.h>

@class NSNumber, NSString;

@interface EDAMSystemException : FATException {

	NSNumber* _errorCode;
	NSString* _message;
	NSNumber* _rateLimitDuration;

}

@property (nonatomic,retain) NSNumber * errorCode;                      //@synthesize errorCode=_errorCode - In the implementation block
@property (nonatomic,retain) NSString * message;                        //@synthesize message=_message - In the implementation block
@property (nonatomic,retain) NSNumber * rateLimitDuration;              //@synthesize rateLimitDuration=_rateLimitDuration - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(NSNumber *)errorCode;
-(void)setErrorCode:(NSNumber *)arg1 ;
-(NSNumber *)rateLimitDuration;
-(void)setRateLimitDuration:(NSNumber *)arg1 ;
@end

