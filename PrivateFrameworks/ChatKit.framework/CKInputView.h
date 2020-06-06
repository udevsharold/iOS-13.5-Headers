/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:44:17 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIInputView.h>

@interface CKInputView : UIInputView {

	long long _lastContentSizeInterfaceOrientation;
	CGSize _lastContentSize;

}

@property (assign,nonatomic) CGSize lastContentSize;                                     //@synthesize lastContentSize=_lastContentSize - In the implementation block
@property (assign,nonatomic) long long lastContentSizeInterfaceOrientation;              //@synthesize lastContentSizeInterfaceOrientation=_lastContentSizeInterfaceOrientation - In the implementation block
+(CGSize)defaultContentSize;
+(CGSize)defaultContentSizeLargerThanKeyboard:(BOOL*)arg1 ;
-(CGSize)intrinsicContentSize;
-(CGSize)lastContentSize;
-(long long)lastContentSizeInterfaceOrientation;
-(void)setLastContentSize:(CGSize)arg1 ;
-(void)setLastContentSizeInterfaceOrientation:(long long)arg1 ;
@end

