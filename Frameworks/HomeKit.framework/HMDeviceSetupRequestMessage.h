/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:57 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TouchRemote/TRRequestMessage.h>

@class NSData;

@interface HMDeviceSetupRequestMessage : TRRequestMessage {

	NSData* _payload;

}

@property (nonatomic,copy,readonly) NSData * payload;              //@synthesize payload=_payload - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithPayload:(id)arg1 ;
-(NSData *)payload;
@end

