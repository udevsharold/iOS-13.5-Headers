/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:48:14 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/TemplateKit.framework/TemplateKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIButton.h>

@class NSString, UIFont;

@interface TLKTextButton : UIButton {

	unsigned long long _prominence;
	NSString* _title;

}

@property (assign,nonatomic) unsigned long long prominence;              //@synthesize prominence=_prominence - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIFont * font; 
-(id)init;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)addTarget:(id)arg1 action:(SEL)arg2 ;
-(UIFont *)font;
-(void)didMoveToWindow;
-(void)_dynamicUserInterfaceTraitDidChange;
-(unsigned long long)prominence;
-(void)setProminence:(unsigned long long)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(BOOL)allowsVibrancy;
@end

