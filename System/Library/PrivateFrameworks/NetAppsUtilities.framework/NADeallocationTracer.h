/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:33:11 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/NetAppsUtilities.framework/NetAppsUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NADeallocationTracerDelegate;
@interface NADeallocationTracer : NSObject {

	id<NADeallocationTracerDelegate> _delegate;

}

@property (assign,nonatomic) id<NADeallocationTracerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<NADeallocationTracerDelegate>)delegate;
-(void)setDelegate:(id<NADeallocationTracerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

