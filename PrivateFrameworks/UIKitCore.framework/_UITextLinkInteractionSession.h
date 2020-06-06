/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:32 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol UITextLinkInteraction;
#import <UIKitCore/UIKitCore-Structs.h>
@class UITextItemInteractionInteraction, UIView;

@interface _UITextLinkInteractionSession : NSObject {

	UITextItemInteractionInteraction* _interaction;
	UIView*<UITextLinkInteraction> _linkInteractionView;

}
-(void)dealloc;
-(BOOL)tapOnLinkWithGesture:(id)arg1 ;
-(BOOL)_allowItemInteractions;
-(id)initWithTextItemInteraction:(id)arg1 ;
-(BOOL)canInteractWithLinkAtPoint:(CGPoint)arg1 ;
@end

