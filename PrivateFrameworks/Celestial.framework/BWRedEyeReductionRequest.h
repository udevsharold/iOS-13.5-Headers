/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:43:29 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol BWStillImageProcessorControllerDelegate;
@class BWRedEyeReductionControllerInput;

@interface BWRedEyeReductionRequest : NSObject {

	BWRedEyeReductionControllerInput* _input;
	id<BWStillImageProcessorControllerDelegate> _delegate;
	int _mode;

}

@property (nonatomic,readonly) BWRedEyeReductionControllerInput * input;                          //@synthesize input=_input - In the implementation block
@property (nonatomic,readonly) id<BWStillImageProcessorControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) int mode;                                                            //@synthesize mode=_mode - In the implementation block
-(void)dealloc;
-(id)description;
-(id<BWStillImageProcessorControllerDelegate>)delegate;
-(void)setMode:(int)arg1 ;
-(BWRedEyeReductionControllerInput *)input;
-(int)mode;
-(id)initWithInput:(id)arg1 delegate:(id)arg2 ;
@end

