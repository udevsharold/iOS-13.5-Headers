/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:35 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDictionary, AVTPreset, NSString;

@interface AVTCoreModelPreset : NSObject {

	NSDictionary* _tags;
	AVTPreset* _preset;

}

@property (nonatomic,copy,readonly) NSString * identifier; 
@property (nonatomic,copy,readonly) NSString * localizedName; 
@property (nonatomic,copy,readonly) NSDictionary * tags;                   //@synthesize tags=_tags - In the implementation block
@property (nonatomic,readonly) AVTPreset * preset;                         //@synthesize preset=_preset - In the implementation block
+(id)tagSetFromPreset:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)identifier;
-(NSString *)localizedName;
-(NSDictionary *)tags;
-(id)initWithPreset:(id)arg1 ;
-(AVTPreset *)preset;
-(id)copyForPairedCategory:(long long)arg1 ;
@end

