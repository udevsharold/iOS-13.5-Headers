/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:02 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIButton.h>

@class UISegment;

@interface UISegmentAccessibilityButton : UIButton {

	UISegment* _segment;

}

@property (nonatomic,retain) UISegment * segment;              //@synthesize segment=_segment - In the implementation block
+(id)buttonWithSegment:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)layoutSubviews;
-(id)hitTest:(CGPoint)arg1 forEvent:(GSEventRef)arg2 ;
-(void)setSegment:(UISegment *)arg1 ;
-(UISegment *)segment;
@end

