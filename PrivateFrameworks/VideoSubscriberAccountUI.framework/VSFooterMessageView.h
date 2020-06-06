/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/PSHeaderFooterView.h>

@class NSString, VSFontCenter;

@interface VSFooterMessageView : UIView <PSHeaderFooterView> {

	NSString* _primaryMessage;
	NSString* _secondaryMessage;
	NSString* _tertiaryMessage;
	VSFontCenter* _fontCenter;

}

@property (nonatomic,copy) NSString * primaryMessage;                //@synthesize primaryMessage=_primaryMessage - In the implementation block
@property (nonatomic,copy) NSString * secondaryMessage;              //@synthesize secondaryMessage=_secondaryMessage - In the implementation block
@property (nonatomic,copy) NSString * tertiaryMessage;               //@synthesize tertiaryMessage=_tertiaryMessage - In the implementation block
@property (nonatomic,retain) VSFontCenter * fontCenter;              //@synthesize fontCenter=_fontCenter - In the implementation block
-(void)dealloc;
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithSpecifier:(id)arg1 ;
-(double)preferredHeightForWidth:(double)arg1 ;
-(VSFontCenter *)fontCenter;
-(void)setFontCenter:(VSFontCenter *)arg1 ;
-(NSString *)primaryMessage;
-(void)setPrimaryMessage:(NSString *)arg1 ;
-(NSString *)secondaryMessage;
-(void)setSecondaryMessage:(NSString *)arg1 ;
-(NSString *)tertiaryMessage;
-(void)setTertiaryMessage:(NSString *)arg1 ;
@end

