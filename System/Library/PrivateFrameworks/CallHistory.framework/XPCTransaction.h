/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CallHistory.framework/CallHistory
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface XPCTransaction : NSObject {

	BOOL _tranactionCreated;
	NSString* _reason;

}

@property (assign) BOOL tranactionCreated;              //@synthesize tranactionCreated=_tranactionCreated - In the implementation block
@property (retain) NSString * reason;                   //@synthesize reason=_reason - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)reason;
-(id)initWithReason:(id)arg1 ;
-(void)setReason:(NSString *)arg1 ;
-(BOOL)tranactionCreated;
-(void)setTranactionCreated:(BOOL)arg1 ;
@end

