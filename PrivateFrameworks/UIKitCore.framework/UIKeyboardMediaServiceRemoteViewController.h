/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:38:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <UIKit/UIKeyboardMediaHostProtocol.h>

@protocol UIKeyboardMediaServiceRemoteViewControllerDelegate;
@class NSString;

@interface UIKeyboardMediaServiceRemoteViewController : _UIRemoteViewController <UIKeyboardMediaHostProtocol> {

	id<UIKeyboardMediaServiceRemoteViewControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<UIKeyboardMediaServiceRemoteViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
+(id)requestInlineViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(id)requestCardViewControllerWithConnectionHandler:(/*^block*/id)arg1 ;
+(BOOL)__shouldHostRemoteTextEffectsWindow;
-(id<UIKeyboardMediaServiceRemoteViewControllerDelegate>)delegate;
-(void)setDelegate:(id<UIKeyboardMediaServiceRemoteViewControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)dismissCard;
-(void)pasteImageAtFileHandle:(id)arg1 ;
-(void)presentCard;
-(void)stageStickerWithFileHandle:(id)arg1 url:(id)arg2 accessibilityLabel:(id)arg3 ;
-(void)requestInsertionPointCompletion:(/*^block*/id)arg1 ;
-(void)draggedStickerToPoint:(CGPoint)arg1 ;
@end

