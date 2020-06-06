/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:49:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray, NSDictionary, UIImage;

@interface AVTPreset : NSObject {

	long long _category;
	NSString* _identifier;
	NSArray* _assets;
	NSString* _variant;
	float _intensity;
	BOOL _mirrored;
	NSArray* _dependencies;
	NSDictionary* _tags;
	NSDictionary* _specializationSettings;

}

@property (nonatomic,readonly) long long category; 
@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSString * displayableName; 
@property (nonatomic,readonly) NSString * localizedName; 
@property (nonatomic,readonly) UIImage * thumbnail; 
@property (nonatomic,readonly) BOOL hasComponent; 
@property (nonatomic,readonly) NSDictionary * tags;                      //@synthesize tags=_tags - In the implementation block
@property (readonly) NSDictionary * specializationSettings;              //@synthesize specializationSettings=_specializationSettings - In the implementation block
+(id)presetWithCategory:(long long)arg1 identifier:(id)arg2 ;
+(id)availablePresetsForCategory:(long long)arg1 ;
+(id)colorPresetsForCategory:(long long)arg1 colorIndex:(unsigned long long)arg2 ;
+(id)findPresetWithIdentifier:(id)arg1 inPresets:(id)arg2 ;
+(void)registerVariantNamed:(id)arg1 forComponentType:(long long)arg2 ;
+(void)loadPresets;
+(id)_colorPresetsForCategory:(long long)arg1 palette:(id)arg2 ;
+(id)colorPresetsForCategory:(long long)arg1 ;
+(void)enumerateVariantDependenciesForComponentType:(long long)arg1 usingBlock:(/*^block*/id)arg2 ;
+(id)secondaryColorPresetsForCategory:(long long)arg1 ;
-(id)init;
-(id)description;
-(NSString *)identifier;
-(long long)category;
-(NSString *)localizedName;
-(NSDictionary *)tags;
-(float)intensity;
-(id)maskImage;
-(id)cache;
-(id)assets;
-(UIImage *)thumbnail;
-(BOOL)hasComponent;
-(id)colorPresets;
-(NSDictionary *)specializationSettings;
-(void)rebuildSpecializationSettings;
-(NSString *)displayableName;
-(BOOL)hasDependency;
-(void)enumeratePresetDependencies:(/*^block*/id)arg1 ;
-(void)enumerateVariantDependencies:(/*^block*/id)arg1 ;
-(void)applyPresetOnAvatar:(id)arg1 ;
@end

