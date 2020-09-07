/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:30:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoardServices/FrontBoardServices-Structs.h>
#import <FrontBoardServices/FBSSceneSettings.h>

@class NSArray;

@interface FBSMutableSceneSettings : FBSSceneSettings

@property (nonatomic,copy) NSArray * occlusions; 
@property (assign,nonatomic) CGRect frame; 
@property (assign,nonatomic) double level; 
@property (assign,nonatomic) long long interfaceOrientation; 
@property (assign,getter=isForeground,nonatomic) BOOL foreground; 
@property (assign,getter=isBackgrounded,nonatomic) BOOL backgrounded; 
+(BOOL)_isMutable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(void)setLevel:(double)arg1 ;
-(void)setForeground:(BOOL)arg1 ;
-(void)setInterfaceOrientation:(long long)arg1 ;
-(void)setDisplayConfiguration:(id)arg1 ;
-(id)otherSettings;
-(void)setOccluded:(BOOL)arg1 ;
-(void)_setDisplayConfiguration:(id)arg1 ;
-(void)setOcclusions:(NSArray *)arg1 ;
-(id)transientLocalSettings;
-(id)ignoreOcclusionReasons;
-(void)setBackgrounded:(BOOL)arg1 ;
@end
