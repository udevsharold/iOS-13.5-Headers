/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:36 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AvatarUI.framework/AvatarUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol AVTCollectionViewLayout
@required
-(CGRect*)frameForElementAtIndex:(long long)arg1 visibleBounds:(CGRect)arg2;
-(id)indexesForElementsInRect:(CGRect)arg1 visibleBounds:(CGRect)arg2 numberOfItems:(long long)arg3;
-(CGPoint*)centerForCenteringElementAtIndex:(long long)arg1 visibleBoundsSize:(CGSize)arg2 proposedOrigin:(CGPoint)arg3;
-(CGSize*)contentSizeForVisibleBounds:(CGRect)arg1 numberOfItems:(long long)arg2;
-(CGRect*)initialFrameForAppearingElementAtOriginForVisibleBounds:(CGRect)arg1;
-(CGRect*)finalFrameForDisappearingElementAtOriginForVisibleBounds:(CGRect)arg1;

@end

