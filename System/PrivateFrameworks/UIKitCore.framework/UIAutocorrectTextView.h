/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:12 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSString, UIFont;

@interface UIAutocorrectTextView : UIView {

	NSString* m_string;
	int m_type;
	int m_edgeType;
	UIFont* m_textFont;
	BOOL m_animating;
	BOOL m_isLongString;

}

@property (assign,nonatomic) BOOL animating; 
@property (assign,nonatomic) BOOL isLongString; 
-(void)dealloc;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(BOOL)pointInside:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setAnimating:(BOOL)arg1 ;
-(void)setEdgeType:(int)arg1 ;
-(CGRect)_calculateRectForExpandedHitRegion;
-(id)initWithFrame:(CGRect)arg1 string:(id)arg2 type:(int)arg3 edgeType:(int)arg4 ;
-(BOOL)animating;
-(BOOL)isLongString;
-(void)setIsLongString:(BOOL)arg1 ;
@end
