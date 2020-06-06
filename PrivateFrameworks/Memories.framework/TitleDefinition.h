/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:56:10 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Memories/Memories-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PVEffect, NSString, UIColor, NSDictionary;

@interface TitleDefinition : NSObject <NSCopying> {

	BOOL _durationExplicitlySet;
	BOOL _anchorTargetOffsetExplicitlySet;
	BOOL _anchorLocalOffsetExplicitlySet;
	BOOL _audioEnabled;
	BOOL _temporarilyDisabled;
	int _duration;
	int _anchorTargetOffset;
	int _anchorLocalOffset;
	int _introFadeDuration;
	int _outroFadeDuration;
	PVEffect* _titleEffect;
	NSString* _titleName;
	NSString* _text;
	NSString* _text2;
	NSString* _text3;
	UIColor* _backgroundColor;
	UIColor* _primaryColor;
	UIColor* _secondaryColor;
	NSDictionary* _extendedDefinition;
	NSDictionary* _titleEffectSettings;

}

@property (nonatomic,readonly) int titleGroup; 
@property (nonatomic,readonly) int titleType; 
@property (nonatomic,readonly) NSString * displayName; 
@property (getter=isGeneric,nonatomic,readonly) BOOL generic; 
@property (getter=isMotion,nonatomic,readonly) BOOL motion; 
@property (nonatomic,retain) NSString * titleName;                                                                       //@synthesize titleName=_titleName - In the implementation block
@property (nonatomic,retain) NSString * text;                                                                            //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * text2;                                                                           //@synthesize text2=_text2 - In the implementation block
@property (nonatomic,retain) NSString * text3;                                                                           //@synthesize text3=_text3 - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                                                  //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * primaryColor;                                                                     //@synthesize primaryColor=_primaryColor - In the implementation block
@property (nonatomic,retain) UIColor * secondaryColor;                                                                   //@synthesize secondaryColor=_secondaryColor - In the implementation block
@property (assign,nonatomic) int duration;                                                                               //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) int anchorTargetOffset;                                                                     //@synthesize anchorTargetOffset=_anchorTargetOffset - In the implementation block
@property (assign,nonatomic) int anchorLocalOffset;                                                                      //@synthesize anchorLocalOffset=_anchorLocalOffset - In the implementation block
@property (assign,nonatomic) int introFadeDuration;                                                                      //@synthesize introFadeDuration=_introFadeDuration - In the implementation block
@property (assign,nonatomic) int outroFadeDuration;                                                                      //@synthesize outroFadeDuration=_outroFadeDuration - In the implementation block
@property (assign,getter=isDurationExplicitlySet,nonatomic) BOOL durationExplicitlySet;                                  //@synthesize durationExplicitlySet=_durationExplicitlySet - In the implementation block
@property (assign,getter=isAnchorTargetOffsetExplicitlySet,nonatomic) BOOL anchorTargetOffsetExplicitlySet;              //@synthesize anchorTargetOffsetExplicitlySet=_anchorTargetOffsetExplicitlySet - In the implementation block
@property (assign,getter=isAnchorLocalOffsetExplicitlySet,nonatomic) BOOL anchorLocalOffsetExplicitlySet;                //@synthesize anchorLocalOffsetExplicitlySet=_anchorLocalOffsetExplicitlySet - In the implementation block
@property (nonatomic,retain) NSDictionary * extendedDefinition;                                                          //@synthesize extendedDefinition=_extendedDefinition - In the implementation block
@property (assign,nonatomic) BOOL audioEnabled;                                                                          //@synthesize audioEnabled=_audioEnabled - In the implementation block
@property (nonatomic,readonly) int animationOutDuration; 
@property (nonatomic,readonly) int nominalOverallDuration; 
@property (nonatomic,readonly) PVEffect * titleEffect;                                                                   //@synthesize titleEffect=_titleEffect - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleEffectID; 
@property (nonatomic,copy) NSDictionary * titleEffectSettings;                                                           //@synthesize titleEffectSettings=_titleEffectSettings - In the implementation block
@property (assign,nonatomic) BOOL temporarilyDisabled;                                                                   //@synthesize temporarilyDisabled=_temporarilyDisabled - In the implementation block
+(id)objectFromPlist:(id)arg1 inProject:(id)arg2 ;
+(int)titleGroupForTitleName:(id)arg1 ;
+(int)titleTypeForTitleName:(id)arg1 ;
+(id)displayNameForTitleName:(id)arg1 ;
+(id)effectIDForTitleName:(id)arg1 ;
+(id)titleStyleRootForTitleName:(id)arg1 ;
+(id)titleStyleDisplayNameForTitleName:(id)arg1 themeID:(id)arg2 ;
+(id)titleDefinitionPlaceholderForTheme:(id)arg1 ;
+(id)titleNameFromTitleStyleRoot:(id)arg1 titleType:(int)arg2 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(int)duration;
-(NSString *)displayName;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setDuration:(int)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(int)titleType;
-(void)setPrimaryColor:(UIColor *)arg1 ;
-(void)setSecondaryColor:(UIColor *)arg1 ;
-(UIColor *)primaryColor;
-(UIColor *)secondaryColor;
-(void)setAudioEnabled:(BOOL)arg1 ;
-(BOOL)isMotion;
-(BOOL)audioEnabled;
-(void)setTemporarilyDisabled:(BOOL)arg1 ;
-(BOOL)temporarilyDisabled;
-(NSDictionary *)titleEffectSettings;
-(id)initWithTitleName:(id)arg1 ;
-(void)setTitleEffectSettings:(NSDictionary *)arg1 ;
-(void)setText2:(NSString *)arg1 ;
-(void)setText3:(NSString *)arg1 ;
-(NSString *)text2;
-(void)setOutroFadeDuration:(int)arg1 ;
-(PVEffect *)titleEffect;
-(int)anchorTargetOffset;
-(int)anchorLocalOffset;
-(id)plistRepresentation;
-(NSString *)titleEffectID;
-(void)setDurationExplicitlySet:(BOOL)arg1 ;
-(void)setAnchorTargetOffsetExplicitlySet:(BOOL)arg1 ;
-(void)setAnchorLocalOffsetExplicitlySet:(BOOL)arg1 ;
-(int)outroFadeDuration;
-(NSString *)text3;
-(BOOL)isDurationExplicitlySet;
-(BOOL)isAnchorTargetOffsetExplicitlySet;
-(BOOL)isAnchorLocalOffsetExplicitlySet;
-(int)introFadeDuration;
-(NSDictionary *)extendedDefinition;
-(void)setTitleName:(NSString *)arg1 ;
-(void)setAnchorTargetOffset:(int)arg1 ;
-(void)setAnchorLocalOffset:(int)arg1 ;
-(void)setIntroFadeDuration:(int)arg1 ;
-(void)setExtendedDefinition:(NSDictionary *)arg1 ;
-(BOOL)isGeneric;
-(void)updateWithTitleDefinition:(id)arg1 ;
-(int)animationOutDuration;
-(int)nominalOverallDuration;
-(int)titleGroup;
-(NSString *)titleName;
@end

