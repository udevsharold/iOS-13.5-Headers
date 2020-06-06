/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:25 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIStatusBarBackgroundActivityItem.h>

@class _UIStatusBarPillView;

@interface _UIStatusBarPillBackgroundActivityItem : _UIStatusBarBackgroundActivityItem {

	long long _previousType;
	_UIStatusBarPillView* _combinedView;
	CGSize _pillSize;

}

@property (assign,nonatomic) long long previousType;                           //@synthesize previousType=_previousType - In the implementation block
@property (nonatomic,retain) _UIStatusBarPillView * combinedView;              //@synthesize combinedView=_combinedView - In the implementation block
@property (assign,nonatomic) CGSize pillSize;                                  //@synthesize pillSize=_pillSize - In the implementation block
+(id)pillCombinedDisplayIdentifier;
+(BOOL)shouldKeepIconVisibleForActivityType:(long long)arg1 ;
-(id)applyUpdate:(id)arg1 toDisplayItem:(id)arg2 ;
-(id)imageForUpdate:(id)arg1 ;
-(id)createDisplayItemForIdentifier:(id)arg1 ;
-(CGSize)pillSize;
-(id)viewForIdentifier:(id)arg1 ;
-(void)setPillSize:(CGSize)arg1 ;
-(id)_backgroundActivityViewForIdentifier:(id)arg1 ;
-(id)_backgroundColorForActivityType:(long long)arg1 ;
-(id)initWithIdentifier:(id)arg1 statusBar:(id)arg2 ;
-(_UIStatusBarPillView *)combinedView;
-(BOOL)_shouldBounceWhenTransitioningFromType:(long long)arg1 toType:(long long)arg2 ;
-(void)updatedDisplayItemsWithData:(id)arg1 ;
-(void)_create_combinedView;
-(BOOL)shouldUpdateIndicatorForIdentifier:(id)arg1 ;
-(long long)previousType;
-(void)setPreviousType:(long long)arg1 ;
-(void)setCombinedView:(_UIStatusBarPillView *)arg1 ;
@end

