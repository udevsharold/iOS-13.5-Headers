/*
* This header is generated by classdump-dyld 1.0
* on Monday, September 7, 2020 at 2:32:16 PM US Time
* Operating System: Version 13.5 (Build 17F75)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <iTunesStore/ISInvocationRecorder.h>

@class Protocol;

@interface SUResponderChainInvocationRecorder : ISInvocationRecorder {

	Protocol* _protocol;

}
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(id)initWithTarget:(id)arg1 protocol:(id)arg2 ;
-(void)invokeInvocation:(id)arg1 ;
-(id)_targetForSelector:(SEL)arg1 sender:(id)arg2 ;
-(id)adjustedTargetForSelector:(SEL)arg1 ;
@end

