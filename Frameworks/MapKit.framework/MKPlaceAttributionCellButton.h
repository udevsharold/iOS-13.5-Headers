/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:21 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@protocol MKPlaceAttributionCellButtonDelegate;
@interface MKPlaceAttributionCellButton : UIButton {

	BOOL _highlighted;
	id<MKPlaceAttributionCellButtonDelegate> _buttonDelegate;

}

@property (assign,nonatomic,__weak) id<MKPlaceAttributionCellButtonDelegate> buttonDelegate;              //@synthesize buttonDelegate=_buttonDelegate - In the implementation block
-(BOOL)isHighlighted;
-(void)setHighlighted:(BOOL)arg1 ;
-(id<MKPlaceAttributionCellButtonDelegate>)buttonDelegate;
-(void)setButtonDelegate:(id<MKPlaceAttributionCellButtonDelegate>)arg1 ;
@end

