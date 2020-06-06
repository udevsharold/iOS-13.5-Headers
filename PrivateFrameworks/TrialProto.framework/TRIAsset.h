/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TrialProto/TRIPBMessage.h>

@class NSString;

@interface TRIAsset : TRIPBMessage

@property (nonatomic,copy) NSString * assetId; 
@property (assign,nonatomic) BOOL hasAssetId; 
@property (assign,nonatomic) unsigned cloudKitIndex; 
@property (assign,nonatomic) BOOL hasCloudKitIndex; 
@property (nonatomic,copy) NSString * name; 
@property (assign,nonatomic) BOOL hasName; 
@property (assign,nonatomic) BOOL signed_p; 
@property (assign,nonatomic) BOOL hasSigned_p; 
+(id)descriptor;
@end

