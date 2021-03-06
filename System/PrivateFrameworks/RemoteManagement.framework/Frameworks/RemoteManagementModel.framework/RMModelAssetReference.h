/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:55 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/RemoteManagement.framework/Frameworks/RemoteManagementModel.framework/RemoteManagementModel
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface RMModelAssetReference : NSObject {

	NSString* _identifier;
	NSArray* _assetTypes;

}

@property (nonatomic,copy,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * assetTypes;               //@synthesize assetTypes=_assetTypes - In the implementation block
-(NSString *)identifier;
-(NSArray *)assetTypes;
-(id)initWithIdentifier:(id)arg1 assetTypes:(id)arg2 ;
@end

