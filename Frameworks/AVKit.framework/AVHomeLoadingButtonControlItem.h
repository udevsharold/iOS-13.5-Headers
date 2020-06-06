/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:40 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVKit/AVControlItem.h>

@class AVLoadingButtonView;

@interface AVHomeLoadingButtonControlItem : AVControlItem {

	AVLoadingButtonView* _loadingButtonView;

}

@property (nonatomic,retain) AVLoadingButtonView * loadingButtonView;              //@synthesize loadingButtonView=_loadingButtonView - In the implementation block
@property (assign,nonatomic) BOOL showsLoadingIndicator; 
-(id)view;
-(void)_updateTintColor;
-(void)setShowsLoadingIndicator:(BOOL)arg1 ;
-(BOOL)showsLoadingIndicator;
-(id)initWithTitle:(id)arg1 type:(long long)arg2 ;
-(void)_buttonTouchUpInside:(id)arg1 ;
-(AVLoadingButtonView *)loadingButtonView;
-(void)setLoadingButtonView:(AVLoadingButtonView *)arg1 ;
@end

