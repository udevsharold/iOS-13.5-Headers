/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistant.framework/SetupAssistant
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface BYDeviceConfiguration : NSObject {

	NSString* _productVersion;

}

@property (assign,nonatomic) NSString * productVersion;              //@synthesize productVersion=_productVersion - In the implementation block
+(id)currentConfiguration;
-(id)init;
-(NSString *)productVersion;
-(void)setProductVersion:(NSString *)arg1 ;
@end

