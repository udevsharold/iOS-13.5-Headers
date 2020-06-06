/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImageAsset, NSString;

@interface _UIImageAssetMapEnvelope : NSObject {

	UIImageAsset* _imageAsset;
	NSString* _assetName;

}

@property (assign,nonatomic,__weak) UIImageAsset * imageAsset;              //@synthesize imageAsset=_imageAsset - In the implementation block
@property (nonatomic,copy) NSString * assetName;                            //@synthesize assetName=_assetName - In the implementation block
+(id)wrapAsset:(id)arg1 ;
-(id)description;
-(UIImageAsset *)imageAsset;
-(NSString *)assetName;
-(void)setAssetName:(NSString *)arg1 ;
-(void)setImageAsset:(UIImageAsset *)arg1 ;
@end

