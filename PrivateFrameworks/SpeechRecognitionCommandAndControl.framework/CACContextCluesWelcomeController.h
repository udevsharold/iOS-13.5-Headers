/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:57:08 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OnBoardingKit/OBTextWelcomeController.h>

@protocol CACContextCluesWelcomeControllerDelegate;
@interface CACContextCluesWelcomeController : OBTextWelcomeController {

	id<CACContextCluesWelcomeControllerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<CACContextCluesWelcomeControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<CACContextCluesWelcomeControllerDelegate>)delegate;
-(void)setDelegate:(id<CACContextCluesWelcomeControllerDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
@end

