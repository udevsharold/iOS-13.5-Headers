/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:00 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol CKActionMenuGestureRecognizerButtonDelegate;
@class CKActionMenuGestureRecognizer, UIButton, NSDate;

@interface CKActionMenuGestureRecognizerButton : NSObject {

	CKActionMenuGestureRecognizer* _gestureRecognizer;
	UIButton* _button;
	id<CKActionMenuGestureRecognizerButtonDelegate> _delegate;
	NSDate* _gestureDidBeginDate;

}

@property (nonatomic,retain) CKActionMenuGestureRecognizer * gestureRecognizer;                            //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) UIButton * button;                                                            //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) NSDate * gestureDidBeginDate;                                                 //@synthesize gestureDidBeginDate=_gestureDidBeginDate - In the implementation block
@property (assign,nonatomic,__weak) id<CKActionMenuGestureRecognizerButtonDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)actionMenuGestureRecognizerButtonWithButton:(id)arg1 ;
-(id<CKActionMenuGestureRecognizerButtonDelegate>)delegate;
-(void)setDelegate:(id<CKActionMenuGestureRecognizerButtonDelegate>)arg1 ;
-(UIButton *)button;
-(void)setGestureRecognizer:(CKActionMenuGestureRecognizer *)arg1 ;
-(CKActionMenuGestureRecognizer *)gestureRecognizer;
-(void)setButton:(UIButton *)arg1 ;
-(id)initWithGestureRecognizer:(id)arg1 button:(id)arg2 ;
-(void)gestureRecognized:(id)arg1 ;
-(void)touchDownButton:(id)arg1 ;
-(void)touchUpInsideButton:(id)arg1 ;
-(void)touchUpOutsideButton:(id)arg1 ;
-(void)setGestureDidBeginDate:(NSDate *)arg1 ;
-(NSDate *)gestureDidBeginDate;
@end

