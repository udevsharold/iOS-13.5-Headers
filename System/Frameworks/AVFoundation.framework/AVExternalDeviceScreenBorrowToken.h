/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:40:34 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class AVExternalDevice, NSString;

@interface AVExternalDeviceScreenBorrowToken : NSObject {

	AVExternalDevice* _externalDevice;
	NSString* _client;
	NSString* _reason;

}

@property (nonatomic,readonly) NSString * client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) NSString * reason;              //@synthesize reason=_reason - In the implementation block
-(id)init;
-(void)dealloc;
-(NSString *)reason;
-(NSString *)client;
-(id)initWithExternalDevice:(id)arg1 client:(id)arg2 reason:(id)arg3 ;
@end

