/*
* This header is generated by classdump-dyld 1.0
* on Saturday, June 6, 2020 at 11:45:54 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoardUIServices/SpringBoardUIServices-Structs.h>
#import <SpringBoardFoundation/SBFView.h>

@protocol SBUISizeObservingViewDelegate;
@interface SBUISizeObservingView : SBFView {

	BOOL _delegateInterestedInSizeChanges;
	id<SBUISizeObservingViewDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<SBUISizeObservingViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<SBUISizeObservingViewDelegate>)delegate;
-(void)setDelegate:(id<SBUISizeObservingViewDelegate>)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
@end

