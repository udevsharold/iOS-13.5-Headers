/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:34:07 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarKit.framework/AvatarKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, SCNMaterialProperty;

@interface AVTStickerShaderModifierProperty : NSObject {

	NSString* _name;
	NSString* _type;
	id _value;
	SCNMaterialProperty* _materialProperty;

}

@property (nonatomic,readonly) SCNMaterialProperty * materialProperty;              //@synthesize materialProperty=_materialProperty - In the implementation block
@property (nonatomic,readonly) NSString * name;                                     //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * type;                                     //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) id value;                                            //@synthesize value=_value - In the implementation block
+(id)shaderModifierPropertyCache;
+(id)shaderModifierPropertyFromDictionary:(id)arg1 assetsPath:(id)arg2 ;
-(NSString *)name;
-(NSString *)type;
-(id)value;
-(id)initWithName:(id)arg1 type:(id)arg2 value:(id)arg3 ;
-(SCNMaterialProperty *)materialProperty;
@end

