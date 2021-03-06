/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:55:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>

@class NSLayoutConstraint;

@interface CPSHairlineView : UIView {

	long long _axis;
	NSLayoutConstraint* _strokeThicknessConstraint;

}

@property (assign,nonatomic) long long axis;                                              //@synthesize axis=_axis - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * strokeThicknessConstraint;              //@synthesize strokeThicknessConstraint=_strokeThicknessConstraint - In the implementation block
+(id)grayHairlineViewAlongAxis:(long long)arg1 ;
-(long long)axis;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setAxis:(long long)arg1 ;
-(id)initWithAxis:(long long)arg1 color:(id)arg2 ;
-(void)setStrokeThicknessConstraint:(NSLayoutConstraint *)arg1 ;
-(void)_updateStrokeThickness;
-(NSLayoutConstraint *)strokeThicknessConstraint;
@end

