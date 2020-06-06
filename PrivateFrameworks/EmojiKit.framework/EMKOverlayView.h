/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:46:09 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/EmojiKit.framework/EmojiKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <EmojiKit/EmojiKit-Structs.h>
#import <UIKitCore/UIView.h>

@class EMKEmojiTokenList;

@interface EMKOverlayView : UIView {

	unsigned long long _numEmojiToShow;
	EMKEmojiTokenList* _emojiTokenList;
	CGRect _overlayRect;
	unsigned long long _selectedIndex;
	/*^block*/id _selectionHandler;
	long long _interfaceStyle;

}
-(void)dismiss;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)drawBackground:(CGRect)arg1 ;
-(void)drawForeground:(CGRect)arg1 ;
-(void)dismissWithSelectedEmojiToken:(id)arg1 ;
-(void)selectWithEvent:(id)arg1 ;
-(id)initWithView:(id)arg1 anchorRect:(CGRect)arg2 emojiTokenList:(id)arg3 selectionHandler:(/*^block*/id)arg4 ;
-(void)setView:(id)arg1 anchorRect:(CGRect)arg2 ;
@end

