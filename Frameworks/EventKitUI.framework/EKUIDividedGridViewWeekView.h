/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:37 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSMutableArray, NSLayoutConstraint;

@interface EKUIDividedGridViewWeekView : UIView {

	NSMutableArray* _buttonViews;
	NSLayoutConstraint* _heightConstraint;

}

@property (retain) NSMutableArray * buttonViews;                       //@synthesize buttonViews=_buttonViews - In the implementation block
@property (__weak) NSLayoutConstraint * heightConstraint;              //@synthesize heightConstraint=_heightConstraint - In the implementation block
-(id)init;
-(NSLayoutConstraint *)heightConstraint;
-(void)setHeightConstraint:(NSLayoutConstraint *)arg1 ;
-(NSMutableArray *)buttonViews;
-(void)setButtonViews:(NSMutableArray *)arg1 ;
@end

