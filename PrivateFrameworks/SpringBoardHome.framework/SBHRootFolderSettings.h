/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:39 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PrototypeTools/PTSettings.h>

@interface SBHRootFolderSettings : PTSettings {

	BOOL _adjustableLayoutEnabled;
	double _portraitTopLayoutInset;
	double _portraitBottomLayoutInset;
	double _portraitSideLayoutInset;
	double _landscapeTopLayoutInset;
	double _landscapeBottomLayoutInset;
	double _landscapeSideLayoutInset;

}

@property (assign,getter=isAdjustableLayoutEnabled,nonatomic) BOOL adjustableLayoutEnabled;              //@synthesize adjustableLayoutEnabled=_adjustableLayoutEnabled - In the implementation block
@property (assign,nonatomic) double portraitTopLayoutInset;                                              //@synthesize portraitTopLayoutInset=_portraitTopLayoutInset - In the implementation block
@property (assign,nonatomic) double portraitBottomLayoutInset;                                           //@synthesize portraitBottomLayoutInset=_portraitBottomLayoutInset - In the implementation block
@property (assign,nonatomic) double portraitSideLayoutInset;                                             //@synthesize portraitSideLayoutInset=_portraitSideLayoutInset - In the implementation block
@property (assign,nonatomic) double landscapeTopLayoutInset;                                             //@synthesize landscapeTopLayoutInset=_landscapeTopLayoutInset - In the implementation block
@property (assign,nonatomic) double landscapeBottomLayoutInset;                                          //@synthesize landscapeBottomLayoutInset=_landscapeBottomLayoutInset - In the implementation block
@property (assign,nonatomic) double landscapeSideLayoutInset;                                            //@synthesize landscapeSideLayoutInset=_landscapeSideLayoutInset - In the implementation block
+(id)settingsControllerModule;
-(void)setDefaultValues;
-(void)setAdjustableLayoutEnabled:(BOOL)arg1 ;
-(void)setPortraitTopLayoutInset:(double)arg1 ;
-(void)setPortraitBottomLayoutInset:(double)arg1 ;
-(void)setPortraitSideLayoutInset:(double)arg1 ;
-(void)setLandscapeTopLayoutInset:(double)arg1 ;
-(void)setLandscapeBottomLayoutInset:(double)arg1 ;
-(void)setLandscapeSideLayoutInset:(double)arg1 ;
-(BOOL)isAdjustableLayoutEnabled;
-(double)portraitTopLayoutInset;
-(double)portraitBottomLayoutInset;
-(double)portraitSideLayoutInset;
-(double)landscapeTopLayoutInset;
-(double)landscapeBottomLayoutInset;
-(double)landscapeSideLayoutInset;
@end

