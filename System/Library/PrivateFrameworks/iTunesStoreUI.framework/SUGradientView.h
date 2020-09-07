/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <UIKitCore/UIView.h>

@class SUGradient;

@interface SUGradientView : UIView {

	CGGradientRef _cgGradient;
	SUGradient* _gradient;

}

@property (nonatomic,copy) SUGradient * gradient;              //@synthesize gradient=_gradient - In the implementation block
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(void)setGradient:(SUGradient *)arg1 ;
-(SUGradient *)gradient;
@end
