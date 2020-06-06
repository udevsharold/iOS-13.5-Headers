/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:04 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AnnotationKit/AnnotationKit-Structs.h>
#import <UIKitCore/UIButton.h>

@class AKCalloutBar;

@interface AKCalloutButton : UIButton {

	int _position;
	AKCalloutBar* _bar;

}

@property (assign,nonatomic) int position;                           //@synthesize position=_position - In the implementation block
@property (assign,nonatomic,__weak) AKCalloutBar * bar;              //@synthesize bar=_bar - In the implementation block
-(int)position;
-(void)setPosition:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(AKCalloutBar *)bar;
-(void)setBar:(AKCalloutBar *)arg1 ;
@end

