/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:51:53 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CameraUI.framework/CameraUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface CAMBurstAnalysisResult : NSObject {

	NSString* _identifier;
	NSArray* _allAssetIdentifiers;
	NSArray* _goodAssetIdentifiers;
	NSString* _bestAssetIdentifier;

}

@property (nonatomic,copy,readonly) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSArray * allAssetIdentifiers;               //@synthesize allAssetIdentifiers=_allAssetIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSArray * goodAssetIdentifiers;              //@synthesize goodAssetIdentifiers=_goodAssetIdentifiers - In the implementation block
@property (nonatomic,copy,readonly) NSString * bestAssetIdentifier;              //@synthesize bestAssetIdentifier=_bestAssetIdentifier - In the implementation block
-(id)init;
-(id)description;
-(NSString *)identifier;
-(NSArray *)allAssetIdentifiers;
-(NSArray *)goodAssetIdentifiers;
-(NSString *)bestAssetIdentifier;
-(id)initWithIdentifier:(id)arg1 allAssetIdentifiers:(id)arg2 goodAssetIdentifiers:(id)arg3 bestAssetIdentifier:(id)arg4 ;
@end

