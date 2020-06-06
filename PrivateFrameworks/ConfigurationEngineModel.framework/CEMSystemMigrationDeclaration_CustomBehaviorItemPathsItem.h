/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:17 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSString, NSNumber;

@interface CEMSystemMigrationDeclaration_CustomBehaviorItemPathsItem : CEMPayloadBase {

	NSString* _payloadSourcePath;
	NSNumber* _payloadSourcePathInUserHome;
	NSString* _payloadTargetPath;
	NSNumber* _payloadTargetPathInUserHome;

}

@property (nonatomic,copy) NSString * payloadSourcePath;                        //@synthesize payloadSourcePath=_payloadSourcePath - In the implementation block
@property (nonatomic,copy) NSNumber * payloadSourcePathInUserHome;              //@synthesize payloadSourcePathInUserHome=_payloadSourcePathInUserHome - In the implementation block
@property (nonatomic,copy) NSString * payloadTargetPath;                        //@synthesize payloadTargetPath=_payloadTargetPath - In the implementation block
@property (nonatomic,copy) NSNumber * payloadTargetPathInUserHome;              //@synthesize payloadTargetPathInUserHome=_payloadTargetPathInUserHome - In the implementation block
+(id)allowedPayloadKeys;
+(id)buildWithSourcePath:(id)arg1 withSourcePathInUserHome:(id)arg2 withTargetPath:(id)arg3 withTargetPathInUserHome:(id)arg4 ;
+(id)buildRequiredOnlyWithSourcePath:(id)arg1 withSourcePathInUserHome:(id)arg2 withTargetPath:(id)arg3 withTargetPathInUserHome:(id)arg4 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayloadWithAssetProviders:(id)arg1 ;
-(void)setPayloadSourcePath:(NSString *)arg1 ;
-(void)setPayloadSourcePathInUserHome:(NSNumber *)arg1 ;
-(void)setPayloadTargetPath:(NSString *)arg1 ;
-(void)setPayloadTargetPathInUserHome:(NSNumber *)arg1 ;
-(NSString *)payloadSourcePath;
-(NSNumber *)payloadSourcePathInUserHome;
-(NSString *)payloadTargetPath;
-(NSNumber *)payloadTargetPathInUserHome;
@end

