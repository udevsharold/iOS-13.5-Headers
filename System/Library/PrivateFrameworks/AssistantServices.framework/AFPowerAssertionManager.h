/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:31:41 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface AFPowerAssertionManager : NSObject {

	unsigned _powerAssertion;
	NSString* _debugName;

}
-(id)init;
-(void)dealloc;
-(void)releasePowerAssertion;
-(void)takePowerAssertionWithName:(id)arg1 ;
@end
