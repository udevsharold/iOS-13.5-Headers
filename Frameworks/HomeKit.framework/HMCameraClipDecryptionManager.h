/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface HMCameraClipDecryptionManager : NSObject {

	NSData* _key;

}

@property (copy,readonly) NSData * key;              //@synthesize key=_key - In the implementation block
-(NSData *)key;
-(id)initWithKey:(id)arg1 ;
-(id)dataFromEncryptedDataContext:(id)arg1 ;
@end

