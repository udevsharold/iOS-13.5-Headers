/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:13 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class UIFont;


@protocol CNAtomViewResembling <NSObject>
@property (assign,nonatomic) BOOL isPrimaryAddressAtom; 
@property (assign,nonatomic) BOOL hidesVIPIndicator; 
@property (assign,nonatomic) BOOL separatorHidden; 
@property (assign,nonatomic) BOOL separatorIsLeftAligned; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) int separatorStyle; 
@property (assign,nonatomic) unsigned long long presentationOptions; 
@property (nonatomic,readonly) CGPoint baselinePoint; 
@property (nonatomic,readonly) UIEdgeInsets edgeInsets; 
@property (nonatomic,retain) UIFont * titleFont; 
@required
-(double)scale;
-(void)setScale:(double)arg1;
-(UIEdgeInsets)edgeInsets;
-(int)separatorStyle;
-(void)setSeparatorStyle:(int)arg1;
-(UIFont *)titleFont;
-(void)setTitleFont:(id)arg1;
-(CGPoint)baselinePoint;
-(void)setSeparatorHidden:(BOOL)arg1;
-(void)setPresentationOptions:(unsigned long long)arg1;
-(unsigned long long)presentationOptions;
-(void)setSeparatorIsLeftAligned:(BOOL)arg1;
-(void)performBuildInAnimationFromTextColor:(id)arg1 withDuration:(double)arg2;
-(void)setIsPrimaryAddressAtom:(BOOL)arg1;
-(BOOL)isPrimaryAddressAtom;
-(BOOL)hidesVIPIndicator;
-(void)setHidesVIPIndicator:(BOOL)arg1;
-(BOOL)separatorHidden;
-(BOOL)separatorIsLeftAligned;

@end

