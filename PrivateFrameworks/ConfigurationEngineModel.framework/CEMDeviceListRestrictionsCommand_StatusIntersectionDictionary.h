/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:14 PM Malaysia Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ConfigurationEngineModel/ConfigurationEngineModel-Structs.h>
#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSDictionary;

@interface CEMDeviceListRestrictionsCommand_StatusIntersectionDictionary : CEMPayloadBase {

	NSDictionary* _statusANY;

}

@property (nonatomic,copy) NSDictionary * statusANY;              //@synthesize statusANY=_statusANY - In the implementation block
+(id)build;
+(id)allowedStatusKeys;
+(id)buildRequiredOnly;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(NSDictionary *)statusANY;
-(void)setStatusANY:(NSDictionary *)arg1 ;
@end

