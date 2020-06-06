/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:53:30 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/MobileMailUI.framework/MobileMailUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMailUI/MobileMailUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIView;

@interface _MFMessageContentResizeWrapperView : UIView {

	UIView* _snapshotView;
	double _snapshotViewYOrigin;

}

@property (nonatomic,retain) UIView * snapshotView;                   //@synthesize snapshotView=_snapshotView - In the implementation block
@property (assign,nonatomic) double snapshotViewYOrigin;              //@synthesize snapshotViewYOrigin=_snapshotViewYOrigin - In the implementation block
-(void)dealloc;
-(void)layoutSubviews;
-(UIView *)snapshotView;
-(void)setSnapshotView:(UIView *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 snapshotView:(id)arg2 ;
-(double)snapshotViewYOrigin;
-(void)setSnapshotViewYOrigin:(double)arg1 ;
@end

