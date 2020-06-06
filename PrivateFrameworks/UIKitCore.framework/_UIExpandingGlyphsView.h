/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:45 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>
#import <UIKitCore/_UIStatusBarDisplayable.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class NSAttributedString, NSArray, NSString, UIAccessibilityHUDItem;

@interface _UIExpandingGlyphsView : UIView <_UIStatusBarDisplayable, CAAnimationDelegate> {

	BOOL _expandsFromLeftToRight;
	BOOL _fadesOut;
	int _remainingAnimationCount;
	NSAttributedString* _attributedString;
	double _baselineOffset;
	NSArray* _imageViews;
	/*^block*/id _completionBlock;
	CGSize _intrinsicSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL wantsCrossfade; 
@property (nonatomic,readonly) BOOL prefersBaselineAlignment; 
@property (nonatomic,readonly) long long overriddenVerticalAlignment; 
@property (nonatomic,readonly) UIAccessibilityHUDItem * accessibilityHUDRepresentation; 
@property (nonatomic,retain) NSArray * imageViews;                                                   //@synthesize imageViews=_imageViews - In the implementation block
@property (nonatomic,copy) id completionBlock;                                                       //@synthesize completionBlock=_completionBlock - In the implementation block
@property (assign,nonatomic) int remainingAnimationCount;                                            //@synthesize remainingAnimationCount=_remainingAnimationCount - In the implementation block
@property (assign,nonatomic) CGSize intrinsicSize;                                                   //@synthesize intrinsicSize=_intrinsicSize - In the implementation block
@property (nonatomic,retain) NSAttributedString * attributedString;                                  //@synthesize attributedString=_attributedString - In the implementation block
@property (nonatomic,readonly) double baselineOffset;                                                //@synthesize baselineOffset=_baselineOffset - In the implementation block
@property (assign,nonatomic) BOOL expandsFromLeftToRight;                                            //@synthesize expandsFromLeftToRight=_expandsFromLeftToRight - In the implementation block
@property (assign,nonatomic) BOOL fadesOut;                                                          //@synthesize fadesOut=_fadesOut - In the implementation block
-(void)setAttributedString:(NSAttributedString *)arg1 ;
-(id)completionBlock;
-(void)setCompletionBlock:(id)arg1 ;
-(NSAttributedString *)attributedString;
-(double)baselineOffset;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(BOOL)prefersBaselineAlignment;
-(void)setImageViews:(NSArray *)arg1 ;
-(NSArray *)imageViews;
-(void)setExpandsFromLeftToRight:(BOOL)arg1 ;
-(void)animateCompletionBlock:(/*^block*/id)arg1 ;
-(void)setFadesOut:(BOOL)arg1 ;
-(int)remainingAnimationCount;
-(void)setRemainingAnimationCount:(int)arg1 ;
-(BOOL)expandsFromLeftToRight;
-(BOOL)fadesOut;
-(CGSize)intrinsicSize;
-(void)setIntrinsicSize:(CGSize)arg1 ;
@end

